# Apoorv Shivam — IoT & Drones Summer School 2026 Repository

This repository documents my complete technical journey from embedded system basics to advanced IoT and drone-domain understanding during the IoT & Drones Summer School 2026.  
It combines weekly practical implementations, assignment analysis, theory preparation, and final project development in a structured and portfolio-friendly format.

---

## About Me

- **Name:** Apoorv Shivam  
- **Program:** B.Tech, Electronics and Communication Engineering (ECE)  
- **Institution:** Shri Mata Vaishno Devi University (SMVDU), Katra, Jammu & Kashmir  

I use this repository as both an academic record and a professional portfolio to showcase practical engineering growth.  
The focus areas include microcontrollers, IoT communication protocols, wireless integration, automation logic, and system-level design thinking.

---

## Repository Purpose

This repository is designed to help students, mentors, and recruiters quickly understand what I built, how I built it, and why each project matters.  
It is organized to provide clear navigation from beginner-level experiments to integrated real-world IoT and conservation-oriented final solutions.

---

## Complete Repository Structure (All Root Folders/Files)

### Root Files
- `.gitignore`
- `LICENSE.md`
- `README.md`
- `count_sketches.py`

### Root Folders
- `.github`
- `Assignment 3`
- `Drone Assignment`
- `assignment`
- `final_project`
- `portfolio`
- `theory`
- `week1`
- `week2`
- `week3`
- `week4`

This structure separates practical code, theoretical learning, assignment submissions, and final integrated project content.  
It allows anyone reviewing the repository to move from weekly labs to deeper design and analysis work without confusion.

---

## Weekly Journey and Project Analysis

## Week 1 (`/week1`)

### Files/Folders
- `README.md`
- `led_blink`
- `led_matrix_5x5`
- `sensor_matrix_logic`
- `smart_street_light`

Week 1 built my core hardware-software foundation in Arduino by focusing on digital output, matrix control, and analog sensing logic.  
The projects in this week helped me establish reliable coding discipline, circuit setup confidence, and first-level automation understanding.

### Project Analysis

#### 1) `led_blink`
I implemented basic GPIO output control by toggling an LED with timed delays to validate board configuration and upload flow.  
This project established confidence in pin configuration, debugging, and the minimum reliable structure of embedded sketches.

#### 2) `led_matrix_5x5`
I applied multiplexing concepts to control a matrix display and generate structured visual patterns.  
This improved my understanding of coordinated row-column scanning and timing-sensitive multi-pin control.

#### 3) `sensor_matrix_logic`
I created matrix-based logical representation of sensor positions and printed organized coordinate data over serial output.  
This strengthened my loop structuring and mapping ability between physical layouts and code-driven data models.

#### 4) `smart_street_light`
I built an LDR-based threshold system that automatically controls lighting based on ambient brightness.  
This gave me practical experience with analogRead workflows, threshold calibration, and basic smart-environment automation.

---

## Week 2 (`/week2`)

### Files/Folders
- `README.md`
- `Assignment`
- `digital_piano`
- `esp32_deep_sleep`
- `i2c_lcd_display`
- `reaction_game`
- `serial_interface`
- `spi_master_slave`
- `traffic_light`
- `uart`
- `utilize_all_the_pins_of_arduino_uno`

Week 2 expanded from beginner tasks to protocol-heavy and architecture-driven implementations using Arduino and ESP32.  
It combined interaction systems, communication buses, state-based control, and power-aware embedded design.

### Project Analysis

#### 1) `digital_piano`
I mapped button inputs to buzzer frequencies to create an interactive mini musical interface.  
This improved my event-to-output mapping skills and confidence in handling multiple digital inputs cleanly.

#### 2) `esp32_deep_sleep`
I implemented deep sleep mode and state persistence using RTC-backed memory across wake cycles.  
This strengthened my understanding of low-power operation, which is critical for long-duration battery-powered IoT nodes.

#### 3) `i2c_lcd_display`
I integrated a 16x2 LCD via I2C to display data using fewer wires and shared serial communication lines.  
This project helped me understand address-based bus communication and efficient pin usage in embedded designs.

#### 4) `reaction_game`
I created randomized signal timing and measured user response speed using millisecond-based logic.  
This improved my control over event timing, pseudo-random behavior, and user-interactive embedded workflows.

#### 5) `serial_interface`
I implemented command-based control from Serial Monitor, parsing text inputs like ON/OFF to switch outputs.  
This project developed my parsing logic and practical command-driven control loop design.

#### 6) `spi_master_slave`
I worked on synchronized SPI-style transfer between master and slave logic to trigger remote output behavior.  
This improved my protocol-level understanding of clocked communication and deterministic data exchange.

