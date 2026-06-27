/*******************************************************************************
 * File Name:    led_blink.ino
 * Course:       IoT & Embedded Systems Program (IIT Jammu Summer School 2026)
 * Author:       Apoorv Shivam
 * Date:         June 27, 2026
 * Description:  v1.3 - Finalized dynamic LED blink controller. Reads an analog 
 * voltage from a potentiometer on pin A0 and sets it as the 
 * non-blocking-ready delay interval for a standard indicator LED. 
 * Tracks and logs the execution execution cycle count via Serial.
 *******************************************************************************/

const int ledPin = 13;      // Pin connected to the LED
const int potPin = A0;      // Pin connected to the potentiometer center terminal
int blinkCount = 0;         // Variable to keep track of the blink count

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);       // Initialize serial communication at 9600 bps
}

void loop() {
  int potValue = analogRead(potPin); // Read raw value (0 to 1023) from potentiometer
  
  digitalWrite(ledPin, HIGH);
  delay(potValue);                   // Delay duration scales with the knob position
  digitalWrite(ledPin, LOW);
  delay(potValue);                   // Delay duration scales with the knob position
  
  blinkCount++; 
  Serial.print("Blink count: ");
  Serial.print(blinkCount);
  Serial.print(" | Delay Interval: ");
  Serial.print(potValue);
  Serial.println(" ms");
}
