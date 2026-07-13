# ESP32 Wi-Fi Temperature Monitor & LED Controller

This project implements a lightweight web server on an ESP32 (or ESP8266) to monitor environmental data and control hardware remotely. It is designed to run in the [Wokwi Simulator](https://wokwi.com/) but can be easily adapted for physical hardware.

---

## 📌 Features

*   **Real-Time Monitoring:** Reads temperature and humidity from a DHT22/DHT11 sensor.
*   **Auto-Refreshing Dashboard:** The web interface automatically updates every 10 seconds without requiring JavaScript.
*   **Remote Hardware Control:** Includes a web-based button to toggle an onboard/external LED.
*   **System Diagnostics:** Displays the device's uptime (in seconds) since the last reboot.
*   **Responsive Design:** The HTML interface is styled with basic CSS to look clean on both desktop and mobile screens.

---

## 🛠️ Components & Pin Connections

| Component | Pin / Terminal | ESP32 Connection | Notes |
| :--- | :--- | :--- | :--- |
| **DHT22 Sensor** | VCC / + | `3V3` | Power supply |
| **DHT22 Sensor** | SDA / Data | `GPIO 4` | Digital data pin |
| **DHT22 Sensor** | GND / - | `GND` | Ground |
| **Red LED** | Anode (Long Leg) | `GPIO 2` | Connected via a 220Ω resistor |
| **Red LED** | Cathode (Short Leg)| `GND` | Ground |

---

## ⚙️ How It Works

1.  **Network Setup:** The ESP32 connects to the Wokwi virtual Wi-Fi network (`Wokwi-GUEST`). 
2.  **Web Server:** The `WebServer` library listens on port 80. When a browser requests the root URL (`/`), the ESP32 dynamically generates an HTML string containing the latest sensor readings and uptime.
3.  **Auto-Refresh:** An HTML meta tag (`<meta http-equiv='refresh' content='10'>`) is embedded in the page header, prompting the browser to reload and fetch fresh data every 10 seconds.
4.  **LED Toggle:** Clicking the "Toggle LED" button submits an HTML form via a `POST` request to the `/toggle` endpoint. The ESP32 intercepts this, flips the LED state, updates the physical pin, and redirects the browser back to the main page.

---

## 🚀 How to Run in Wokwi

### 1. Project Setup
1. Create a new ESP32 project on [Wokwi](https://wokwi.com/).
2. Add the following libraries in the **Library Manager**:
   *   `DHT sensor library` by Adafruit
   *   `Adafruit Unified Sensor`
3. Paste the provided `sketch.ino` code and `diagram.json` configuration into their respective tabs.

### 2. Accessing the Web Server
Because Wokwi uses a virtual network, you **cannot** type the simulated IP address (e.g., `10.10.0.2`) directly into a standard browser tab. Use one of the following methods:

*   **Method A (Built-in Tunnel):** Run the simulation. Look at the Serial Monitor at the bottom of the screen. When it prints `Access your web server at IP: 10.10.0.2`, click directly on the IP address text. Wokwi will open a secure, proxy-routed tab for you.
*   **Method B (Wokwi IoT Gateway):** Download and run the Wokwi Private IoT Gateway on your PC. Press `F1` in Wokwi, select "Enable Private Wokwi IoT Gateway", restart the simulation, and navigate to `http://localhost:9080` in your web browser.

---

## ⚠️ Notes for Physical Hardware

If you are porting this code to a real, physical ESP32/ESP8266 board:
1. Change the `ssid` and `password` variables in the code to match your actual home Wi-Fi network.
2. Once flashed, open the Serial Monitor (at 115200 baud) to find the assigned local IP address (e.g., `192.168.1.50`).
3. You can type that physical IP address directly into any web browser on your network to view the dashboard.
