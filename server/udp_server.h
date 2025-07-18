#pragma once

#define ASIO_STANDALONE
#include <asio.hpp>
#include <unordered_map>
#include <string>
#include <mutex>
#include <vector>

class UDPRelayServer {
public:
    UDPRelayServer(short port);
    void start();

private:
    void receive();
    void forward(const std::string& client_id, const std::vector<char>& data);

    asio::io_context io_context;
    asio::ip::udp::socket socket;
    std::unordered_map<std::string, asio::ip::udp::endpoint> client_map;
    std::mutex map_mutex;
};
