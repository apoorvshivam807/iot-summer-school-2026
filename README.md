# IoT & Drones Summer School 2026 — Complete Journey Repository

This repository documents my complete learning and project journey during the **IoT & Drones Summer School 2026 (IIT Jammu)**.  
It includes weekly hands-on implementations, theory work, assignments, simulation and hardware setup practices, and final project preparation.

---

## 1) About Me

- **Name:** Apoorv Shivam  
- **Program:** B.Tech (Electronics and Communication Engineering)  
- **Institution:** Shri Mata Vaishno Devi University (SMVDU), Katra, Jammu & Kashmir  
- **Track:** Embedded Systems + IoT + Wireless Communication + Cloud Integration  

---

## 2) Repository Purpose

This is not just a code dump — it is a complete portfolio-style academic + practical record showing:

- foundational Arduino/ESP work
- sensor and actuator interfacing
- communication protocols (UART, I2C, SPI, BLE, Wi-Fi, MQTT, HTTP)
- low-power and real-time logic
- applied IoT architecture thinking
- assignments with design-level and security-level analysis

---

## 3) Full Repository Structure

- `week1/` → Embedded basics and first hardware logic
- `week2/` → Communication protocols + architecture-heavy systems
- `week3/` → Sensor-driven automation + API-connected IoT
- `week4/` → Wireless IoT systems and cloud messaging workflows
- `assignment/` → Question-wise written assignment submissions
- `Assignment 3/` → Advanced assignment PDF set
- `theory/` → Concept notes (Git, IoT layers, MCU/MPU, calibration, etc.)
- `final_project/` → Final project workspace
- `portfolio/` → Consolidated portfolio summary
- `LICENSE.md` → MIT License

---

## 4) Detailed Weekly Journey

## Week 1 — Embedded Foundations

### Focus
Week 1 built my fundamentals in Arduino setup, digital output control, matrix logic, and analog sensing.

### Projects Completed

1. **LED Blink**  
   - Learned `pinMode()`, `digitalWrite()`, `delay()`  
   - Built first reliable hardware output cycle using LED and resistor

2. **5x5 LED Matrix Display**  
   - Implemented row-column multiplexing  
   - Practiced pattern mapping and refresh logic for character rendering

3. **Sensor Matrix Logic Simulation**  
   - Developed multi-dimensional logical mapping  
   - Printed structured matrix-based sensor coordinate outputs via Serial Monitor

4. **Smart Street Light (LDR)**  
   - Built analog threshold automation with LDR  
   - Read analog values using ADC and controlled LED as automatic street light

### Skills Built in Week 1
- Basic circuit wiring confidence  
- Power rail usage (`5V`, `GND`)  
- Resistor selection and safe current-limiting  
- Intro to analog input and threshold decision-making  

---

## Week 2 — Protocols and System Design

### Focus
Week 2 moved from basic IO to interaction systems, protocol communication, state machines, and low-power embedded design.

### Projects Completed

1. **Digital Piano**  
   - Multi-button input scanning  
   - Tone generation with buzzer

2. **ESP32 Deep Sleep**  
   - Power optimization using sleep cycles  
   - RTC memory-based boot persistence (`RTC_DATA_ATTR`)

3. **I2C LCD Display**  
   - Two-wire protocol communication (SDA/SCL)  
   - Character display output on 16x2 LCD via I2C interface

4. **Reaction Time Game**  
   - Randomized delays and user response timing  
   - Measured reaction latency using `millis()`

5. **Serial Interface Controller**  
   - String command parsing from serial input  
   - Controlled hardware states using text commands (`ON` / `OFF`)

6. **SPI Master-Slave Communication**  
   - Implemented master-slave signaling  
   - Understood MOSI, SCK, SS coordination and synchronous transfer logic

7. **Traffic Light Controller (FSM)**  
   - Built finite-state machine based sequence control  
   - Modeled real traffic timing transitions (Red/Yellow/Green)

8. **UART Direct Signaling**  
   - Point-to-point serial communication across two boards  
   - Shared ground and digital line synchronization

9. **Pin-Maximized Autonomous Vehicle**  
   - Used nearly full Arduino pin capacity  
   - Combined ultrasonic sensing, movement logic, and multi-node signaling

