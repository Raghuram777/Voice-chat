#pragma once

// Audio settings
constexpr int SAMPLE_RATE = 44100;
constexpr int FRAMES_PER_BUFFER = 512;
constexpr int BUFFER_SIZE = FRAMES_PER_BUFFER * 2; // 16-bit audio = 2 bytes per sample
constexpr int MAX_PACKET_SIZE = 1024;

// Network ports
constexpr int CLIENT_PORT = 50001;
constexpr int SERVER_PORT = 50000;

// Server IP (for client to connect to)
constexpr const char* SERVER_IP = "127.0.0.1";  // Replace with actual server IP if needed
