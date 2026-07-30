# Week 3:
**Course:** IoT & Drones (IIT Jammu Summer School 2026)  
**Student Name:** Apoorv Shivam  

---

## 📅 Weekly Overview
Week 3 focused on sensor-driven automation, analog-to-digital measurement, PWM control, ESP32-based interaction, and internet-connected telemetry. The projects in this week cover local sensing, wireless communication, and practical embedded system control workflows.

---

## 📂 Projects

### 1. ☀️ LDR Threshold Alarm (`/ldr_threshold_alarm`)
* **Project Type:** Analog Sensing & Alert Automation
* **Core Concepts:** ADC input reading, threshold logic, buzzer signaling.
* **System Execution:** Monitors ambient light and triggers an alarm when brightness drops below a configured threshold.

### 2. 🌡️ Temperature Telemetry (`/temperature_telemetry`)
* **Project Type:** Sensor Calibration & Data Logging
* **Core Concepts:** TMP36 analog conversion, voltage-to-temperature mapping, serial telemetry.
* **System Execution:** Reads temperature sensor voltage, converts to Celsius, and continuously prints values to Serial Monitor.

### 3. 📏 Ultrasonic Range Finder (`/ultrasonic_range_finder`)
* **Project Type:** Distance Measurement
* **Core Concepts:** Trigger/echo pulse timing, `pulseIn()`, time-of-flight distance math.
* **System Execution:** Measures object distance in centimeters using an HC-SR04 ultrasonic sensor.

### 4. 🚧 Automated Vehicle Access (ESP32) (`/automated_vehicle_access_esp32`)
* **Project Type:** Smart Access Control
* **Core Concepts:** Ultrasonic detection, servo control, buzzer alerts, ESP32 GPIO.
* **System Execution:** Detects vehicles near a barrier, opens/closes a servo gate, and provides audio indication.

### 5. 🔘 ESP32 Push Button LED Blink (`/esp32_pushbt_led blink`)
* **Project Type:** GPIO Input/Output Control
* **Core Concepts:** `INPUT_PULLUP`, button state reading, timed LED blinking.
* **System Execution:** Blinks an LED while a push button is pressed.

### 6. ☁️ Weather API Data Fetch (ESP32) (`/fetch_data_from_weather_api`)
* **Project Type:** IoT Cloud Integration
* **Core Concepts:** Wi-Fi connectivity, REST API calls, JSON parsing, DHT11 integration.
* **System Execution:** Fetches remote weather/AQI data and combines it with local sensor readings.

### 7. 🌃 PWM Fading Night Light (`/pwm_fading_night_light`)
* **Project Type:** PWM Lighting Control
* **Core Concepts:** Pulse-width modulation, gradual brightness transitions.
* **System Execution:** Implements smooth LED intensity fading suitable for night-light behavior.

### 8. 🔦 Laser-LDR Communication (`/communication_using_help_of_laser_ldr`)
* **Project Type:** Optical Signal Communication
* **Core Concepts:** Light-based signaling, LDR input detection, digital decoding logic.
* **System Execution:** Demonstrates data transfer using a laser source and an LDR receiver path.

---

## 🚀 General Execution Framework

### Running Modules in Simulation/IDE
1. Open the target Week 3 project folder and copy the relevant `.ino` code file.
2. Use Tinkercad or your local Arduino IDE/ESP32 setup depending on project hardware.
3. Configure board and port settings, then compile and upload.
4. Open Serial Monitor at the project's required baud rate to view runtime output.

### Flashing to Physical Hardware
1. Connect the board (Arduino Uno or ESP32) using a USB data cable.
2. In Arduino IDE, select the correct board under **Tools > Board**.
3. Select the active COM/USB port under **Tools > Port**.
4. Upload the sketch and validate behavior with connected sensors/actuators.
