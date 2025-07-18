// === server/main.cpp ===
#include "udp_server.h"
#include "../common/config.h"

int main() {
    UDPRelayServer server(SERVER_PORT);
    server.start();
    return 0;
}
