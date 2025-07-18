#include "udp_client.h"
#include "../common/config.h"
#include <iostream>

using asio::ip::udp;

UDPClient::UDPClient(AudioEngine& audio)
    : audioEngine(audio) {
    // defer socket creation to start()
}

bool UDPClient::start(const std::string& peer_ip, int peer_port, int local_port) {
    try {
        socket = std::make_unique<udp::socket>(io_context);
        socket->open(udp::v4());
        socket->bind(udp::endpoint(udp::v4(), local_port));

        peer_endpoint = udp::endpoint(asio::ip::make_address(peer_ip), peer_port);
        std::cout << "[Client] Bound to port " << local_port << "\n";

        std::thread(&UDPClient::sendLoop, this).detach();
        std::thread(&UDPClient::receiveLoop, this).detach();

        std::cout << "[Client] Threads started. Communicating with " << peer_ip << ":" << peer_port << "\n";
        return true;
    } catch (const std::exception& e) {
        std::cerr << "[Client] Error in start(): " << e.what() << "\n";
        return false;
    }
}

void UDPClient::sendLoop() {
    std::cout << "[Client] Send loop started\n";
    std::vector<char> buffer(BUFFER_SIZE);
    while (true) {
        if (audioEngine.getCapturedAudio(buffer.data(), buffer.size())) {
            socket->send_to(asio::buffer(buffer), peer_endpoint);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

void UDPClient::receiveLoop() {
    std::cout << "[Client] Receive loop started\n";
    std::vector<char> buffer(MAX_PACKET_SIZE);
    udp::endpoint sender;
    while (true) {
        size_t len = socket->receive_from(asio::buffer(buffer), sender);
        audioEngine.queueIncomingAudio(buffer.data(), len);
    }
}
