# ESP32 Dual-Location Weather & Air Quality Monitor (Fetch data from weather API.)

An IoT project built on the **ESP32** microcontroller that monitors environmental conditions across two distinct locations simultaneously:

1. **Delhi (Remote):** Weather metrics (Temperature, Humidity, Coordinates) and Air Quality Index (AQI) fetched via OpenWeatherMap API.
2. **IIT Jammu (Local):** Real-time local Temperature and Humidity sourced directly from an on-board **DHT11 sensor**, combined with regional AQI and Coordinates via OpenWeatherMap API.

---

## 📌 Project Overview & Architecture

The project connects to local Wi-Fi, captures real-time data from a local hardware sensor, and pairs it with precise geographical data queried through external API REST endpoints. The parsed JSON payloads are rendered efficiently onto the Serial Monitor.

```
                  +-------------------+
                  |     ESP32 MCU     | <--- Wi-Fi (Internet)
                  +-------------------+
                    |               ^
  Reads (Local Data)|               | Fetches (Remote Data)
                    v               v
            +-----------+     +-----------------------+
            |   DHT11   |     | OpenWeatherMap API    |
            |  Sensor   |     | (Delhi & Jammu Nodes) |
            +-----------+     +-----------------------+

```

---

## 🛠️ Hardware Requirements & Pin Mapping

### Component Checklist

* **ESP32 Development Board** (e.g., ESP32 WROOM 32D)
* **DHT11 Temperature & Humidity Sensor** (Module or 3-pin variant)
* **Breadboard & Jumper Wires**
* **Micro-USB Cable**

### Wiring Architecture

| DHT11 Pin | Description | ESP32 Pin Assignment |
| --- | --- | --- |
| **VCC** | Power Supply (3.3V / 5V) | `3V3` or `5V` |
| **DATA** | Digital Signal Out | `GPIO 23` |
| **GND** | Ground | `GND` |

> 📸 **Hardware Setup Showcase**
> *Insert your actual physical circuit connections here:*
> 

---

## 💻 Software Prerequisites & Installation

### 1. IDE Configuration

Ensure you have the latest version of the [Arduino IDE](https://www.arduino.cc/en/software) installed. Add your ESP32 board library URL into the Preferences panel to activate the ESP32 board core module.

### 2. Dependency Libraries

Open the Arduino Library Manager (**Tools > Manage Libraries**) and install the following standard dependencies:

* **Adafruit DHT Sensor Library** (v1.4.x or higher)
* **Adafruit Unified Sensor Library** (v1.1.x or higher)
* **ArduinoJson** by Benoit Blanchon (v7.x or higher optimized)

---

## 🚀 Setup & Execution Guide

### Step 1: Open and Configure Code

Clone this repository or copy the code file into your local environment. Locate the configuration header blocks and modify your network parameters:

```cpp
// --- Wi-Fi Settings ---
const char* ssid     = "YOUR_ACTUAL_WIFI_SSID";
const char* password = "YOUR_ACTUAL_WIFI_PASSWORD";

```

### Step 2: Verification of the OpenWeatherMap API Token

The provided script includes a pre-configured API Token (`your token`). Verify your endpoint restrictions inside your network infrastructure if request timeout errors persist.

### Step 3: Deployment

1. Connect your ESP32 board to your computer.
2. Under **Tools > Board**, select your target platform (**ESP32 Dev Module**).
3. Under **Tools > Port**, check the corresponding COM port.
4. Press the **Upload** button.

---

## 📋 System Metrics & Serial Output

Open your IDE Serial Monitor (**Ctrl + Shift + M**) and set the baud rate precisely to **115200**.

### Expected Output Log Format:

```text
Connecting to WiFi.....
Connected to WiFi network successfully!

================================================
>>> FETCHING DATA FOR DELHI <<<
Latitude: 28.6520
Longitude: 77.2315
Temperature: 34.50 °C
Humidity: 62 %
Air Quality Index (AQI): 4 (Poor)

>>> DATA FOR IIT JAMMU <<<
Local Temperature (DHT11): 29.20 °C
Local Humidity (DHT11): 54 %
Latitude: 32.8167
Longitude: 74.9167
Air Quality Index (AQI): 2 (Fair)
================================================

```

## Project Photos and Serial Monitor Screenshots
<img width="960" height="1280" alt="WhatsApp Image 2026-06-30 at 12 31 38 PM (1)" src="https://github.com/user-attachments/assets/57b03a8a-7e1e-4da5-bfa9-304edbfd504b" />
<img width="1541" height="722" alt="Screenshot 2026-06-30 122156" src="https://github.com/user-attachments/assets/946e3773-8af9-4697-81ac-a933bf94a5d1" />


---

## 🛠️ Troubleshooting Matrix

* **DHT11 Read Failure (`❌ Failed to read from DHT11 sensor!`)**: Check your data wire routing on `GPIO 23`. Ensure that if you are using a standalone sensor without a module breakout board, you place a $10\text{k}\Omega$ pull-up resistor between the VCC and DATA pins.
* **WiFi Multi-Timeout (`...` sequence loops indefinitely)**: Verify your SSID character casing and check if your campus or local Wi-Fi router uses an Enterprise verification layer (WPA2-Enterprise networks require the `esp_wpa2.h` wrapper).
* **HTTP Error Code `-1**`: Represents an internal connection dropped layout. Increase your `timerDelay` configuration tracking context to limit API spam.

---

