#include <Adafruit_LiquidCrystal.h>

// Initialize the LCD with the I2C address 0 (default for adapter chipsets)
Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  // Setup the LCD's number of columns and rows:
  lcd_1.begin(16, 2);

  // Print our welcome string message to the screen layout
  lcd_1.print("hii");
  delay(10000); 
}

void loop() {
  delay(10); // Low overhead background delay loop
}
