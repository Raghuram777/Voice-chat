#include "audio_engine.h"
#include "../common/config.h"
#include <iostream>
#include <cstring>

AudioEngine::AudioEngine() : inputStream(nullptr), outputStream(nullptr) {
    Pa_Initialize();
}

AudioEngine::~AudioEngine() {
    stop();
    Pa_Terminate();
}

bool AudioEngine::start() {
    Pa_OpenDefaultStream(&inputStream, 1, 0, paInt16, SAMPLE_RATE, FRAMES_PER_BUFFER, inputCallback, this);
    Pa_OpenDefaultStream(&outputStream, 0, 1, paInt16, SAMPLE_RATE, FRAMES_PER_BUFFER, outputCallback, this);
    return Pa_StartStream(inputStream) == paNoError && Pa_StartStream(outputStream) == paNoError;
}

void AudioEngine::stop() {
    if (inputStream) Pa_StopStream(inputStream);
    if (outputStream) Pa_StopStream(outputStream);
}

int AudioEngine::inputCallback(const void* input, void*, unsigned long frameCount,
                               const PaStreamCallbackTimeInfo*, PaStreamCallbackFlags, void* userData) {
    auto* engine = static_cast<AudioEngine*>(userData);
    engine->lastCaptured.assign((char*)input, (char*)input + frameCount * 2);
    return paContinue;
}

int AudioEngine::outputCallback(const void*, void* output, unsigned long frameCount,
                                const PaStreamCallbackTimeInfo*, PaStreamCallbackFlags, void* userData) {
    auto* engine = static_cast<AudioEngine*>(userData);
    std::lock_guard<std::mutex> lock(engine->queueMutex);
    if (!engine->playbackQueue.empty()) {
        memcpy(output, engine->playbackQueue.front().data(), frameCount * 2);
        engine->playbackQueue.pop();
    } else {
        memset(output, 0, frameCount * 2);
    }
    return paContinue;
}

bool AudioEngine::getCapturedAudio(char* buffer, size_t size) {
    if (lastCaptured.size() < size) return false;
    memcpy(buffer, lastCaptured.data(), size);
    return true;
}

void AudioEngine::queueIncomingAudio(const char* buffer, size_t size) {
    std::lock_guard<std::mutex> lock(queueMutex);
    playbackQueue.emplace(buffer, buffer + size);
}