#### 7) `traffic_light`
I designed a finite-state-machine traffic sequence with structured transitions and safe timing order.  
This strengthened my state modeling skills for deterministic real-world automation systems.

#### 8) `uart`
I built direct point-to-point serial signaling between two boards with shared reference ground.  
This clarified asynchronous communication behavior and practical serial link setup fundamentals.

#### 9) `utilize_all_the_pins_of_arduino_uno`
I developed a high-resource integrated project that used nearly all available Uno pins for sensing and actuation.  
This improved system planning under hardware constraints and taught scalable pin-allocation strategy.

---

## Week 3 (`/week3`)

### Files/Folders
- `README.md`
- `automated_vehicle_access_esp32`
- `communication_using_help_of_laser_ldr`
- `esp32_pushbt_led blink`
- `fetch_data_from_weather_api`
- `ldr_threshold_alarm`
- `pwm_fading_night_light`
- `temperature_telemetry`
- `ultrasonic_range_finder`

Week 3 focused on sensor-centered intelligence and internet-connected behavior using ESP32 and mixed local/cloud data flows.  
This week bridged core embedded control with practical IoT telemetry and automation pipelines.

### Project Analysis

#### 1) `ldr_threshold_alarm`
I implemented light-intensity monitoring with threshold-triggered alert output behavior.  
This sharpened my analog decision-making logic and event-triggered alarm design skills.

#### 2) `temperature_telemetry`
I captured analog temperature readings, converted values, and streamed telemetry output continuously.  
This improved my sensor conversion confidence and consistency in serial data reporting.

#### 3) `ultrasonic_range_finder`
I measured distance using trigger/echo pulse timing and time-of-flight calculations.  
This taught me practical precision handling in real-time sensing loops.

#### 4) `automated_vehicle_access_esp32`
I integrated detection logic with actuator response to simulate automated access barrier behavior.  
This project strengthened my ability to connect sensing, decision logic, and controlled mechanical output.

#### 5) `esp32_pushbt_led blink`
I created button-controlled LED behavior with input pull-up based logic handling.  
This reinforced robust input processing and stable conditional execution flow.

#### 6) `fetch_data_from_weather_api`
I combined remote weather/AQI API data with local sensor readings in one IoT workflow.  
This improved my integration skills across networking, data parsing, and edge-cloud correlation.

#### 7) `pwm_fading_night_light`
I implemented smooth LED fade transitions using PWM duty-cycle control.  
This deepened my understanding of analog-style output modulation and user-friendly lighting behavior.

#### 8) `communication_using_help_of_laser_ldr`
I demonstrated optical signaling by transmitting light pulses and reading them through LDR response changes.  
This expanded my exposure to non-traditional communication methods and signal interpretation logic.

---

## Week 4 (`/week4`)

### Files/Folders
- `README.md`
- ` Bluetooth LED Controller`
- `Bluetooth Sensor Dashboard`
- `MQTT Sensor Publisher`
- `Wi-Fi Temperature Monitor `

Week 4 advanced into wireless IoT systems with remote control, telemetry dashboards, and broker-based messaging architecture.  
The projects here represent practical transition from local embedded prototypes to connected smart-system deployments.

### Project Analysis

#### 1) ` Bluetooth LED Controller`
I implemented phone-to-controller Bluetooth command handling to manage LED behavior wirelessly.  
This project improved my understanding of serial-over-Bluetooth control and remote actuation reliability.

#### 2) `Bluetooth Sensor Dashboard`
I built BLE-based telemetry broadcasting for periodic sensor and uptime data sharing.  
This strengthened my grasp of BLE communication flow and lightweight low-energy monitoring.

#### 3) `Wi-Fi Temperature Monitor `
I created a Wi-Fi web interface for live environmental viewing and remote control actions.  
This project connected embedded sensing with browser-based UI and practical network interaction logic.

#### 4) `MQTT Sensor Publisher`
I implemented MQTT publish/subscribe topics for scalable telemetry transfer and remote command control.  
This advanced my knowledge of broker-based architecture and IoT-ready messaging design patterns.

---

## Final Project (`/final_project`)

### Files
- `README.md`
- `screenshot.md`

### Project Title
**IoT-Based Advanced Wildlife Monitoring and Anti-Poaching System**  
*(Non-Intrusive Remote Tracking & Microclimate Sensing for Conservation)*

### Team
Group 11 — Anju, Samya Malhotra, Apoorv Shivam, Vidish Gupta  
Under guidance of Majid Majeed Sir

This project integrates edge sensing, image capture, environmental telemetry, and remote monitoring for conservation use cases.  
It is designed for deep-forest conditions where power and connectivity are constrained, using event-triggered activation and efficient communication.

