

int LED = 13;
int LDR = A0;

void setup() {
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
    pinMode(LDR, INPUT);
}

void loop() {
    int LDR_value = analogRead(LDR);
    Serial.println(LDR_value);

    // Turn LED on if ambient light falls below or equals threshold value
    if (LDR_value <= 300) {
        digitalWrite(LED, HIGH);
    } else {
        digitalWrite(LED, LOW);
    }
}
