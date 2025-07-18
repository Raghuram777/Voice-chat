# 🎙️ Real-Time Voice Chat (VoIP) Application

A lightweight C++ VoIP (Voice over IP) client-server application using **PortAudio** and **ASIO** (Boost or Standalone) for real-time audio streaming over UDP.

---

## 🚀 Features

- 🎧 Real-time audio capture and playback using **PortAudio**
- 🌐 Peer-to-peer communication over **UDP**
- ⚡ Built with **ASIO** for efficient networking
- 🧩 Modular client-server architecture
- 🪟 Windows-ready (portable with tweaks)

---

## 📁 Project Structure

voice-chat/
├── client/
│ ├── main.cpp
│ ├── audio_engine.h / .cpp
│ ├── udp_client.h / .cpp
├── server/
│ ├── main.cpp
│ ├── udp_server.h / .cpp
├── common/
│ └── config.h
├── external/
│ ├── asio/
│ └── portaudio/
├── build/
├── CMakeLists.txt
└── README.md

yaml
Copy
Edit

---

## 🛠️ Requirements

- [CMake](https://cmake.org/download/) ≥ 3.20
- [Visual Studio 2022](https://visualstudio.microsoft.com/)
- C++17 compatible compiler (e.g., MSVC)
- [PortAudio](http://www.portaudio.com/)
- [Standalone Asio](https://think-async.com/Asio/)
- Windows 10/11

---

## 🔧 Build Instructions (Windows)

### 1. Clone and enter the project:

git clone https://github.com/your-username/voice-chat.git
cd voice-chat
2. Make sure you have the dependencies:
asio in external/asio

portaudio in external/portaudio

3. Build the project:
cmake -B build -G "Visual Studio 17 2022"
cmake --build build --config Release
▶️ Run Instructions
Start the server:
bash
Copy
Edit
cd build/Release
voip_server.exe
Start two clients (in different terminals):
bash
Copy
Edit
voip_client.exe
Enter server IP (usually 127.0.0.1)

Enter unique port per client (e.g. 50001, 50002)

📚 Credits
PortAudio – audio I/O library

ASIO (Boost or Standalone) – efficient networking backend
---