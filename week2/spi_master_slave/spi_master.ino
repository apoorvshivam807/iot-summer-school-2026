#include <SPI.h>

void setup() {
  // Initialize the hardware SPI bus lines (MOSI, MISO, SCK)
  SPI.begin();
  
  // Set the SPI clock divider (divides system clock by 16 to stabilize signals)
  SPI.setClockDivider(SPI_CLOCK_DIV16);
  
  // Configure the hardware Slave Select (SS) pin as an output
  pinMode(SS, OUTPUT);
  
  // Pull Slave Select HIGH to keep the slave device idle initially
  digitalWrite(SS, HIGH);
  
  Serial.begin(9600);
  Serial.println("--- SPI Master Initialized ---");
}

void loop() {
  // 1. Pull SS LOW to select the slave device and open communication channel
  digitalWrite(SS, LOW);
  
  // 2. Transmit data character '1' down the SPI bus line
  char signalOn = '1';
  SPI.transfer(signalOn);
  Serial.println("Master Sent: 1 (Turn LED ON)");
  
  // 3. Pull SS HIGH to release the slave device
  digitalWrite(SS, HIGH);
  delay(1000); // Wait 1 second
  
  // 4. Repeat selection process to send data character '0'
  digitalWrite(SS, LOW);
  char signalOff = '0';
  SPI.transfer(signalOff);
  Serial.println("Master Sent: 0 (Turn LED OFF)");
  
  digitalWrite(SS, HIGH);
  delay(1000); // Wait 1 second
}
