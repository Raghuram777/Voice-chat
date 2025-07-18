#pragma once
#define ASIO_STANDALONE
#include <asio.hpp>
#include <thread>
#include "audio_engine.h"

class UDPClient {
public:
    UDPClient(AudioEngine& audio);
    bool start(const std::string& peer_ip, int peer_port, int local_port);

private:
    void sendLoop();
    void receiveLoop();

    asio::io_context io_context;
    std::unique_ptr<asio::ip::udp::socket> socket;
    asio::ip::udp::endpoint peer_endpoint;

    AudioEngine& audioEngine;
};
