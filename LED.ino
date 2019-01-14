#include "LEDClass.h"
int lights[8];
//sets light values to different pin numbers
void setup() {
  for (int i = 0; i < sizeof(lights); i++) {
    lights[i] = i;
  }
  for (int i = 0; i < sizeof(lights); i++) {
    pinMode(lights[i], OUTPUT);
  }
  //sets up all the lights as outputs
}

void loop() {
  #include "LEDClass.h"
  for (int i = 0; i < sizeof(lights); i++) {
    digitalWrite(lights[i], HIGH);
  }
  delay(500);
  //writes lights to high
   for (int i = 0; i < sizeof(lights); i++) {
    digitalWrite(lights[i], LOW);
  }
  delay(500);
  // writes lights to low
  
}