### Core Execution Pipeline
1. Node remains in deep sleep to save power  
2. PIR/Flame trigger wakes the system  
3. ESP32-CAM captures image evidence  
4. DHT + GPS telemetry is recorded  
5. Data is transmitted via Wi-Fi/LoRa/GSM  
6. YOLOv8-assisted classification evaluates threat context  
7. Dashboard logs, monitoring, and alert visibility are updated

### Hardware
- ESP32-CAM
- PIR Sensor (HC-SR501)
- Flame Sensor
- DHT11/DHT22
- GSM/LoRa module
- Li-ion battery pack
- SG90 servo

---

## Drone Assignment (`/Drone Assignment/questions`)

### Files
- `README.md`

This module extends my learning into UAV fundamentals, flight mechanics, sensor fusion, and control-system reasoning.  
It adds strong aerospace-oriented analytical depth that complements my IoT and embedded implementation track.

### Coverage (Q1–Q15)
- Drone/UAV definition, history, evolution  
- Real-world drone applications  
- UAV vs Drone, Fixed-wing vs Multirotor, Quadcopter vs Hexacopter  
- Quadcopter physics: lift/thrust/drag/gravity/CW-CCW rotation  
- Drone motion: takeoff, hover, roll, pitch, yaw, landing  
- Block architecture and component functions  
- Sensor principles: IMU, accelerometer, gyroscope, magnetometer, barometer, GPS, optical flow, ultrasonic, LiDAR, camera  
- Comparisons: GPS vs Optical Flow, LiDAR vs Ultrasonic, Gyroscope vs Accelerometer  
- 6DOF concept and axis-level motion  
- Full control signal path (pilot input to movement)  
- PID control importance  
- Bonus research themes and one practical activity  
- Higher-order reasoning questions for conceptual depth

---

## Assignment Coverage

## `assignment/`
- `02-07-2026/Q1-Q17.md`

This assignment set captures IoT architecture analysis, communication trade-offs, security thinking, and practical deployment reasoning.  
It demonstrates problem-solving beyond coding by connecting technical choices to system outcomes.

## `Assignment 3/`
- `IoT_Assignment.pdf (or .docx).ino`
- `IoT_Assignment_Questions.pdf`

This section contains advanced prompt-driven IoT questions and applied design thinking exercises.  
It strengthens solution framing for realistic domains such as monitoring, control, and resilient smart-system planning.

---

## Theory Coverage (`/theory`)

### Files
- `README.md`
- `Q9.md`
- `Q10.md`
- `Q11.md`
- `Q12.md`
- `Q13.md`
- `Q19.md`
- `Q20.md`
- `Q29.md`
- `Q30.md`

The theory folder supports strong conceptual grounding across Git workflow, IoT architecture, controller behavior, and protocol fundamentals.  
These notes complement practical code by explaining the engineering principles behind each implementation.

---

## Portfolio (`/portfolio`)

### Files
- `README.md`

This section provides a compact, reviewer-friendly overview of the complete journey and key outcomes.  
It is useful for internship/project evaluation when a quick but structured summary is needed.

---

## Setup & Development Environment

### Hardware
- Arduino Uno
- ESP32 / ESP8266
- Breadboard + jumper wires
- LEDs, resistors, buzzer, servo
- LDR, DHT, ultrasonic, PIR, flame sensors

### Software / Platforms
- Arduino IDE
- Tinkercad
- Wokwi
- Velxio
- Serial Monitor
- MQTT client/broker tools

### Libraries / Protocols
- Libraries: `DHT`, `PubSubClient`, `ArduinoJson`, `LiquidCrystal_I2C`
- Protocols: UART, I2C, SPI, Bluetooth, BLE, Wi-Fi, MQTT, HTTP/REST

---

## Programming Languages & Formats

- **C/C++** for Arduino/ESP firmware
- **Markdown** for documentation and reports
- **Python** for utility scripting

This stack reflects practical embedded engineering workflow: control logic, communication integration, and structured documentation.  
It demonstrates both implementation ability and technical communication quality.

---

## License

This repository is licensed under the **MIT License**.  
See `LICENSE.md` for full terms.

---

## Fair Use Policy

- Shared for education, portfolio review, and technical reference
- Reuse allowed under MIT terms with attribution
- Academic plagiarism or false authorship is not allowed
- Credit original work when adapting any part

---

## Contact & Portfolio Identity

- **Author:** Apoorv Shivam  
- **Domain:** Embedded Systems, IoT, Wireless Communication, Drone Systems  
- **Purpose:** Learning record + internship/project showcase portfolio  

Thank you for reviewing my repository and technical journey.
