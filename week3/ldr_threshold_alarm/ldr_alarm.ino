/*******************************************************************************
 * File Name:    ldr_alarm.ino
 * Course:       IoT & Embedded Systems Program (IIT Jammu Summer School 2026)
 * Author:       Apoorv Shivam
 * Description:  Analog Light Sensor (LDR) interface with threshold tracking.
 * Triggers a piezo audio frequency pulse when ambient light drops below a 
 * critical configuration range.
 *******************************************************************************/

const int LDR_PIN = A0;     // Analog input pin from voltage divider
const int BUZZER_PIN = 9;   // PWM digital output pin driving the buzzer

// Configurable ambient light threshold value (0 - 1023 range)
// Lower values represent darker environments
const int DARK_THRESHOLD = 400; 

void setup() {
  Serial.begin(9600);
  pinMode(LDR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  
  Serial.println("--- LDR Monitor & Alarm System Initialized ---");
}

void loop() {
  // Read the raw 10-bit analog value from the sensor (0 to 1023)
  int lightLevel = analogRead(LDR_PIN);
  
  // Print telemetry frames down to the console monitor
  Serial.print("Ambient Light Level: ");
  Serial.println(lightLevel);
  
  // Evaluate sensor condition against our static safety threshold
  if (lightLevel < DARK_THRESHOLD) {
    // Environment is dark -> Pulsing alert tone at 1000 Hz
    tone(BUZZER_PIN, 1000); 
    delay(150);
    noTone(BUZZER_PIN);
    delay(150);
  } else {
    // Environment is lit -> Turn off audio alarm line cleanly
    noTone(BUZZER_PIN);
  }
  
  delay(200); // Sampling stabilization delay
}
