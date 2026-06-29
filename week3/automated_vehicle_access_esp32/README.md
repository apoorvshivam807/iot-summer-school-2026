# Automated Vehicle Access System

An automated, smart vehicle barrier gate system built using an ESP32 microcontroller. The system operates on proximity telemetry, utilizing ultrasonic wave time-of-flight monitoring to actuate a servo-driven security gate and sound real-time auditory warnings when a vehicle approaches.

---
## Student Details
**Student Name:** Apoorv Shivam  

## 📌 Project Overview & Goals

* **Detect:** Continuously scans for oncoming vehicles within a critical $15\text{ cm}$ threshold via an HC-SR04 ultrasonic sensor.
* **Actuate:** Automatically triggers an SG90 micro-servo motor to sweep from $0^\circ$ (Closed/Barrier Down) to $90^\circ$ (Open/Barrier Up) to allow seamless vehicle passage.
* **Alert:** Sounds an alternating continuous buzzer warning block while the vehicle sits in the transit zone, safely lowering the gate and silencing the audio once the vehicle clears the boundary.

---

## 🛠️ Hardware Components Required

* **Microcontroller:** 1x ESP32 Development Board
* **Range Finder:** 1x HC-SR04 Ultrasonic Distance Sensor
* **Actuator:** 1x SG90 Micro Servo Motor
* **Audio Indicator:** 1x 5V Active/Passive Buzzer
* **Prototyping Gear:** Breadboard, external power support (if required), and male-to-male/male-to-female jumper wires.

---

## 🎛️ Circuit Diagram Description

The system links all high-speed telemetry lines directly into the ESP32 GPIO matrix:
1. **HC-SR04 Sensor:** * `VCC` linked to ESP32 `VIN` ($5\text{V}$)
   * `GND` linked to common `GND`
   * `TRIG` linked to **GPIO 5** (Output pulse)
   * `ECHO` linked to **GPIO 18** (Input duration)
2. **SG90 Servo:** * Positive (Red/Orange) linked to $5\text{V}$ (`VIN`)
   * Ground (Brown/Black) linked to common `GND`
   * PWM Signal (Yellow/White) linked to **GPIO 13**
3. **Buzzer:** * Positive leg linked to **GPIO 12**
   * Negative leg linked to common `GND`

---

## 📸 Media & Demonstrations

<img width="1280" height="960" alt="WhatsApp Image 2026-06-29 at 10 48 10 PM" src="https://github.com/user-attachments/assets/7b6b6a8f-d6fd-43d7-aa55-63337ce20484" />
<img width="1280" height="960" alt="WhatsApp Image 2026-06-29 at 10 48 09 PM (1)" src="https://github.com/user-attachments/assets/ac6a22c2-bfab-4add-bc39-3de96bfa538b" />
<img width="1280" height="960" alt="WhatsApp Image 2026-06-29 at 10 48 09 PM" src="https://github.com/user-attachments/assets/a70d416b-f66f-4dc9-b070-1bfadc43c3e5" />


### Video Demonstration
https://youtu.be/mnnvwnEr7lM?si=6U4qN6GitFz4nZE9





---

## 📊 Expected Output & Logs

When operational, the ESP32 broadcasts configuration updates and telemetry changes down to the software host over a $115200\text{ bps}$ serial pipeline.



### Sample Output Log Stream:

System Ready. Gate Closed.\
Distance: 45.23 cm\
Distance: 43.11 cm\
Distance: 12.45 cm\
Vehicle Detected! Opening Gate...\
Distance: 11.02 cm\
Distance: 11.50 cm\
Distance: 52.64 cm\
Vehicle Cleared. Closing Gate.\
Distance: 55.10 cm







## 🛠️ Troubleshooting Tips (Minimum 3 Points)

1. **Servo Jitters or Causes ESP32 Reboots:** The SG90 servo draws structural current spikes when under mechanical loads. If the ESP32 brownouts or resets when the gate opens, decouple the servo power lines from the board's internal regulators and feed it using an external $5\text{V}$ breadboard power supply module, keeping all grounds tied together.
2. **Ultrasonic Distance Reads Constant 0 cm:** Ensure the `ECHO` and `TRIG` lines are not swapped on your board layout. Additionally, review your `pulseIn()` execution variables; if the sensor does not receive an echo reflection, it outputs `0`, which is handled safely by the `distanceCm > 0` code filter block.
3. **Buzzer Audio Sound Weak or Muted:** Ensure your pin mapping orientations match active logic constraints. Active buzzers require a constant logic high supply, whereas passive models require a pulse modulation layout (`tone()`). Ensure your hardware matching selection aligns perfectly with the `digitalWrite()` syntax.

---
