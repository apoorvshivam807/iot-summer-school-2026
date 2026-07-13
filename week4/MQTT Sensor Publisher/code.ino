#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>
#include <ArduinoJson.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

// --- Wokwi WiFi Configuration ---
const char* ssid = " ";
const char* password = "";

const char* mqtt_server = "broker.hivemq.com";
const int mqtt_port = 1883;
const char* mqtt_client_id = "ESP32_Wokwi_Summer26_Client"; 

// --- MQTT Topics ---
const char* temp_topic = "iitjammu/summer26/apoorvshivam/temperature";
const char* hum_topic  = "iitjammu/summer26/apoorvshivam/humidity";
const char* led_topic  = "iitjammu/summer26/apoorvshivam/led_control";

// --- Hardware Pins ---
#define DHTPIN 4
#define DHTTYPE DHT22 // Wokwi uses DHT22 in its standard parts list
#define LED_PIN 2     // Built-in LED

// --- Instances ---
WiFiClient espClient;
PubSubClient client(espClient);
DHT dht(DHTPIN, DHTTYPE);
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org");

unsigned long lastMsg = 0;
const long interval = 5000; // 5 seconds

void setup_wifi() {
  delay(10);
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  
  String message = "";
  for (int i = 0; i < length; i++) {
    message += (char)payload[i];
  }
  Serial.println(message);

  // Toggle LED based on message
  if (String(topic) == led_topic) {
    message.toUpperCase();
    if (message == "ON" || message == "1") {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("LED turned ON");
    } 
    else if (message == "OFF" || message == "0") {
      digitalWrite(LED_PIN, LOW);
      Serial.println("LED turned OFF");
    }
  }
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    if (client.connect(mqtt_client_id)) {
      Serial.println("connected");
      // Subscribe to the LED control topic
      client.subscribe(led_topic);
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  
  dht.begin();
  setup_wifi();
  
  client.setServer(mqtt_server, mqtt_port);
  client.setCallback(callback);
  
  timeClient.begin();
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
  timeClient.update();

  unsigned long now = millis();
  if (now - lastMsg >= interval) {
    lastMsg = now;

    // Read sensor data
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    // Check if any reads failed
    if (isnan(h) || isnan(t)) {
      Serial.println("Failed to read from DHT sensor!");
      return;
    }

    unsigned long timestamp = timeClient.getEpochTime();

    // Create JSON for Temperature (Using ArduinoJson v7 syntax)
    JsonDocument tempDoc;
    tempDoc["value"] = t;
    tempDoc["unit"] = "C";
    tempDoc["ts"] = timestamp;
    
    char tempString[100];
    serializeJson(tempDoc, tempString);
    client.publish(temp_topic, tempString);
    Serial.print("Published Temp: ");
    Serial.println(tempString);

    // Create JSON for Humidity
    JsonDocument humDoc;
    humDoc["value"] = h;
    humDoc["unit"] = "%";
    humDoc["ts"] = timestamp;
    
    char humString[100];
    serializeJson(humDoc, humString);
    client.publish(hum_topic, humString);
    Serial.print("Published Humidity: ");
    Serial.println(humString);
  }
}
