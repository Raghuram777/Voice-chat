cmake_minimum_required(VERSION 3.20)
project(VoIP_Project)

# Use C++17 and target Windows 7+
set(CMAKE_CXX_STANDARD 17)
add_definitions(-D_WIN32_WINNT=0x0601)

# -------------------------
# PortAudio (built statically)
# -------------------------
add_subdirectory(external/portaudio)

# -------------------------
# Include Paths
# -------------------------
include_directories(
    ${CMAKE_SOURCE_DIR}/external/portaudio/include
    ${CMAKE_SOURCE_DIR}/external/asio/include
    ${CMAKE_SOURCE_DIR}/common
    ${CMAKE_SOURCE_DIR}/client
    ${CMAKE_SOURCE_DIR}/server
)

# -------------------------
# Client Target
# -------------------------
add_executable(voip_client
    client/main.cpp
    client/audio_engine.cpp
    client/udp_client.cpp
)

target_link_libraries(voip_client
    portaudio_static
    ws2_32
    iphlpapi
)

# -------------------------
# Server Target
# -------------------------
add_executable(voip_server
    server/main.cpp
    server/udp_server.cpp
)

target_link_libraries(voip_server
    portaudio_static
    ws2_32
    iphlpapi
)