### Skills Built in Week 2
- Protocol understanding: UART, I2C, SPI  
- Finite-state and event-driven logic  
- Low-power embedded behavior on ESP32  
- Multi-device coordination strategies  

---

## Week 3 — Sensor-Driven and Internet-Connected IoT

### Focus
Week 3 centered on real-time sensor measurement, control systems, and external data integration.

### Projects Completed

1. **LDR Threshold Alarm**  
   - Light-level monitoring  
   - Triggered buzzer-based alerts on threshold breach

2. **Temperature Telemetry**  
   - Sensor-value conversion and data logging  
   - Continuous serial telemetry streaming

3. **Ultrasonic Range Finder**  
   - Distance measurement using pulse timing  
   - Time-of-flight calculation for object detection

4. **Automated Vehicle Access (ESP32)**  
   - Barrier/gate automation with servo  
   - Detection + alert + actuator workflow integration

5. **ESP32 Push Button LED Blink**  
   - Input pull-up handling  
   - Conditional LED behavior tied to switch input

6. **Weather API Data Fetch (ESP32)**  
   - Wi-Fi connectivity and HTTP data retrieval  
   - Combined local sensor data with remote weather/AQI response

7. **PWM Fading Night Light**  
   - Smooth LED intensity transitions  
   - Practical PWM behavior control

8. **Laser-LDR Communication**  
   - Optical signaling concept  
   - Receiver-side signal interpretation via LDR

### Skills Built in Week 3
- Sensor telemetry formatting  
- Hybrid local + cloud data thinking  
- ESP32-based automation workflows  
- PWM and measurement-based control loops  

---

## Week 4 — Wireless IoT and Cloud Messaging

### Focus
Week 4 focused on wireless device control, dashboard interfaces, and message-broker architecture.

### Projects Completed

1. **Bluetooth LED Controller**  
   - HC-05 command-based control  
   - Wireless RGB/LED actuation from mobile interface

2. **BLE Sensor Dashboard**  
   - GATT service/characteristic concepts  
   - BLE telemetry broadcast (temperature, humidity, uptime)

3. **Wi-Fi Temperature Monitor + LED Control**  
   - ESP32 web server hosting  
   - Browser-driven monitoring and remote LED control actions

4. **MQTT Sensor Publisher + LED Controller**  
   - Publish/subscribe topic design  
   - JSON payload telemetry + command listener model

### Skills Built in Week 4
- Bluetooth and BLE architecture basics  
- Web-based embedded UI exposure  
- MQTT-based scalable IoT messaging  
- Cloud-ready telemetry and remote control patterns  

---
## Final Project Overview

### IoT-Based Advanced Wildlife Monitoring and Anti-Poaching System
**(Non-Intrusive Remote Tracking & Microclimate Sensing for Conservation)**


**Mentor:** Majid Majeed Sir

### Project Objective
This project builds an integrated IoT monitoring platform for wildlife and forest protection.  
The system combines motion detection, environmental sensing, location capture, and wireless telemetry to provide real-time remote monitoring for conservation teams.

### Problem Statement
The project addresses key field challenges:
- **Human-wildlife conflict** in settlement-border zones
- **Delayed forest fire detection** causing ecological loss
- **Poaching risk** in remote regions with low surveillance
- **No reliable power grid** in deep-forest deployment areas
- **Unstable high-bandwidth connectivity** under dense canopy

### Proposed SYVIX Solution
- **Smart IoT edge nodes** for local sensing and processing
- **Event-triggered architecture** with deep-sleep operation for battery efficiency
- **ESP32-CAM image capture** on sensor trigger
- **Microclimate + location telemetry** using DHT and GPS
- **Wireless uplink** via Wi-Fi / LoRa / GSM
- **AI-assisted analysis** (YOLOv8-based threat classification pipeline)
- **Central dashboard** for live alerts, logs, and node status

### High-Level System Architecture
1. **Edge Layer:** Sensor-equipped IoT nodes collect and preprocess data locally  
2. **Communication Layer:** Multi-protocol transmission (Wi-Fi/LoRa/GSM)  
3. **Cloud Layer:** Data aggregation, analytics, model serving, and storage  
4. **Application Layer:** Dashboard for alerts, history, and operational decisions  

