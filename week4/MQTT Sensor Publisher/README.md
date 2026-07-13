# ESP32 MQTT Sensor Publisher & LED Controller

## Overview
This project demonstrates how to use an ESP32 to read temperature and humidity data from a DHT11/DHT22 sensor, format the readings as JSON objects with precise Unix timestamps, and publish them to a public MQTT broker (HiveMQ). Additionally, it subscribes to a control topic to remotely toggle an LED.

## Student Details
**Student Name:** Apoorv Shivam  

## Features
- **Sensor Reading:** Accurately reads environmental data using a DHT11/DHT22 sensor.
- **NTP Time Sync:** Fetches the current Unix timestamp from `pool.ntp.org` for accurate data logging.
- **JSON Payload:** Publishes data in an easy-to-parse JSON format (e.g., `{"value": 28.5, "unit": "C", "ts": 1234567890}`).
- **Remote Control:** Subscribes to an MQTT topic to control the built-in (or external) LED via `ON`/`1` and `OFF`/`0` commands.
- **Simulator Ready:** Fully compatible with the Wokwi online simulator.

## Hardware Requirements
- ESP32 Development Board
- DHT11 or DHT22 Temperature & Humidity Sensor
- Jumper wires & Breadboard
- *Optional:* 10kΩ pull-up resistor (if using a bare 4-pin DHT sensor)
- *Optional:* 5mm LED and 330Ω resistor (if not using the built-in LED)

## Pin Connections

### 1. DHT Sensor
| ESP32 Pin | DHT Sensor Pin | Description |
| :--- | :--- | :--- |
| **3V3** | VCC (or +) | 3.3V Power Supply |
| **GND** | GND (or -) | Ground |
| **GPIO 4 (D4)**| DATA (or OUT) | Data signal line |

> **Note:** If you are wiring a bare 4-pin DHT sensor, connect a **10kΩ pull-up resistor** between the VCC and DATA pins. Breakout boards (3-pin) already have this included.

### 2. LED (Optional External)
*Note: The code defaults to GPIO 2, which is the built-in LED on most ESP32 boards.*

| ESP32 Pin | LED Pin | Description |
| :--- | :--- | :--- |
| **GPIO 2 (D2)** | Anode (Long leg) | Positive terminal (via 220Ω or 330Ω resistor) |
| **GND** | Cathode (Short leg)| Negative terminal (Ground) |

## Software Requirements
Install the following libraries via the Arduino IDE Library Manager:
- **PubSubClient** by Nick O'Leary
- **DHT sensor library** by Adafruit (requires *Adafruit Unified Sensor*)
- **ArduinoJson** by Benoit Blanchon (v7 recommended)
- **NTPClient** by Fabrice Weinberg

## MQTT Topics Configuration
- **Broker:** `broker.hivemq.com` (Port `1883`)
- **Temperature Publish Topic:** `iitjammu/summer26/apoorvshivam/temperature`
- **Humidity Publish Topic:** `iitjammu/summer26/apoorvshivam/humidity`
- **LED Control Subscribe Topic:** `iitjammu/summer26/apoorvshivam/led_control`

*(Note: Replace `apoorvshivam` with your own identifier if adapting for a different user).*

## How It Works
1. **Initialization:** The ESP32 connects to the local Wi-Fi network (or the `Wokwi-GUEST` network in the simulator) and synchronizes its internal clock with an NTP server (`pool.ntp.org`).
2. **MQTT Connection:** It connects to the HiveMQ public broker and immediately subscribes to the LED control topic.
3. **Data Polling (Every 5 seconds):** 
   - Reads the current temperature and humidity from the DHT sensor.
   - Fetches the current Unix timestamp from the NTP client.
   - Constructs two separate JSON documents (one for Temperature, one for Humidity).
   - Publishes the serialized JSON strings to their respective MQTT topics.
4. **Listening & Controlling:** In the background, the MQTT `callback` function listens for incoming messages on the LED topic. If it receives a payload containing `"ON"` or `"1"`, it pulls GPIO 2 HIGH to turn the LED on. If it receives `"OFF"` or `"0"`, it pulls GPIO 2 LOW to turn it off.

## Testing with MQTT Explorer
1. Open [MQTT Explorer](http://mqtt-explorer.com/) or MQTT.fx.
2. Create a new connection to Host: `broker.hivemq.com`, Port: `1883`.
3. To monitor telemetry, search or expand the topic tree to `iitjammu/summer26/apoorvshivam/`.
4. Observe the JSON payloads appearing every 5 seconds under the `temperature` and `humidity` subtopics.
5. To test the LED, navigate to the **Publish** panel, enter the LED control topic, set the format to `raw`, type `ON` (or `1`) into the payload box, and hit publish. Watch your ESP32's LED light up!
