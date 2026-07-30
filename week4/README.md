# Week 4:
**Course:** IoT & Drones (IIT Jammu Summer School 2026)  
**Student Name:** Apoorv Shivam  

---

## 📅 Weekly Overview
Week 4 focused on wireless IoT communication workflows using Bluetooth, BLE, Wi-Fi, and MQTT. The projects cover local device control, real-time sensor dashboards, web-based monitoring, and cloud-connected publish/subscribe systems.

---

## 📂 Projects

### 1. 💡 Bluetooth LED Controller (`/ Bluetooth LED Controller`)
* **Project Type:** Wireless Local Device Control
* **Core Concepts:** HC-05 serial communication, command parsing, SoftwareSerial, multi-LED control logic.
* **System Execution:** Receives Bluetooth commands from a phone app to control RGB LEDs and trigger flash sequences.

### 2. 📲 BLE Sensor Dashboard (`/Bluetooth Sensor Dashboard`)
* **Project Type:** BLE Telemetry Broadcasting
* **Core Concepts:** BLE GATT service/characteristics, DHT11 sensing, periodic notifications, mobile BLE clients.
* **System Execution:** Broadcasts temperature, humidity, and uptime timestamp to BLE scanner apps every 3 seconds.

### 3. 🌐 Wi-Fi Temperature Monitor & LED Controller (`/Wi-Fi Temperature Monitor `)
* **Project Type:** Embedded Web Dashboard
* **Core Concepts:** ESP32 web server routing, dynamic HTML rendering, HTTP POST actions, periodic auto-refresh.
* **System Execution:** Hosts a live sensor dashboard over Wi-Fi with a browser button to toggle LED state remotely.

### 4. ☁️ MQTT Sensor Publisher & LED Controller (`/MQTT Sensor Publisher`)
* **Project Type:** Cloud MQTT Integration
* **Core Concepts:** MQTT publish/subscribe topics, JSON payloads, NTP timestamp sync, remote LED actuation.
* **System Execution:** Publishes sensor telemetry to HiveMQ topics and listens for LED control commands.

---

## 🚀 General Execution Framework

### Running Projects in Simulator/IDE
1. Open the required Week 4 project folder and load the `.ino` sketch.
2. Use Arduino IDE or Wokwi depending on project requirements.
3. Install required libraries (DHT, PubSubClient, ArduinoJson, etc.) when needed.
4. Build and upload, then validate outputs using Serial Monitor / phone app / browser / MQTT client.

### Flashing to Physical Hardware
1. Connect your ESP32/Arduino board with a USB data cable.
2. Select the correct board and port in Arduino IDE.
3. Upload the sketch and verify connected sensor/LED behavior.
4. For network projects, confirm Wi-Fi/BLE/MQTT connectivity before testing control flows.