### System Execution Pipeline
1. Node stays in **Deep Sleep** for power saving  
2. **PIR/Flame trigger** wakes the controller  
3. System reads sensors and captures camera frame  
4. Telemetry + image payload is transmitted to server  
5. AI model classifies potential human/wildlife/threat activity  
6. Dashboard logs events and raises alerts for response teams  

### Hardware Components Used
- **ESP32-CAM** (Wi-Fi + OV2640 camera)
- **PIR Sensor** (HC-SR501)
- **Flame Sensor**
- **DHT11/DHT22** (temperature/humidity)
- **GSM / LoRa communication module**
- **Li-ion battery pack**
- **SG90 servo motor**

### Why IoT in This Project
IoT enables continuous, remote, and low-maintenance monitoring in locations where human patrol and fixed infrastructure are difficult.  
By connecting sensors, controller logic, communication modules, and cloud dashboards, the system supports faster detection, better evidence capture, and improved wildlife protection response.

### Current Development Status
The **Wildlife Sentry Core (SYVIX Technology)** is currently under development with:
- Telemetry and location capture
- Live system logging
- Secure data vault integration
- AI-enabled safe-state monitoring (YOLOv8 pipeline)
- Real-time node health tracking (last sync, temperature, humidity)

### Final Project Folder
`/final_project`

## 5) Assignments and Academic Coverage

## Assignment Set 1 (Q1–Q17)
This set covered:
- Arduino vs ESP32 platform selection
- IoT communication trade-offs
- interrupt vs polling design
- OTA and reliability logic
- protocol choice by use-case
- embedded architecture decision-making

## Assignment Set 3 (Q35–Q50)
This advanced set covered:
- weather API and practical IoT integration
- MQTT fundamentals and QoS implications
- IoT Wi-Fi security and vulnerabilities
- solution designs in smart home, agriculture, flood alert, healthcare, access control
- smart city proposal direction and system thinking

---

## 6) Theory Work Included

The theory section includes conceptual understanding of:
- `git pull` vs `git fetch` vs `git clone`
- `.gitignore` usage
- IoT layered architecture
- MCU vs MPU
- Arduino pin functionalities
- analog read vs PWM write
- `setup()` / `loop()` behavior and non-blocking logic
- sensor calibration principles
- I2C workflow and addressing

---

## 7) Setup and Execution Environment

## Hardware Used
- Arduino Uno
- ESP32 / ESP8266
- Breadboard, jumper wires
- LEDs, resistors, buzzers, servo motors
- LDR, DHT11, ultrasonic and related sensors

## Software / Platforms Used
- Arduino IDE
- Tinkercad
- Wokwi
- Velxio
- Serial Monitor tools
- MQTT client/broker ecosystem tools

## Typical Libraries Used
- `DHT`
- `PubSubClient`
- `ArduinoJson`
- `LiquidCrystal_I2C`

---

## 8) Programming Languages and Technical Stack

- **C/C++** for Arduino and ESP32 sketches
- **Markdown** for reports, theory notes, and documentation
- **Python** for utility-level repository scripts

---

## 9) Learning Outcomes

By the end of this journey, I gained hands-on capability in:

- end-to-end embedded prototyping
- real-world sensor integration
- protocol-level IoT communication
- low-power and real-time behavior design
- wireless control and cloud telemetry architecture
- structured engineering documentation for portfolio and review

---

## 10) Fair Use Policy

This repository is shared for:

- educational learning
- technical portfolio evaluation
- reference for embedded/IoT implementation patterns

Allowed:
- reuse under MIT terms with attribution

Not allowed:
- academic plagiarism or direct submission of this work as someone else’s original work
- misrepresentation of authorship

---

## 11) License

This repository is released under the **MIT License**.

---

## 12) Portfolio Identity

- **Author:** Apoorv Shivam  
- **Domain Focus:** Embedded Systems, IoT Communication, Wireless and Cloud-Connected Automation  
- **Use Case:** Internship/project showcase + technical growth documentation
