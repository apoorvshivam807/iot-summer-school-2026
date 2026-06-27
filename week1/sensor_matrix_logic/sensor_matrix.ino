
void setup() {
    Serial.begin(9600);
    // Outer loop controls row iteration (1 through 4)
    for(int i = 0; i < 4; i++) {
        // Inner loop controls column iteration (1 through 3)
        for(int j = 0; j < 3; j++) {
            Serial.print("Sensor(");
            Serial.print(i + 1); // Offset index mapping to human-readable count
            Serial.print(",");
            Serial.print(j + 1);
            Serial.print(") ");
        }
        // Print newline break once complete column iteration completes
        Serial.println();
    }
    
}

void loop() {
    // Empty loop as calculation logic executes systematically on initialization
}
