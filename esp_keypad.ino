#include <Keypad.h>

const int rows = 4;
const int cols = 4;

char keys[rows][cols] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'},
};

uint8_t colPins[] = {27, 13, 22, 4};
uint8_t rowPins[] = {33, 25, 26, 14};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
}

void loop() {
  char key = keypad.getKey();
  if (key) {
    Serial.println(key);
  }
}
