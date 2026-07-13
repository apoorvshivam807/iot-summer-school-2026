#include <WiFi.h>
#include <WebServer.h>
#include "DHT.h"

// Define Pins and Sensor Type
#define DHTPIN 4
#define DHTTYPE DHT22 // Wokwi uses DHT22 by default, logic is identical to DHT11
#define LED_PIN 2     // Standard ESP32 onboard LED pin

DHT dht(DHTPIN, DHTTYPE);
WebServer server(80);

// Global state for the LED
bool ledState = false;

// Wokwi Virtual Wi-Fi Credentials
const char* ssid = " ";
const char* password = "";

// Function to handle the main webpage
void handleRoot() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  unsigned long uptimeSeconds = millis() / 1000;
  
  // Build the HTML page
  String html = "<!DOCTYPE html><html><head>";
  html += "<meta name='viewport' content='width=device-width, initial-scale=1'>";
  // Auto-refresh the page every 10 seconds
  html += "<meta http-equiv='refresh' content='10'>";
  html += "<title>ESP32 Monitor</title>";
  html += "<style>";
  html += "body { font-family: Arial, sans-serif; text-align: center; margin-top: 50px; background-color: #f4f4f9; color: #333;}";
  html += "h1 { color: #0056b3; }";
  html += ".card { background: white; padding: 20px; border-radius: 10px; box-shadow: 0 4px 8px rgba(0,0,0,0.1); display: inline-block; }";
  html += "button { font-size: 18px; padding: 10px 20px; cursor: pointer; border-radius: 5px; border: none; background-color: #28a745; color: white;}";
  html += "button:hover { background-color: #218838; }";
  html += "</style></head><body>";
  
  html += "<div class='card'>";
  html += "<h1>ESP32 Environment Monitor</h1>";
  
  if (isnan(t) || isnan(h)) {
    html += "<p><strong>Error:</strong> Failed to read from DHT sensor!</p>";
  } else {
    html += "<p><strong>Temperature:</strong> " + String(t) + " &deg;C</p>";
    html += "<p><strong>Humidity:</strong> " + String(h) + " %</p>";
  }
  
  html += "<hr><p><strong>Device Uptime:</strong> " + String(uptimeSeconds) + " seconds</p>";
  html += "<p><strong>LED Status:</strong> " + String(ledState ? "ON" : "OFF") + "</p>";
  
  // HTML form to toggle the LED
  html += "<form action='/toggle' method='POST'>";
  html += "<button type='submit'>Toggle LED</button>";
  html += "</form>";
  html += "</div>";
  
  html += "</body></html>";
  
  // Serve the HTML string to the client
  server.send(200, "text/html", html);
}

// Function to handle the LED toggle logic
void handleToggle() {
  ledState = !ledState;
  digitalWrite(LED_PIN, ledState ? HIGH : LOW);
  
  // Redirect the browser back to the main page smoothly
  server.sendHeader("Location", "/");
  server.send(303);
}

void setup() {
  Serial.begin(115200);
  
  // Initialize Sensor & LED
  dht.begin();
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  // Connect to Virtual Wi-Fi
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi Connected!");
  Serial.print("Access your web server at IP: ");
  Serial.println(WiFi.localIP());

  // Define HTTP routing
  server.on("/", HTTP_GET, handleRoot);
  server.on("/toggle", HTTP_POST, handleToggle);
  
  // Start the server
  server.begin();
}

void loop() {
  // Listen for incoming web traffic
  server.handleClient();
}
