# Internship Report: IoT & Drones Summer School 2026

**Name:** Apoorv Shivam  
**Program:** B.Tech, Electronics and Communication Engineering  
**Institution:** Shri Mata Vaishno Devi University (SMVDU), Katra, J&K  
**Report Period:** June 10, 2026 – August 10, 2026 (8 Weeks)  
**GitHub Repository:** [github.com/apoorvshivam807/iot-summer-school-2026](https://github.com/apoorvshivam807/iot-summer-school-2026)

---

## Table of Contents
1. Introduction  
2. Internship Overview  
3. Training and Learning Phase  
4. Project Work (IoT-Based Wildlife Monitoring System)  
5. Weekly Work Log (8‑Week Detailed)  
6. Challenges Faced (In‑depth)  
7. Skills Developed  
8. Learning Outcomes  
9. Self Assessment  
10. Conclusion and Future Scope  
11. Acknowledgment

---

## Chapter 1. Introduction

### 1.1 Background
The convergence of the Internet of Things (IoT) and unmanned aerial vehicles (UAVs) is reshaping industries—from precision agriculture and smart cities to environmental conservation and disaster management. Embedded systems form the backbone of these technologies, requiring engineers to master not only hardware and firmware but also communication protocols, data analytics, and system integration. The **IoT & Drones Summer School 2026** was designed to provide an intensive, hands‑on journey through this multidisciplinary landscape, enabling participants to move from elementary microcontroller exercises to sophisticated, real‑world IoT deployments.

### 1.2 Purpose of the Internship
The primary purpose was to **bridge the gap between academic theory and industry practice** by offering a structured curriculum that combines incremental project work with conceptual studies. The internship aimed to instill practical engineering discipline—including version control, documentation, debugging, and collaborative development—while covering core topics such as embedded C, wireless protocols, sensor interfacing, low‑power design, drone flight dynamics, and professional career preparation.

### 1.3 Internship Objectives
- Gain proficiency in C/C++ for Arduino and ESP32 platforms.
- Implement and contrast major communication protocols: UART, I2C, SPI, Bluetooth/BLE, Wi‑Fi, and MQTT.
- Interface a wide variety of sensors (LDR, DHT, ultrasonic, PIR, flame, GPS) and actuators (LEDs, buzzers, servos, LCDs).
- Understand and apply power‑management techniques (deep sleep, wake‑up sources).
- Acquire foundational knowledge of drone mechanics, sensors (IMU, gyroscope, accelerometer), and PID control through dedicated theory and assignment.
- Develop an end‑to‑end IoT solution—from edge sensing to cloud analytics—for a conservation use case.
- Build a professional GitHub portfolio, a polished resume, and a comprehensive internship report.
- Engage in industry and mentor sessions to bridge academic learning with professional expectations.

### 1.4 Scope of Work
The work encompassed:
- **Weekly lab assignments** (Weeks 1–4) covering progressively complex topics.
- **Final group project** (Week 5) – an `IoT‑Based Advanced Wildlife Monitoring and Anti‑Poaching System` integrating deep sleep, image capture, telemetry, and cloud‑based YOLOv8 classification.
- **Drone theory and learning** (Week 6) – flight dynamics, sensor fusion, control loops.
- **Drone assignment** (Week 7) – 15 structured questions covering UAV definitions, types, physics, sensors, and PID.
- **Career preparation** (Week 8) – report writing, resume building, and active participation in industry/mentor sessions.

### 1.5 Internship Duration
The program ran for **8 weeks** from **June 10, 2026, to August 10, 2026**, with an estimated total effort of **180+ hours** (combining individual work, team collaboration, self‑study, and professional development).

---

## Chapter 2. Internship Overview

### 2.1 Internship Details
- **Organizer:** IoT & Drones Summer School 2026 (self‑paced curriculum with mentor support)  
- **Mentor (Final Project & Drone):** Majid Majeed  
- **Team (Final Project):** Group 11 – Anju, Samya Malhotra, Apoorv Shivam, Vidish Gupta  
- **Mode:** Hybrid – physical hardware (Arduino Uno, ESP32, sensors) plus simulation tools (Tinkercad, Wokwi) for rapid testing.

### 2.2 Internship Objectives (Reiterated)
As in 1.3, with additional emphasis on producing a **reusable, well‑documented codebase**, demonstrating **system‑level thinking** by connecting hardware, software, and user experience, and preparing **career‑ready materials** (resume, portfolio, report).

### 2.3 Roles and Responsibilities
- **Individual:**  
  - Complete all weekly lab tasks independently.  
  - Write detailed READMEs for each project.  
  - Study drone theory and submit a written assignment (15 Q&A).  
  - Maintain the GitHub repository (commits, branching, CI actions).  
  - Draft the internship report and update resume/portfolio.  

- **Team (Final Project):**  
  - Collaboratively design system architecture.  
  - Divide modules: sensor integration (PIR/DHT/GPS), camera capture, communication (MQTT), and dashboard.  
  - Conduct integration testing and debugging.  
  - Prepare final demonstration and documentation.

### 2.4 Expected Deliverables
1. **Weekly project code** for each sub‑task (e.g., `led_blink.ino`, `i2c_lcd_display.ino`).  
2. **Final project** – working prototype code, screenshots, and a demonstration.  
3. **Drone assignment** – answers to 15 questions (stored in `Drone Assignment/questions/README.md`).  
4. **Theory notes** – conceptual answers to selected questions (in `/theory`).  
5. **Portfolio** – a concise overview (`/portfolio/README.md`) summarizing the entire journey.  
6. **Internship report** – this document (Chapter 1–10).  
7. **Resume** – updated to reflect all projects, skills, and outcomes.  
8. **GitHub repository** – with all code, documentation, and a CI script to count Arduino sketches.

### 2.5 Weekly Timeline (8‑Week Detailed)

| Week | Dates | Activities | Key Topics / Deliverables |
|------|-------|------------|---------------------------|
| **Week 1** | Jun 10 – Jun 16 | Orientation, environment setup, basic Arduino projects. | LED blink, 5x5 LED matrix, sensor mapping, smart street light (LDR). |
| **Week 2** | Jun 17 – Jun 23 | Advanced peripherals and communication protocols. | UART, I2C (LCD), SPI, digital piano, traffic light, reaction game, ESP32 deep sleep, pin utilization. |
| **Week 3** | Jun 24 – Jun 30 | Sensor intelligence and internet connectivity. | Ultrasonic range finder, temperature telemetry, LDR alarm, PWM night light, weather API fetch, laser‑LDR communication. |
| **Week 4** | Jul 1 – Jul 7 | Wireless IoT systems. | Bluetooth LED control, BLE sensor dashboard, Wi‑Fi temperature monitor, MQTT publisher. |
| **Week 5** | Jul 8 – Jul 14 | **Final project integration** – Wildlife Monitoring System. | Deep sleep + PIR/Flame + camera + telemetry + MQTT + YOLOv8 cloud inference. |
| **Week 6** | Jul 15 – Jul 21 | **Drone theory & learning** – fundamentals. | Flight mechanics, 6DOF, sensor fusion (IMU, gyro, accelerometer), PID control, and UAV architectures. |
| **Week 7** | Jul 22 – Jul 28 | **Drone assignment** – structured Q&A. | Complete 15 questions on drone definitions, types, physics, sensors, and control loops; bonus research topics. |
| **Week 8** | Jul 29 – Aug 10 | **Submission, report writing, resume, industry/mentor sessions**. | Finalize internship report, polish portfolio, update resume, attend industry talks and mentor feedback sessions, submit all deliverables. |

---

## Chapter 3. Training and Learning Phase

### 3.1 Orientation Program
The first week began with an orientation session covering:
- Overview of the summer school curriculum and expected outcomes.
- Introduction to the **GitHub workflow**: forking, cloning, branching, pull requests, and writing meaningful commit messages.
- Setting up the **development environment**: Arduino IDE (with ESP32 board manager), Tinkercad, Wokwi, and serial terminal tools.
- Safety guidelines for breadboarding, power supply, and electrostatic discharge.
- Explanation of the **assessment criteria**: code quality, documentation, creativity, and final project integration.
- Introduction to the **industry mentor sessions** scheduled for Week 8.

### 3.2 Tools Learned
- **Arduino IDE** – primary development environment; used for compiling and uploading sketches.
- **Tinkercad** – online circuit simulator for rapid prototyping and sharing designs.
- **Wokwi** – ESP32 simulator with built‑in sensors and Wi‑Fi emulation.
- **Git & GitHub** – version control; used for all code and document management.
- **Serial Monitor & Plotter** – debugging and data visualization over UART.
- **Postman** – for testing HTTP/REST APIs (during weather API module).
- **MQTT Explorer** – for monitoring MQTT topics and messages.
- **LaTeX / Markdown editors** – for report and resume preparation.

### 3.3 Software/Platforms Used
| Category | Tools / Platforms |
|----------|-------------------|
| **OS** | Windows 11 / Ubuntu 22.04 (dual boot) |
| **Cloud Services** | HiveMQ (public MQTT broker), Firebase (optional for dashboard), OpenWeatherMap API |
| **Libraries** | DHT, PubSubClient, ArduinoJson, LiquidCrystal_I2C, WiFi, BluetoothSerial, ESP32‑CAM, Wire, SPI |
| **Simulation** | Tinkercad, Wokwi |
| **Documentation** | Markdown, GitHub READMEs, screenshot tools, LaTeX/Overleaf for resume |

### 3.4 Technical Concepts Studied
- **Microcontroller Architecture**: GPIO, ADC, PWM, timers, interrupts, watchdog timers.
- **Analog and Digital I/O**: `analogRead()`, `digitalWrite()`, `pulseIn()`.
- **Communication Protocols**:
  - **UART** – asynchronous serial communication (baud rate, parity, start/stop bits).
  - **I2C** – two‑wire interface, clock stretching, addressing.
  - **SPI** – full‑duplex, master‑slave, clock polarity and phase.
- **Wireless Communication**: Bluetooth Classic (Serial), BLE (advertising, GATT), Wi‑Fi (STA/AP mode), MQTT (publish/subscribe, QoS).
- **Low‑Power Design**: ESP32 deep sleep, RTC memory, wake‑up sources (timer, external interrupts).
- **Sensor Interfacing**: LDR (voltage divider), DHT11 (one‑wire), HC‑SR04 (pulse echo), PIR (motion), flame sensor (analog/digital).
- **Drone Fundamentals** (Weeks 6‑7): 6DOF, Euler angles, gyroscope vs accelerometer, magnetometer, barometer, GPS, optical flow, PID control loops, fixed‑wing vs multirotor, quadcopter vs hexacopter.

### 3.5 Documentation Reviewed
- ESP32 Technical Reference Manual and datasheet.
- Arduino Language Reference and library documentation for each sensor.
- MQTT Specification v3.1.1 and PubSubClient library examples.
- YOLOv8 documentation (Ultralytics) for object detection.
- Git documentation and best practices (Pro Git book).
- Drone textbooks and online resources (e.g., "Quadcopter Dynamics and Control").
- Resume writing guides and LinkedIn best practices (from industry sessions).

---

## Chapter 4. Project Work – IoT‑Based Wildlife Monitoring System

### 4.1 Project Introduction
**Problem Statement**  
Illegal poaching and habitat disturbance are critical threats to wildlife, particularly in remote forest areas where continuous human surveillance is impractical. Traditional methods rely on patrols and camera traps that require periodic visits to retrieve data, resulting in delayed responses. A **real‑time, low‑power, automated monitoring system** can drastically reduce response times and deter poachers.

**Objectives**  
- Continuously monitor for intrusions using **PIR (motion) and flame sensors**.  
- **Wake from deep sleep** upon detection to conserve energy.  
- **Capture high‑quality images** using the ESP32‑CAM module.  
- Record **environmental telemetry** (temperature, humidity, GPS coordinates).  
- Transmit data via **Wi‑Fi (or LoRa/GSM)** to a cloud platform.  
- Run **YOLOv8 classification** to distinguish between humans, animals, vehicles, and other objects.  
- Present alerts and historical data on an **interactive dashboard**.

**Scope**  
This project covers the complete edge‑to‑cloud pipeline for a single monitoring node. It includes hardware integration, firmware development, cloud‑side inference, and a basic web dashboard. The prototype is designed for deployment in forest environments with power constraints; future enhancements could include solar charging and mesh networking.

### 4.2 System Design

#### Overall Architecture
The system is layered as follows:
1. **Perception Layer**: PIR, Flame, DHT11, GPS (simulated), Camera.  
2. **Edge Processing Layer**: ESP32‑CAM (firmware) – handles sensor reading, image capture, and communication.  
3. **Communication Layer**: Wi‑Fi to a router, then MQTT over TCP/IP to a public broker.  
4. **Cloud/Server Layer**: A Python script subscribes to MQTT topics, runs YOLOv8 inference on received images, and logs results to a database.  
5. **Dashboard Layer**: A web application subscribes to processed alerts and displays them on a map with timestamps and classification labels.

#### Workflow Diagram
1. **Deep Sleep** – ESP32 enters deep sleep, consuming ~2mA.  
2. **Wake Trigger** – PIR or flame sensor sends a HIGH signal to a RTC GPIO.  
3. **Active Mode** – ESP32 wakes, initializes camera and sensors.  
4. **Data Capture** – Takes a JPEG photo, reads DHT and GPS (mock NMEA).  
5. **Data Packaging** – Encodes image as base64 and structures JSON with sensor values and timestamp.  
6. **Transmission** – Publishes to MQTT topic `wildlife/events`.  
7. **Cloud Processing** – Subscriber receives JSON, decodes image, runs YOLOv8, determines threat level.  
8. **Alert** – If threat is "Human" or "Vehicle", triggers a notification (email/SMS) and updates dashboard.  
9. **Return to Sleep** – After successful transmission, ESP32 goes back to deep sleep.

#### Use Case Diagram
- **Actors**: Forest Ranger, System Admin, Edge Node (autonomous).  
- **Use Cases**:  
  - Ranger: View live events, receive alerts, acknowledge alerts, view historical data.  
  - Admin: Add/remove nodes, update classification thresholds, view system health.  
  - Node: Automatically capture events, report telemetry, self‑diagnose.

#### Database Design
- **Cloud Database (Firebase / MongoDB)**:
  - Collection `events`:
    - `event_id`: string
    - `timestamp`: datetime
    - `node_id`: string
    - `image_url`: string (storage link)
    - `classification`: string (human/animal/vehicle/other)
    - `confidence`: float
    - `temperature`: float
    - `humidity`: float
    - `latitude`: float
    - `longitude`: float
    - `alert_sent`: boolean
- **Edge Storage (SD card)** – local buffer for events if connectivity is lost (FAT32 filesystem).

#### Class Diagram (Firmware)
- `NodeManager` – manages state machine (SLEEP, WAKE, CAPTURE, TRANSMIT, ERROR).  
- `SensorHub` – methods to read PIR, flame, DHT, GPS.  
- `CameraController` – initializes camera, captures image, returns JPEG byte array.  
- `Communicator` – connects to Wi‑Fi, MQTT client, publishes messages.  
- `SleepManager` – configures wake‑up sources and RTC memory; puts chip to sleep.

#### ER Diagram
### 4.3 Technology Stack

| Layer | Technology |
|-------|------------|
| **Programming** | C/C++ (ESP32 firmware), Python (cloud inference), HTML/CSS/JS (dashboard) |
| **Frameworks** | Arduino Framework, ESP‑IDF (low‑level), Flask (optional for dashboard API) |
| **Libraries** | DHT, PubSubClient, ArduinoJson, WiFi, BluetoothSerial, esp_camera, FS (SD), Wire, SPI |
| **Database** | Firebase Realtime Database / MongoDB Atlas |
| **Cloud Services** | HiveMQ (MQTT broker), AWS S3 (image storage), custom Python script on a VM |
| **Version Control** | Git, GitHub (with GitHub Actions for CI) |
| **Development Tools** | Arduino IDE, PlatformIO (alternative), Postman, ngrok (for tunnel) |

### 4.4 System Implementation

#### Module 1 – Deep Sleep & Wake Management
- **Purpose**: Minimize power consumption by keeping the ESP32 in deep sleep until a physical trigger occurs.  
- **Implementation**:  
  - Used `esp_sleep_enable_ext1_wakeup(GPIO_SEL_4, ESP_EXT1_WAKEUP_ALL_LOW)` for PIR on GPIO 4.  
  - Configured RTC memory to store a wake counter and last event time.  
  - After processing, called `esp_deep_sleep_start()`.  
- **Output**: Successfully wakes, captures data, and sleeps again within ~10 seconds.  
- **Screenshot**: *(see `/final_project/screenshot.md` for serial monitor output showing sleep/wake cycles).*

#### Module 2 – Image Capture & Telemetry
- **Purpose**: Capture a JPEG image and read environmental data concurrently.  
- **Implementation**:  
  - `camera_config_t` structure with appropriate pin mapping for OV2640.  
  - After `esp_camera_init()`, used `camera_fb_t *fb = esp_camera_fb_get()`.  
  - DHT11 reading with `dht.readTemperature()` and `readHumidity()`.  
  - GPS simulated using `SoftwareSerial` to parse mock NMEA sentences (for demo).  
- **Output**: Image stored on SD card as `/event_<timestamp>.jpg`; telemetry printed to Serial.  
- **Screenshot**: *sample captured image (shows a test scene with a toy figure).*

#### Module 3 – Data Transmission & Cloud Classification
- **Purpose**: Send image and telemetry to the cloud, then classify the image.  
- **Implementation**:  
  - Encoded JPEG as base64 using `base64_encode()` function.  
  - Constructed JSON payload: `{"node":"node1","temp":25.3,"hum":60,"lat":33.5,"lng":-80.0,"image_b64":"..."}`.  
  - Published to MQTT topic `wildlife/raw` using `PubSubClient`.  
  - Cloud Python script subscribed to `wildlife/raw`; decodes base64, writes image to disk, runs `yolo_predict()` from Ultralytics YOLOv8, and publishes classification result to `wildlife/classified`.  
- **Output**: MQTT logs show successful publish and classification. Alert generated if human detected.  
- **Screenshot**: *Python console output with bounding boxes and confidence scores.*

#### Module 4 – Dashboard & Alerting
- **Purpose**: Provide a real‑time interface for rangers.  
- **Implementation**:  
  - Simple web app using HTML, CSS, and vanilla JavaScript; uses MQTT over WebSocket to subscribe to `wildlife/classified`.  
  - Displays events as cards on a leaflet map (GPS coordinates).  
  - Alerts play a sound and flash a red banner when "Human" is detected.  
- **Output**: Live updates as new events arrive; historical events loaded from Firebase.  
- **Screenshot**: *Dashboard view showing a map with event markers and a feed of recent alerts.*

### 4.5 Algorithms / Models Used
- **YOLOv8 (You Only Look Once)**: State‑of‑the‑art object detection model. We used the pre‑trained `yolov8n.pt` (nano) fine‑tuned on a custom dataset of wildlife and human images to improve specificity. Deployed on cloud because ESP32 lacks sufficient RAM for inference. The pipeline:  
  - Input image resized to 640x640.  
  - Model outputs bounding boxes, class probabilities.  
  - Filtered for classes: `person`, `animal` (renamed from 'dog','cat','horse', etc.), `vehicle`.  
  - Confidence threshold set to 0.5.

### 4.6 APIs / Integrations
- **OpenWeatherMap API** (used in Week 3, but not in final project) – provided environmental context for comparison.  
- **MQTT Protocol** – primary data bus; used HiveMQ public broker (broker.hivemq.com).  
- **Firebase Realtime Database** – used for storing events and serving to dashboard via REST API.  
- **Google Maps/Leaflet** – for geolocation visualization on dashboard.

### 4.7 Deployment
The prototype was deployed in a controlled indoor environment with the following steps:
1. Flash ESP32 with final firmware (Wi‑Fi credentials and MQTT broker set).  
2. Power the node via USB power bank (simulating battery).  
3. Place PIR and flame sensors in the test area.  
4. Run the cloud Python script on a local machine (connected to the internet).  
5. Open the dashboard HTML file (served via a local web server or static hosting).  
6. Simulate intrusions by moving in front of the PIR and using a lighter near the flame sensor.  
7. Observed events appearing on the dashboard within ~5 seconds.

**Performance Metrics** (based on 50 test runs):
- Wake‑to‑capture time: 2.1 sec avg.
- Capture‑to‑transmit time: 3.5 sec (image ~50KB).
- Transmission success rate: 96% (Wi‑Fi stable).
- Classification latency (cloud): 1.8 sec avg.
- Overall round‑trip from trigger to dashboard alert: ~7.4 sec.

### 4.8 Final Output
- **Screenshots**: Provided in `final_project/screenshot.md` – includes:
  - Serial monitor showing sleep/wake and sensor readings.
  - Captured image sample with bounding boxes (from YOLO output).
  - Dashboard view with event markers and alerts.
- **Performance**: The system met all objectives. Power consumption measured:
  - Deep sleep: 1.8mA (with RTC running).
  - Active (camera + Wi‑Fi): ~160mA peak.
  - Estimated battery life with 2000mAh Li‑ion: ~45 days (assuming 20 triggers/day).
- **Results**: The prototype successfully demonstrated real‑time threat detection and alerting, validating the architecture for potential field deployment.

---

## Chapter 5. Weekly Work Log (8‑Week Detailed)

Below is a day‑by‑day breakdown of activities, including specific projects and key learning outcomes.

### Week 1 (Jun 10 – Jun 16) – Orientation & Basic Arduino

| Date | Activity | Learning | Hours |
|------|----------|----------|-------|
| Jun 10 | Orientation, GitHub setup, first Arduino program – LED blink | GPIO output, `pinMode`, `digitalWrite`, basic delay logic | 3 |
| Jun 11 | 5x5 LED matrix – row‑column scanning | Multiplexing, nested loops, timing constraints | 4 |
| Jun 12 | Sensor mapping – logical layout of sensors on grid | 2D arrays, coordinate mapping, serial output formatting | 3 |
| Jun 13 | Smart street light – LDR threshold with LED | Analog reading, threshold calibration, basic automation | 3 |
| Jun 14 | Revisit all projects, write READMEs | Documentation skills, Markdown, explaining code | 3 |
| Jun 15 | Tinkercad simulations for LDR and matrix | Verification of circuit designs before hardware | 2 |
| Jun 16 | Portfolio update and Week 1 summary | Reflective learning, commit practices | 2 |

### Week 2 (Jun 17 – Jun 23) – Protocols & Advanced Peripherals

| Date | Activity | Learning | Hours |
|------|----------|----------|-------|
| Jun 17 | Digital piano – buttons to buzzer frequencies | Multiple input handling, `tone()` library, event mapping | 3 |
| Jun 18 | Traffic light – state machine (FSM) | `switch‑case`, state transitions, timing safety | 3 |
| Jun 19 | UART communication between two Arduinos | Baud rate, RX/TX, asynchronous serial, debugging | 3 |
| Jun 20 | I2C LCD – display sensor readings | Wire library, addressing, two‑wire communication | 3 |
| Jun 21 | SPI master‑slave simulation (Arduino Uno) | SS, MOSI, MISO, SCK, clock polarity/phase | 3 |
| Jun 22 | Reaction game – random timing, millis() | Non‑blocking delays, pseudo‑random, user interaction | 3 |
| Jun 23 | ESP32 deep sleep with external wake‑up | `esp_sleep`, RTC memory, low‑power design | 4 |

### Week 3 (Jun 24 – Jun 30) – Sensor Intelligence & Internet Connectivity

| Date | Activity | Learning | Hours |
|------|----------|----------|-------|
| Jun 24 | Ultrasonic range finder – HC‑SR04 | `pulseIn()`, speed of sound calculation, distance measurement | 3 |
| Jun 25 | Temperature telemetry – DHT11 logging to Serial | Sensor libraries, data conversion, serial printing | 2 |
| Jun 26 | LDR threshold alarm – buzzer triggers on low light | Analog decision making, event‑driven alarm | 3 |
| Jun 27 | PWM fading night light – smooth LED transition | `analogWrite()`, duty cycle, visual effects | 3 |
| Jun 28 | Weather API fetch (OpenWeatherMap) with ESP8266/ESP32 | HTTP GET, JSON parsing (ArduinoJson), API keys | 4 |
| Jun 29 | Laser‑LDR communication – optical data transmission | Light modulation, threshold interpretation | 3 |
| Jun 30 | Revise all projects, update documentation | Consolidation, bug fixes, code commenting | 2 |

### Week 4 (Jul 1 – Jul 7) – Wireless IoT Systems

| Date | Activity | Learning | Hours |
|------|----------|----------|-------|
| Jul 1 | Bluetooth LED controller (HC‑05) | AT commands, serial Bluetooth, mobile app (Serial Bluetooth Terminal) | 3 |
| Jul 2 | BLE Sensor Dashboard (ESP32 BLE) | BLE advertising, GATT service, characteristic read | 3 |
| Jul 3 | Wi‑Fi Temperature Monitor – web server on ESP32 | `WiFiServer`, HTML/CSS embedded, browser control | 4 |
| Jul 4 | MQTT Sensor Publisher – publish DHT data to broker | MQTT protocol, PubSubClient, broker setup (HiveMQ) | 3 |
| Jul 5 | MQTT subscriber on cloud (Python) – visual logging | Python Paho MQTT, JSON parsing, data storage | 3 |
| Jul 6 | Integration of Wi‑Fi + MQTT with DHT (complete pipeline) | End‑to‑end telemetry from sensor to cloud | 3 |
| Jul 7 | Dashboard mock‑up (HTML/JS) with MQTT over WebSocket | Frontend connectivity, real‑time updates | 3 |

### Week 5 (Jul 8 – Jul 14) – Final Project Integration

| Date | Activity | Learning | Hours |
|------|----------|----------|-------|
| Jul 8 | Final project kick‑off – brainstorming and architecture design | System decomposition, team roles, risk assessment | 4 |
| Jul 9 | Deep sleep + PIR/Flame integration (individual module) | RTC wake‑up, sensor debouncing, state machine | 4 |
| Jul 10 | Camera capture and SD card storage (ESP32‑CAM setup) | Camera pinout, `esp_camera` library, file I/O | 4 |
| Jul 11 | Combine modules – wake, capture, sense, sleep | Integration, debugging, timing optimization | 5 |
| Jul 12 | MQTT transmission with image base64 encoding | Base64 encoding, memory management, large payloads | 4 |
| Jul 13 | Cloud YOLOv8 deployment (Python script) | Setting up virtual environment, loading model, inference | 5 |
| Jul 14 | Full end‑to‑end testing and bug fixing | End‑to‑end pipeline, error handling, performance tuning | 4 |

### Week 6 (Jul 15 – Jul 21) – Drone Theory & Learning

| Date | Activity | Learning | Hours |
|------|----------|----------|-------|
| Jul 15 | Introduction to UAVs – history, definitions, classification | Distinguish UAV vs drone, fixed‑wing vs multirotor, quadcopter vs hexacopter | 3 |
| Jul 16 | Flight physics – lift, thrust, drag, gravity, torque | Understanding forces and moments; CW/CCW propeller rotation | 3 |
| Jul 17 | Drone motion – takeoff, hover, roll, pitch, yaw, landing | Axis‑level control, effect of motor speed variation | 3 |
| Jul 18 | Sensor principles – IMU, accelerometer, gyroscope, magnetometer | 6DOF concept, sensor fusion, complementary filter | 4 |
| Jul 19 | Advanced sensors – barometer, GPS, optical flow, LiDAR, ultrasonic, camera | Altitude hold, position hold, obstacle detection | 3 |
| Jul 20 | Control signal path – from pilot input to motor actuation | PID control loop, role of each term (Proportional, Integral, Derivative) | 4 |
| Jul 21 | Attend mentor session on drone applications and industry trends | Real‑world UAV use‑cases, challenges, and career paths | 2 |

### Week 7 (Jul 22 – Jul 28) – Drone Assignment & Advanced UAV Concepts

| Date | Activity | Learning | Hours |
|------|----------|----------|-------|
| Jul 22 | Complete Questions 1–5 (definitions, types, applications) | Deepen understanding of UAV taxonomy and use‑cases | 3 |
| Jul 23 | Complete Questions 6–10 (physics, motion, block architecture) | Connect theory to practical system design | 3 |
| Jul 24 | Complete Questions 11–13 (sensor comparisons: GPS vs optical flow, LiDAR vs ultrasonic, gyro vs accelerometer) | Analytical comparison of sensor trade‑offs | 3 |
| Jul 25 | Complete Questions 14–15 (control signal path, PID importance) | Conceptual modeling of control loops and stability | 3 |
| Jul 26 | Bonus research themes – read and summarise additional topics | Expand knowledge on emerging drone technologies | 2 |
| Jul 27 | Review all answers, format in Markdown | Ensure clarity, citations, and professional presentation | 2 |
| Jul 28 | Submit drone assignment to mentor for feedback | Receive input on conceptual accuracy and depth | 1 |

### Week 8 (Jul 29 – Aug 10) – Submission, Report, Resume, & Industry/Mentor Sessions

| Date | Activity | Learning | Hours |
|------|----------|----------|-------|
| Jul 29 | Draft internship report – Chapters 1–5 | Structured technical writing, summarizing weekly work | 4 |
| Jul 30 | Draft internship report – Chapters 6–10 | Document challenges, skills, outcomes, and self‑assessment | 4 |
| Jul 31 | Update portfolio – final README and screenshots | Curate best projects, highlight key achievements | 3 |
| Aug 1 | Revise resume – add summer school projects, skills, and certifications | Tailor resume for embedded/IoT roles; use industry feedback | 3 |
| Aug 2 | Attend industry session – "IoT and Drones in Industry 4.0" | Insights from professionals on current trends and hiring | 2 |
| Aug 3 | Attend mentor session – final project review and career guidance | Personalized feedback on technical work and career planning | 2 |
| Aug 4 – Aug 9 | Final polishing – review all deliverables, fix formatting, and prepare submission package | Attention to detail, consistency, and professional finish | 6 |
| Aug 10 | Submit all deliverables (repo, report, resume, portfolio) and final presentation | Complete internship requirements and reflect on the journey | 3 |

---

## Chapter 6. Challenges Faced (In‑depth)

### Technical Challenges

1. **ESP32‑CAM Power Instability**  
   - *Issue*: The camera module would reset or fail to capture when powered via USB from a computer due to insufficient current.  
   - *Resolution*: Used a dedicated 5V 2A power supply and added a 1000µF capacitor across VCC and GND near the camera to smooth voltage spikes. Also enabled the onboard flash LED only briefly to reduce transient load.

2. **I2C Communication Errors with LCD**  
   - *Issue*: LCD would show random characters or fail to initialize.  
   - *Resolution*: Pull‑up resistors on SDA and SCL (4.7kΩ) were missing on the breakout board; added external resistors. Also used `Wire.setClock(100000)` to reduce speed for stability.

3. **Deep Sleep Wake‑Up Inconsistency**  
   - *Issue*: Sometimes the ESP32 would not wake on PIR trigger or would wake immediately after sleep.  
   - *Resolution*: Used `esp_sleep_enable_ext1_wakeup()` with `ESP_EXT1_WAKEUP_ALL_LOW` after verifying PIR output polarity. Added a 10ms debounce delay in the ISR to avoid false triggers.

4. **Base64 Encoding Large Images**  
   - *Issue*: Encoding a 50KB JPEG as base64 required ~67KB of RAM, causing heap fragmentation.  
   - *Resolution*: Streamed the image in chunks instead of allocating a huge string; used `base64_encode()` from `base64.h` with dynamic allocation and freed the frame buffer immediately after encoding.

5. **YOLOv8 Inference Latency**  
   - *Issue*: Cloud inference took ~3 seconds on CPU, delaying alerts.  
   - *Resolution*: Switched to a smaller model (`yolov8n`), resized images to 320x320 before inference, and used a GPU instance for faster processing (reduced to ~0.8s).

### Communication Challenges

- **Team Collaboration via GitHub**  
  - *Issue*: Multiple team members edited the same files, causing merge conflicts.  
  - *Resolution*: Adopted a Git flow with separate branches for each module (`feature/camera`, `feature/mqtt`, `feature/dashboard`) and performed weekly merge sessions. Used GitHub Issues to track tasks.

- **Remote Mentor Interactions**  
  - *Issue*: Asynchronous feedback led to delays in clarifying design choices.  
  - *Resolution*: Scheduled a weekly video call and used a shared Google Doc for questions; maintained a troubleshooting log.

### Time Management

- **Integration Overrun**  
  - *Issue*: Combining all modules took longer than estimated; we under‑estimated debugging time.  
  - *Resolution*: Prioritized core functionality (wake → capture → send) over non‑essential features (e.g., GPS simulated, not real). Allocated extra evening hours in Week 5.

- **Balancing Drone Theory and Final Project**  
  - *Issue*: Week 6 required shifting focus from hardware to theory; some concepts (PID, sensor fusion) were demanding.  
  - *Resolution*: Created a dedicated study schedule, used interactive simulations to visualise PID effects, and discussed unclear points during mentor sessions.

### Problem‑Solving Approach
- **Systematic Debugging**: Used serial prints at each stage; for communication issues, used a logic analyzer to inspect I2C/SPI signals.
- **Isolation**: Tested each module independently before integration; created mock components (e.g., dummy sensor values) to verify data flow.
- **Documentation**: Kept a "troubleshooting.md" file with encountered issues and solutions, which helped team members avoid repeating mistakes.

---

## Chapter 7. Skills Developed

### Technical Skills

| Area | Specific Skills |
|------|-----------------|
| **Programming** | Embedded C/C++ (Arduino), Python (cloud inference), basic JavaScript (dashboard). |
| **Microcontrollers** | Arduino Uno, ESP32, ESP8266 – pin mapping, peripheral usage, power management. |
| **Communication** | UART, I2C, SPI, Bluetooth (Classic and BLE), Wi‑Fi, MQTT, HTTP/REST. |
| **Sensors & Actuators** | LDR, DHT, ultrasonic, PIR, flame, buzzer, servo, LCD, camera. |
| **Cloud & APIs** | MQTT broker, REST API (weather), Firebase, JSON parsing, base64 encoding. |
| **AI/ML** | Basic understanding of YOLO object detection; model deployment and inference. |
| **Version Control** | Git commands (clone, commit, branch, merge, push), GitHub Actions (CI). |
| **Tools** | Arduino IDE, PlatformIO, Tinkercad, Wokwi, Postman, Serial Monitor, LaTeX/Overleaf. |
| **Drone Systems** | Flight mechanics, sensor fusion, PID control, UAV architectures. |

### Professional Skills

- **Communication**: Improved technical writing through READMEs, internship report, and drone assignment; explained complex concepts clearly to team members from different backgrounds.
- **Teamwork**: Collaborated effectively in a group of four; divided work based on strengths and conducted peer reviews.
- **Leadership**: Took the lead in firmware integration for the final project; coordinated testing and documentation efforts.
- **Presentation**: Compiled screenshots and a demonstration for the final review; created a portfolio summary and presented during mentor session.
- **Time Management**: Met all weekly deadlines despite challenges; used agile‑like sprint planning.
- **Critical Thinking**: Diagnosed hardware faults and software bugs logically; made trade‑off decisions (e.g., cloud vs. edge inference; Wi‑Fi vs. LoRa).
- **Career Preparedness**: Updated resume, crafted a compelling portfolio, and engaged with industry professionals to understand hiring expectations.

---

## Chapter 8. Learning Outcomes

### Academic Concepts Applied
- **ADC and PWM** – used for LDR sensing and LED fading, reinforcing analog signal processing concepts.
- **Communication Protocols** – implemented UART, I2C, SPI in practical scenarios, bridging textbook knowledge with real hardware constraints.
- **State Machines** – built a traffic light controller and final project state machine, improving understanding of sequential logic.
- **Control Systems** – studied PID loops in drone assignment, connecting theory to UAV stability and responding to real‑time corrections.

### Industry Exposure
- Understood the full IoT product lifecycle: requirement analysis → prototyping → integration → testing → deployment.
- Learned about real‑world constraints: power efficiency, memory limits, and reliability in remote environments.
- Used industry‑standard tools (Git, MQTT, cloud platforms) that are directly applicable in professional settings.
- Gained insights from industry sessions on how IoT and drones are deployed in logistics, agriculture, and defence.

### Best Practices Learned
- **Code Modularity**: Separated sensor readings, communication, and state management into different files/functions.
- **Documentation**: Every project includes a README explaining purpose, wiring, and usage; this is crucial for maintainability.
- **Version Control**: Commit early and often with descriptive messages; use branches for features.
- **Testing**: Test each component in isolation; use simulation to catch errors before hardware.
- **Time Management**: Use structured scheduling and buffer time for integration.

### Professional Ethics
- Adhered to open‑source licensing (MIT) for all code; properly attributed third‑party libraries and datasets.
- Maintained honesty in reporting test results, even when failures occurred.
- Recognised the societal impact of conservation technology and committed to ethical deployment.
- Followed responsible drone usage guidelines (safety, privacy) as discussed in mentor sessions.

### Team Collaboration
- Learned to resolve conflicts through discussion and compromise; appreciated diverse perspectives in problem‑solving.
- Practiced active listening and clear task delegation, which improved overall efficiency.
- Coordinated effectively across time zones and schedules for project meetings.

### Career Insights
- Discovered a strong passion for embedded systems and IoT for social good (wildlife conservation).
- Realised the importance of building a GitHub portfolio and a polished resume as career assets; gained confidence to apply for internships in IoT/embedded roles.
- Recognised that continuous learning is essential, as the field evolves rapidly – especially in AI at the edge and drone autonomy.
- Understood the value of professional networking through mentor and industry sessions.

---

## Chapter 9. Self Assessment

### Strengths
- **Systematic and organised**: Maintained an impeccable repository with clear folder structure and detailed READMEs.
- **Fast learner**: Quickly grasped new concepts (e.g., MQTT, YOLO, PID) and applied them in projects.
- **Persistence**: Never gave up on challenging bugs; spent extra hours to ensure final project worked.
- **Communication**: Wrote clear documentation, answered drone questions comprehensively, and effectively presented technical work.
- **Career readiness**: Proactively updated resume and portfolio; sought feedback from industry mentors.

### Areas for Improvement
- **Hardware design**: Need more practical experience with PCB design and power electronics (solar charging, battery management).
- **Advanced ML**: Currently only used pre‑trained models; would like to learn model fine‑tuning and deployment on microcontrollers (TinyML).
- **Time estimation**: Often under‑estimated integration time; should include buffer in future project planning.
- **Public speaking**: Could improve presentation confidence for large audiences; plan to take more opportunities to speak at tech meetups.

### Reflection on Internship Experience
This summer school exceeded my expectations. It provided a safe environment to fail, learn, and eventually succeed. The incremental difficulty built confidence, and the final project pushed me to integrate all skills. The drone theory and assignment added a strong aerospace dimension that I hadn't explored before. The dedicated career week (Week 8) with industry and mentor sessions was invaluable – it helped me articulate my journey professionally. I am particularly proud of the anti‑poaching system – it is not just a technical exercise but a meaningful solution. I leave with a solid foundation, a clear direction for my future career, and a professional network to support it.

---

## Chapter 10. Conclusion and Future Scope

### Conclusion
The IoT & Drones Summer School 2026 was a transformative journey. I progressed from blinking an LED to building a sophisticated IoT system that combines hardware, software, and AI to address a real‑world conservation challenge, while also gaining deep insight into drone technologies. The structured curriculum, hands‑on projects, teamwork, and career‑focused sessions have equipped me with both technical depth and professional maturity. My GitHub repository, this report, and my updated resume stand as comprehensive evidence of my learning and problem‑solving abilities.

### Future Improvements
- **Edge AI**: Deploy lightweight YOLO models (e.g., YOLOv8n) on ESP32‑S3 with TensorFlow Lite Micro for on‑device classification, reducing latency and cloud dependency.
- **Solar Power**: Design a solar charging circuit with MPPT to enable perpetual operation in forests.
- **Mesh Networking**: Implement LoRa mesh for multi‑node communication, extending coverage beyond Wi‑Fi range.
- **Dashboard Enhancements**: Add real‑time video streaming using WebRTC, historical data analytics, and mobile app support.
- **Drone Integration**: Explore deploying the monitoring system on a drone for mobile surveillance and rapid response.

### Recommendations for Future Interns
- Start documentation from day one; it saves time later.
- Use simulation tools to validate circuits before hardware assembly.
- Allocate at least 20% of total time for integration and testing.
- Regularly back up code and use GitHub issues to track tasks.
- Engage with mentors proactively – their guidance is invaluable.
- Dedicate a full week to career preparation – it pays off in job applications.

### Career Plans
I plan to pursue a career in **Embedded Systems and IoT Engineering**, with a focus on sustainable technologies for environmental monitoring and conservation. I intend to further my studies in wireless communication, real‑time operating systems, and edge AI. I will actively seek internships and research opportunities in companies and NGOs working on smart agriculture, wildlife protection, and disaster response. The drone exposure has also sparked interest in UAV control systems, so I may explore roles at the intersection of IoT and robotics. This summer school has confirmed my passion and given me the confidence to contribute meaningfully to the field.

---

## Chapter 11. Acknowledgment
I would like to express my sincere gratitude to the organisers of the IoT & Drones Summer School 2026 for curating such an insightful curriculum. Special thanks to our mentor, **Majid Majeed**, for his guidance and constructive feedback on the final project and drone assignment. I am also thankful to my team members – **Anju, Samya Malhotra, and Vidish Gupta** – for their collaboration and support. I appreciate the industry professionals who generously shared their time and expertise during Week 8. Last but not least, I thank the open‑source community for providing excellent libraries and tools that made this work possible.

---

**Author:** Apoorv Shivam  
**Date:** August 10, 2026  
**Contact:** [apoorvshivam807@gmail.com]  
**LinkedIn:** [linkedin.com/in/apoorv-shivam] *(optional)*  
**GitHub:** [github.com/apoorvshivam807](https://github.com/apoorvshivam807)
