#include <ESP32Servo.h>

// Define Pins
const int TRIG_PIN = 5;
const int ECHO_PIN = 18;
const int SERVO_PIN = 13;
const int BUZZER_PIN = 12;

// Variables
Servo gateServo;
long duration;
float distanceCm;
bool vehicleDetected = false;

void setup() {
  Serial.begin(115200);
  
  // Initialize Pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  
  // Allow allocation of all timers for Servo
  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);
  
  gateServo.setPeriodHertz(50);    // Standard 50hz servo
  gateServo.attach(SERVO_PIN, 500, 2400); // Attach servo

  // Start with gate closed and buzzer off
  gateServo.write(0);
  digitalWrite(BUZZER_PIN, LOW);
  Serial.println("System Ready. Gate Closed.");
}

void loop() {
  // Clear the TRIG_PIN
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  // Trigger the sensor by sending a 10us high pulse
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Read the ECHO_PIN, returns the sound wave travel time in microseconds
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate the distance in cm
  distanceCm = duration * 0.034 / 2;
  
  // Print distance for debugging
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  // Logic for the barrier gate
  // Note: pulseIn can return 0 if out of range, so check distanceCm > 0
  if (distanceCm < 15.0 && distanceCm > 0) {
    if (!vehicleDetected) {
      Serial.println("Vehicle Detected! Opening Gate...");
      gateServo.write(90); // Open gate
      vehicleDetected = true;
    }
    // Continuous beep while vehicle is detected
    digitalWrite(BUZZER_PIN, HIGH);
    delay(150);
    digitalWrite(BUZZER_PIN, LOW);
    delay(150);
    
  } else {
    if (vehicleDetected) {
      Serial.println("Vehicle Cleared. Closing Gate.");
      gateServo.write(0); // Close gate
      digitalWrite(BUZZER_PIN, LOW); // Ensure buzzer is off
      vehicleDetected = false;
    }
    delay(200); // Small delay to stabilize readings when empty
  }
}
