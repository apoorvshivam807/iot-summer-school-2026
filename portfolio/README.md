# Apoorv Shivam — IoT Portfolio (IIT Jammu Summer School 2026)

This repository is my end-to-end IoT engineering portfolio built during the **IoT & Drones Summer School 2026 (IIT Jammu, with Techible & I3C IIT Jammu)**. It captures my progression from embedded fundamentals to connected IoT systems, protocol design, and real-world problem-solving assignments.

## About Me
- **Name:** Apoorv Shivam  
- **Program:** B.Tech, Electronics and Communication Engineering (ECE)  
- **Institution:** Shri Mata Vaishno Devi University (SMVDU), Katra

## Portfolio Snapshot
- **4 structured learning weeks** across Arduino + ESP32 systems
- **25+ hands-on implementations** in sensing, control, communication, and IoT cloud flows
- **Theory + design assignments** covering reliability, security, architecture, and deployment trade-offs
- **Industry-relevant themes:** edge automation, low-power design, telemetry pipelines, and secure IoT thinking

## Weekly Work Summary

| Week | Focus Area | Key Outcomes | Directory |
|---|---|---|---|
| **Week 1** | Embedded foundations | GPIO control, matrix driving, analog thresholding, basic sensor logic | [`/week1`](./week1) |
| **Week 2** | Protocols + system design | I2C/SPI/UART workflows, FSM logic, interactive systems, low-power ESP32, resource-maximized robotics | [`/week2`](./week2) |
| **Week 3** | Sensor-driven IoT workflows | Telemetry, ultrasonic ranging, PWM control, optical signaling, weather API integration | [`/week3`](./week3) |
| **Week 4** | Wireless IoT systems | Bluetooth/BLE control, Wi-Fi dashboards, MQTT publish/subscribe architecture | [`/week4`](./week4) |

## Assignment & Evaluation Coverage

### Assignment Set 1 (Q1–Q17)
**Location:** [`/assignment/02-07-2026/Q1-Q17.md`](./assignment/02-07-2026/Q1-Q17.md)

Completed analytical and design responses across:
- Controller selection (Arduino vs ESP32)
- Protocol architecture (LoRa, MQTT, Wi-Fi, Bluetooth)
- Reliability engineering (offline buffering, OTA rollback, fault isolation)
- Embedded performance (interrupts vs polling, multi-peripheral conflict handling)
- Security hardening (attack surface reduction, auth, encryption, secure update strategy)
- System-level trade-off analysis for real deployments

### Assignment Set 3 (Q35–Q50)
**Location:** [`/Assignment 3/IoT_Assignment_Questions.pdf`](./Assignment%203/IoT_Assignment_Questions.pdf)

Covered advanced industry scenarios and design prompts including:
- REST API weather ingestion and local-vs-cloud data comparison
- MQTT theory and QoS-driven design decisions
- IoT Wi-Fi security and vulnerability analysis
- Smart home, agriculture, flood monitoring, access control, and healthcare prototypes
- Smart City proposal framing for Jammu deployment context
- Reflection on applied learning and next-project direction

## Representative Project Highlights

- **Smart Street Light (Week 1):** LDR-based autonomous lighting control using ADC threshold logic.  
  [`/week1/smart_street_light`](./week1/smart_street_light)

- **ESP32 Deep Sleep (Week 2):** Power-optimized sensing cycle with RTC-persistent boot tracking.  
  [`/week2/esp32_deep_sleep`](./week2/esp32_deep_sleep)

- **Pin-Maximized Autonomous Vehicle (Week 2):** Full I/O utilization, ultrasonic obstacle handling, and controller-to-controller signaling.  
  [`/week2/utilize_all_the_pins_of_arduino_uno`](./week2/utilize_all_the_pins_of_arduino_uno)

- **Weather API + DHT11 Integration (Week 3):** Blended external API telemetry with local sensor observations.  
  [`/week3/fetch_data_from_weather_api`](./week3/fetch_data_from_weather_api)

- **MQTT Sensor Publisher (Week 4):** Topic-based cloud telemetry and remote LED actuation workflow.  
  [`/week4/MQTT Sensor Publisher`](./week4/MQTT%20Sensor%20Publisher)

## Technical Skills Demonstrated
- **Microcontrollers:** Arduino Uno, ESP32, ESP8266
- **Embedded Programming:** C/C++ sketches, finite-state logic, non-blocking timing (`millis()`), interrupt-aware design
- **Communication Protocols:** UART, I2C, SPI, Bluetooth, BLE, Wi-Fi, MQTT, HTTP/REST
- **Sensors & Actuators:** DHT11, LDR, ultrasonic, PIR, MQ-series style logic, servo, relays, buzzers, LED systems
- **IoT System Thinking:** data flow design, edge/cloud split, reliability under network failure, secure deployment practices

## Repository Navigation
- Root README (this file): portfolio overview and index
- Weekly summaries: [`/week1`](./week1), [`/week2`](./week2), [`/week3`](./week3), [`/week4`](./week4)
- Detailed assignment submissions: [`/assignment`](./assignment), [`/Assignment 3`](./Assignment%203)
- Final project workspace: [`/final_project`](./final_project)

---

If you are reviewing this portfolio for internship, project, or collaboration opportunities, start with the **Weekly Work Summary** and then open the linked project folders for implementation-level details.
