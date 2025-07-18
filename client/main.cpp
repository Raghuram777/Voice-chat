#include "audio_engine.h"
#include "udp_client.h"
#include "../common/config.h"
#include <iostream>
#include <csignal>
#include <atomic>
#include <thread>
#include <chrono>

std::atomic<bool> running{true};

void signalHandler(int) {
    running = false;
    std::cout << "\nShutting down...\n";
}

int main() {
    // Register signal handler for graceful shutdown
    std::signal(SIGINT, signalHandler);

    // Initialize audio engine
    AudioEngine engine;
    if (!engine.start()) {
        std::cerr << "Audio Engine failed to start.\n";
        return 1;
    }

    std::string peer_ip;
    int local_port;

    std::cout << "Enter peer IP: ";
    std::cin >> peer_ip;

    std::cout << "Enter local port (must be unique): ";
    std::cin >> local_port;

    UDPClient client(engine);
    if (!client.start(peer_ip, SERVER_PORT, local_port)) {
        std::cerr << "Client start failed!\n";
        return 1;
    }

    // Keep alive while running
    while (running) {
        std::cout << "[Main] Running...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
