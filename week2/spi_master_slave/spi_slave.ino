#include <SPI.h>

const int LED_PIN = 7;
volatile char receivedData = 0;
volatile bool dataReady = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  // Turn on SPI hardware in SLAVE mode by modifying the SPI Control Register (SPCR)
  // MSTR bit is left at 0 (Slave), SPE bit is set to 1 (SPI Enable)
  pinMode(MISO, OUTPUT); // Slave must drive MISO output line
  SPCR |= _BV(SPE);      // Turn on SPI hardware module
  
  // Turn on SPI hardware interrupts so execution drops into an ISR when data arrives
  SPCR |= _BV(SPIE);     
  
  Serial.println("--- SPI Slave Initialized & Listening ---");
}

// SPI Interrupt Service Routine (ISR) - Executes automatically when a byte arrives
ISR(SPI_STC_vect) {
  receivedData = SPDR;  // Read the byte directly from the SPI Data Register
  dataReady = true;     // Set state flag to true
}

void loop() {
  if (dataReady) {
    dataReady = false; // Reset the checking flag
    Serial.print("Slave Received: ");
    Serial.println(receivedData);
    
    // Evaluate character conditions
    if (receivedData == '1') {
      digitalWrite(LED_PIN, HIGH); // Turn local indicator light ON
    } 
    else if (receivedData == '0') {
      digitalWrite(LED_PIN, LOW);  // Turn local indicator light OFF
    }
  }
}
