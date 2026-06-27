

const int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW); // Start with LED off
  
  Serial.begin(9600);
  Serial.println("System Online. Type ON or OFF and click Send:");
}

void loop() {
  // Check if any text has been sent to the serial port
  if (Serial.available() > 0) {
    // Read the entire incoming text as a string
    String command = Serial.readString();
    
    // Remove any accidental spaces or hidden characters
    command.trim();
    
    // Check the command (ignores upper/lower case styling)
    if (command.equalsIgnoreCase("ON")) {
      digitalWrite(LED_PIN, HIGH);
      Serial.print("["); Serial.print(millis()); Serial.println("] STATUS: LED Activated.");
    } 
    else if (command.equalsIgnoreCase("OFF")) {
      digitalWrite(LED_PIN, LOW);
      Serial.print("["); Serial.print(millis()); Serial.println("] STATUS: LED Deactivated.");
    } 
    else {
      Serial.print("["); Serial.print(millis()); Serial.println("] ERROR: Invalid Command received: ");
      Serial.println(command);
    }
  }
}
