#include <ESC.h>

#define PIN_ESC 11

ESC EDF27(PIN_ESC);

void setup() {
  EDF27.init();
  delay(150);
}

void loop() {
  EDF27.setSpeed(2000);
  delay(2000);
  EDF27.setSpeed(1500);
  delay(2000);
}
