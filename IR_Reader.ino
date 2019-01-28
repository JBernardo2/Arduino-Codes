#include <string.h>

int lightPin = 0; 
int ledPin = 9;
int timer = 0;
int character = 0;
String message = " ";

void setup()
{
  pinMode(ledPin, OUTPUT);
  // A0 is always analog input
  Serial.begin(9600);
  // sets up pins and starts a serial monitor for printing
}
 
void loop()
{
 int lightLevel = analogRead(lightPin);
 lightLevel = constrain(lightLevel, 0, 1023);
 if (lightLevel <= 1000) {
  character ++;
  timer = 0;
  delay(15);
  // gets light levels set, and implements a delay to time out characters
 }
 timer ++;
 delay(15);
 if (timer >= 4) {
   // resets timer and character to develop message
   if (character == 1) {
     message += 'a';
   }
   else if (character == 2) {
    message += 'b';
   }
   else if (character == 3) {
    message += 'c';
   }
   else if (character == 4) {
    message += 'd';
   }
   else if (character == 5) {
    message += 'e';
   }
   else if (character == 6) {
    message += 'f';
   }
   else if (character == 7) {
    message += 'g';
   }
   else if (character == 8) {
    message += 'h';
   }
   else if (character == 9) {
    message += 'i';
   }
   else if (character == 10) {
    message += 'j';
   }
   else if (character == 11) {
    message += 'k';
   }
   else if (character == 12) {
    message += 'l';
   }
   else if (character == 13) {
    message += 'm';
   }
   else if (character == 14) {
    message += 'n';
   }
   else if (character == 15) {
    message += 'o';
   }
   else if (character == 16) {
    message += 'p';
   }
   else if (character == 17) {
    message += 'q';
   }
   else if (character == 18) {
    message += 'r';
   }
   else if (character == 19) {
    message += 's';
   }
   else if (character == 20) {
    message += 't';
   }
   else if (character == 21) {
    message += 'u';
   }
   else if (character == 22) {
    message += 'v';
   }
   else if (character == 23) {
    message += 'w';
   }
   else if (character == 24) {
    message += 'x';
   }
   else if (character == 25) {
    message += 'y';
   }
   else if (character == 26) {
    message += 'z';
   }
   else if (character == 27) {
    message += " ";
   }
   character = 0;
   timer = 0;
   //char bank to add to message
 }
    Serial.println(message);
 }
