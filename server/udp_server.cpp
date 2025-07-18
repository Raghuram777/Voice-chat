// === server/udp_server.cpp ===
#include "udp_server.h"
#include "../common/config.h"
#include <iostream>

using asio::ip::udp;

UDPRelayServer::UDPRelayServer(short port)
    : socket(io_context, udp::endpoint(udp::v4(), port)) {}

void UDPRelayServer::start() {
    receive();
    io_context.run();
}

void UDPRelayServer::receive() {
    auto buffer = std::make_shared<std::vector<char>>(MAX_PACKET_SIZE);
    auto sender_endpoint = std::make_shared<udp::endpoint>();

    socket.async_receive_from(
        asio::buffer(*buffer), *sender_endpoint,
        [this, buffer, sender_endpoint](std::error_code ec, std::size_t bytes_recvd) {
            if (!ec && bytes_recvd > 0) {
                std::string client_id = sender_endpoint->address().to_string() + ":" +
                                        std::to_string(sender_endpoint->port());

                {
                    std::lock_guard<std::mutex> lock(map_mutex);
                    client_map[client_id] = *sender_endpoint;
                }

                forward(client_id, std::vector<char>(buffer->begin(), buffer->begin() + bytes_recvd));
            }
            receive(); // Continue listening
        }
    );
}

void UDPRelayServer::forward(const std::string& sender_id, const std::vector<char>& data) {
    std::lock_guard<std::mutex> lock(map_mutex);
    for (const auto& [client_id, endpoint] : client_map) {
        if (client_id != sender_id) {
            socket.send_to(asio::buffer(data), endpoint);
        }
    }
}
