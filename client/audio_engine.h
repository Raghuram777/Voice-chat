#pragma once
#include <portaudio.h>
#include <queue>
#include <mutex>
#include <vector>

class AudioEngine {
public:
    AudioEngine();
    ~AudioEngine();

    bool start();
    void stop();

    bool getCapturedAudio(char* buffer, size_t size);
    void queueIncomingAudio(const char* buffer, size_t size);

private:
    PaStream* inputStream;
    PaStream* outputStream;

    std::queue<std::vector<char>> playbackQueue;
    std::mutex queueMutex;

    static int inputCallback(const void* input, void*, unsigned long,
                             const PaStreamCallbackTimeInfo*, PaStreamCallbackFlags, void*);
    static int outputCallback(const void*, void* output, unsigned long frameCount,
                              const PaStreamCallbackTimeInfo*, PaStreamCallbackFlags, void* userData);

    std::vector<char> lastCaptured;
};
