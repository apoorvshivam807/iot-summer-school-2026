// Define the Arduino pins for your Rows and Columns
const int rowPins[5] = {1, 2, 3, 4, 5};
const int colPins[5] = {6, 7, 8, 9, 10};

// The 5x5 Alphabet defined using binary. 
// The 1s and 0s literally draw the shape of each letter!
const byte alphabet[26][5] = {
  {0b01110, 0b10001, 0b11111, 0b10001, 0b10001}, // A
  {0b11110, 0b10001, 0b11110, 0b10001, 0b11110}, // B
  {0b01111, 0b10000, 0b10000, 0b10000, 0b01111}, // C
  {0b11110, 0b10001, 0b10001, 0b10001, 0b11110}, // D
  {0b11111, 0b10000, 0b11110, 0b10000, 0b11111}, // E
  {0b11111, 0b10000, 0b11110, 0b10000, 0b10000}, // F
  {0b01111, 0b10000, 0b10111, 0b10001, 0b01111}, // G
  {0b10001, 0b10001, 0b11111, 0b10001, 0b10001}, // H
  {0b01110, 0b00100, 0b00100, 0b00100, 0b01110}, // I
  {0b00111, 0b00010, 0b00010, 0b10010, 0b01100}, // J
  {0b10001, 0b10010, 0b11100, 0b10010, 0b10001}, // K
  {0b10000, 0b10000, 0b10000, 0b10000, 0b11111}, // L
  {0b10001, 0b11011, 0b10101, 0b10001, 0b10001}, // M
  {0b10001, 0b11001, 0b10101, 0b10011, 0b10001}, // N
  {0b01110, 0b10001, 0b10001, 0b10001, 0b01110}, // O
  {0b11110, 0b10001, 0b11110, 0b10000, 0b10000}, // P
  {0b01110, 0b10001, 0b10101, 0b10010, 0b01101}, // Q
  {0b11110, 0b10001, 0b11110, 0b10100, 0b10010}, // R
  {0b01111, 0b10000, 0b01110, 0b00001, 0b11110}, // S
  {0b11111, 0b00100, 0b00100, 0b00100, 0b00100}, // T
  {0b10001, 0b10001, 0b10001, 0b10001, 0b01110}, // U
  {0b10001, 0b10001, 0b10001, 0b01010, 0b00100}, // V
  {0b10001, 0b10001, 0b10101, 0b11011, 0b10001}, // W
  {0b10001, 0b01010, 0b00100, 0b01010, 0b10001}, // X
  {0b10001, 0b01010, 0b00100, 0b00100, 0b00100}, // Y
  {0b11111, 0b00010, 0b00100, 0b01000, 0b11111}  // Z
};

void setup() {
  // Set all Row and Column pins as OUTPUT and initialize them to OFF
  for (int i = 0; i < 5; i++) {
    pinMode(rowPins[i], OUTPUT);
    pinMode(colPins[i], OUTPUT);
    digitalWrite(rowPins[i], LOW);   // Rows OFF
    digitalWrite(colPins[i], HIGH);  // Columns OFF
  }
}

void loop() {
  // Cycle through all 26 letters
  for (int letterIndex = 0; letterIndex < 26; letterIndex++) {
    
    // Show the current letter for 800 milliseconds
    displayCharacter(alphabet[letterIndex], 800);
    
    // Keep the matrix blank for 200 milliseconds between letters
    clearMatrix(200); 
  }
}

// Function to handle the multiplexing (scanning) of a single letter
void displayCharacter(const byte characterData[5], int durationMs) {
  unsigned long start_time = millis();
  
  // Keep scanning the rows until the duration is up
  while (millis() - start_time < durationMs) {
    for (int r = 0; r < 5; r++) {
      
      // 1. Turn ON the current row
      digitalWrite(rowPins[r], HIGH);

      // 2. Turn ON the correct columns by reading the bits in the byte
      for (int c = 0; c < 5; c++) {
        // bitRead extracts a specific 1 or 0 from the binary row
        // We use (4 - c) because the first bit (c=0) is on the far left (bit 4)
        if (bitRead(characterData[r], 4 - c) == 1) {
          digitalWrite(colPins[c], LOW);  // Turn column ON
        } else {
          digitalWrite(colPins[c], HIGH); // Turn column OFF
        }
      }

      // 3. Wait a fraction of a millisecond
      delayMicroseconds(2000);

      // 4. Turn OFF all columns to prevent ghosting
      for (int c = 0; c < 5; c++) {
        digitalWrite(colPins[c], HIGH);
      }

      // 5. Turn OFF the current row
      digitalWrite(rowPins[r], LOW);
    }
  }
}

// Function to blank out the screen completely for a set amount of time
void clearMatrix(int durationMs) {
  unsigned long start_time = millis();
  while (millis() - start_time < durationMs) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(rowPins[i], LOW);
      digitalWrite(colPins[i], HIGH);
    }
  }
}
