#include <string.h>

int lightPin = 0; 
int ledPin = 9;
int timer = 0;
int character = 0;
int timeout = 0;
int incoming = 0;
String message = "";

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
  if (incoming == 0) {
    Serial.println("Incoming Message ...");
    incoming = 1;
  }
  character ++;
  timer = 0;
  timeout = 0;
  delay(1);
  // gets light levels set, and implements a delay to time out characters
 }
 timer ++;
 delay(1);
 if (timer >= 4) {
   // resets timer and character to develop message
   if (character == 1) {
     message += " ";
   }
   else if (character == 2) {
    message += 'e';
   }
   else if (character == 3) {
    message += 't';
   }
   else if (character == 4) {
    message += 'a';
   }
   else if (character == 5) {
    message += 'o';
   }
   else if (character == 6) {
    message += 'i';
   }
   else if (character == 7) {
    message += 'n';
   }
   else if (character == 8) {
    message += 's';
   }
   else if (character == 9) {
    message += 'h';
   }
   else if (character == 10) {
    message += 'r';
   }
   else if (character == 11) {
    message += 'd';
   }
   else if (character == 12) {
    message += 'l';
   }
   else if (character == 13) {
    message += 'c';
   }
   else if (character == 14) {
    message += 'u';
   }
   else if (character == 15) {
    message += 'm';
   }
   else if (character == 16) {
    message += 'w';
   }
   else if (character == 17) {
    message += 'f';
   }
   else if (character == 18) {
    message += 'g';
   }
   else if (character == 19) {
    message += 'y';
   }
   else if (character == 20) {
    message += 'p';
   }
   else if (character == 21) {
    message += 'b';
   }
   else if (character == 22) {
    message += 'v';
   }
   else if (character == 23) {
    message += 'k';
   }
   else if (character == 24) {
    message += 'j';
   }
   else if (character == 25) {
    message += 'x';
   }
   else if (character == 26) {
    message += 'q';
   }
   else if (character == 27) {
    message += 'z';
   }
   character = 0;
   timer = 0;
   //char bank to add to message
 }
 timeout ++;
 if (timeout >= 60 && !message.equals("")) {
    Serial.println(message);
    message = "";
    timeout = 0;
    incoming = 0;
 }
 }
