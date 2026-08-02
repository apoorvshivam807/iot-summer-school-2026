# IoT-Based Advanced Wildlife Monitoring and Anti-Poaching System
*(Non-Intrusive Remote Tracking & Microclimate Sensing for Conservation)*

**Presented by:** Group 11 (Anju, Samya Malhotra, Apoorv Shivam, Vidish Gupta)  
**Under the guidance of:** Majid Majeed sir

---

## 📖 Table of Contents
1. [Project Objective](#-project-objective)
2. [Problem Statement](#-problem-statement)
3. [The SYVIX Solution](#-the-syvix-solution)
4. [System Architecture](#-system-architecture)
5. [System Execution Pipeline](#-system-execution-pipeline)
6. [Hardware Components](#-hardware-components)
7. [Why IoT?](#-why-iot)
8. [Current Development](#-current-development)

---

## 🎯 Project Objective
The proposed system integrates multiple hardware modules into a single monitoring platform to safeguard wildlife and forest ecosystems. 

A Passive Infrared (PIR) sensor continuously detects movement within its field of view. Upon detecting movement, the ESP32 controller activates the ESP32-CAM module to capture an image. Simultaneously, the DHT22 sensor records temperature and humidity values, while the GPS module determines the geographical location. The ESP32 then transmits all collected information through Wi-Fi or LoRa communication to a cloud platform, where it is displayed on a user-friendly dashboard for remote monitoring.

---

## ⚠️ Problem Statement

### Ecological & Human Threats
* **Human-Wildlife Conflict:** Animals entering local settlements, risking lives, livelihoods, and crops.
* **Unmanaged Forest Fires:** Delayed ignition tracking causes devastating loss of biodiversity and deep carbon storage.
* **Illegal Poaching:** Organized intrusion pathways targeting endangered fauna without trace evidence.

### System & Grid Constraints
* **Critical Power Constraints:** No physical grid access; active deep-forest surveillance drains batteries rapidly.
* **Constant Power Requirements:** Standard cameras require 24/7 internet/power links, which is unfeasible in deep terrain.
* **Connectivity Failures:** High-bandwidth transmission fails in dense forest canopies.

---

## 💡 The SYVIX Solution
* **Smart IoT Edge Nodes:** Fully wireless, lightweight computing setups operating locally under heavy foliage.
* **Event-Triggered Architecture:** Remains in micro-amp 'Deep Sleep' and wakes instantly upon motion or thermal sensor triggers.
* **YOLOv8 Edge Analysis:** Real-time machine learning models dynamically recognize humans and wildlife locally.
* **Central SYVIX Core Dashboard:** A secure hub delivering live system telemetry, GPS metrics, and threat level management.

---

## 🏗️ System Architecture
* **Edge Layer:** Distributed IoT nodes with embedded processing capabilities for local data acquisition and preprocessing, reducing transmission bandwidth and enabling offline operation.
* **Communication Layer:** Multi-protocol connectivity (WiFi/LoRa) ensuring reliable data transmission across diverse forest topographies and terrain challenges.
* **Cloud Layer:** Centralized data aggregation, advanced analytics, machine learning model serving, and long-term data archival infrastructure.
* **Application Layer:** Web and mobile dashboards providing real-time alerts, historical analytics, and decision support for forest managers and conservation teams.

---

## ⚙️ System Execution Pipeline
1. **Deep Sleep:** ESP32-CAM rests in low power standby state, consuming negligible battery.
2. **Trigger:** Sensors (PIR/Flame) capture a physical event and initiate systemic wake-up.
3. **Action:** Microcontroller executes telemetry reads, pans servo, and shoots optics frames.
4. **Transmit:** Secure multipart telemetry payload is sent over HTTP POST to the central Flask engine.
5. **YOLOv8 Scan:** AI pipeline immediately classifies the frame content for potential threats.
6. **Alert:** Live Dashboard logs threat classification metrics and issues secure vault storage.

*(Note: The HC-SR501 PIR module scans a 120° zone and triggers an interrupt when it detects warm-blooded thermal shifts.)*

---

## 🔌 Hardware Components
| Component | Device Specification |
| :--- | :--- |
| **ESP-32 CAM** | Wi-Fi + OV2640 Optics Module |
| **PIR Sensor** | High-Sensitivity Passive Pyroelectric (HC-SR501) |
| **Flame Sensor** | Infrared Spectral Detection |
| **DHT11/DHT22** | Atmospheric Monitor (Temperature & Humidity) |
| **GSM/LoRa Module** | Long-range or Cellular Data Transmission |
| **Battery** | Li-ion battery pack for power supply |
| **Servo Motor** | SG90 Directional Core |

---

## 🌐 Why IoT?
The Internet of Things (IoT) refers to a network of physical devices equipped with sensors, processors, and communication technologies that enable them to collect, exchange, and analyze data over the internet. 

In this project, IoT enables continuous monitoring of wildlife without requiring constant human presence. Sensors gather information about movement and environmental conditions, the ESP32 processes the collected data, wireless communication transmits it to a cloud server, and the dashboard provides remote visualization. This interconnected architecture forms the foundation of the proposed smart monitoring system.

---

## 💻 Current Development
The **Wildlife Sentry Core** (by The Syvix Technology) is currently in development. Features include:
* Telemetry & Location Optics
* Live System Logs
* Secure Vault Integration
* Safe State Monitoring with AI YOLOv8 Engine integration
* Real-time tracking of Node Status, Last Sync, Temperature, and Humidity
