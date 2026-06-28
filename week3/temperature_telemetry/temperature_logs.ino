const int TEMP_PIN = A1; // Connected to the analog output of the temperature sensor

void setup() {
  Serial.begin(9600);
  pinMode(TEMP_PIN, INPUT);
  
  Serial.println("--- Precision Temperature Telemetry Logger Initialized ---");
}

void loop() {
  // 1. Read the raw 10-bit analog value (0 to 1023)
  int rawADC = analogRead(TEMP_PIN);
  
  // 2. Convert ADC steps back into actual working millivolts (assuming 5V reference)
  // 5.0V / 1024 steps = ~0.0048828V per step
  float voltage = rawADC * (5.0 / 1024.0);
  
 // 3. Apply TMP36 specific calibration math offset
  // TMP36 outputs 500mV at 0°C, with a scaling factor of 10mV per degree Celsius
  float temperatureC = (voltage - 0.5) * 100.0;
  
  // 4. Stream clear, structured telemetry packages to the console line
  Serial.print("Raw ADC Value: ");
  Serial.print(rawADC);
  Serial.print("  |  Sensor Voltage: ");
  Serial.print(voltage, 3);
  Serial.print(" V  |  Temperature: ");
  Serial.print(temperatureC, 1);
  Serial.println(" °C");
  
  delay(1000); // Poll once every second for crisp logging readability
}
