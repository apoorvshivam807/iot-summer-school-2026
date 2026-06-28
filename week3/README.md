**Status:**   UPDATING ONGOING . Few more projects will be added to week 3 from 29 Jun to 4 July .
------


# ⏳ Week 3: 
**Course:** IoT & Drones (IIT Jammu Summer School 2026)  
**Student Name:** Apoorv Shivam  


---

## 📅 Weekly Overview
The third week of the curriculum focuses on interfacing the physical world with digital logic via specialized sensors. The completed labs explore reading continuously variable analog inputs, implementing mathematical calibration models to convert raw electrical potentials into human-readable metrics ($^\circ\text{C}$), and measuring high-speed time-of-flight acoustic waves to implement localized ultrasonic radar telemetry.

*This index directory page is currently being updated as additional advanced sensor integration projects are completed and finalized in the lab.*

---

## 📂 Completed Laboratory Subdirectories

### 1. ☀️ Analog Light Sensing Alarm (`/ldr_threshold_alarm`)
* **Project Type:** Continuous Analog Tracking & Automation
* **Core Concepts:** 10-bit Analog-to-Digital Conversion (ADC), voltage dividers, ambient lux thresholds, and dynamic audio wave generation via `tone()`.
* **System Execution:** Utilizes a photoresistor working in a 10kΩ voltage divider grid to sense room brightness. If light levels fall below a critical software safety boundary ($\le 400$), the Arduino automatically triggers a pulsing audio alert via a piezo buzzer.

### 2. 🌡️ Precision Temperature Monitoring (`/temperature_telemetry`)
* **Project Type:** Linear Calibration & Semiconductor Telemetry
* **Core Concepts:** Voltage scaling math, linear thermal offsets ($10\text{mV}/^\circ\text{C}$), and live floating-point formatting.
* **System Execution:** Captures raw millivolt variations directly from a TMP36 semiconductor IC, converts the digitized steps back into true operating voltage values, applies a $-500\text{mV}$ offset calibration, and streams precise Celsius ($^\circ\text{C}$) telemetry data strings every second.

### 🦇 3. Ultrasonic Sonar Range Finder (`/ultrasonic_range_finder`)
* **Project Type:** High-Speed Time-of-Flight Radar Mapping
* **Core Concepts:** Outbound microsecond trigger execution ($10\mu\text{s}$), inbound echo pulse duration measurements (`pulseIn`), acoustic flight constants ($0.0343\text{cm}/\mu\text{s}$), and boundary filtering.
* **System Execution:** Fires a high-frequency $40\text{kHz}$ ultrasonic sound wave, monitors its round-trip time-of-flight bounce duration, and processes the raw microseconds into real-time obstacle distance calculations tracked in centimeters.

---

## 🔄 Upcoming Labs This Week
The folder structure below is expanding dynamically to include:
* **Advanced Multi-Sensor Arrays**
* **Sensor Integration & Compound Conditional Logic Assignments**

---

## 🚀 Simulation & Hardware Deployment Guide

### Running Modules inside the Tinkercad Cloud Engine
1. Open any targeted project subdirectory indexed above and navigate to its local `.ino` file source layer.
2. Open your web simulator panel interface and change the block workspace option to **Text**.
3. Replace the canvas starter text by pasting the source code block directly inside the panel window.
4. Click **Start Simulation**, click on the virtual sensor package component to bring up its interactive slider/target bubble handle, and open the bottom Serial Monitor panel to observe live data conversions.
