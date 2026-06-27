const int ledPin = 13;      // Pin connected to the LED
const int potPin = A0;      // Pin connected to the potentiometer center terminal
int blinkCount = 0;         // Variable to keep track of the blink count

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);       // Initialize serial communication
  // Analog pins do not strictly require pinMode configuration for analogRead, 
  // but it is good practice.
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
