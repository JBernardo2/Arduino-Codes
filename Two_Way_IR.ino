#include <string.h>
int ledPin = 8;
String message = "";
int lightPin = 0; 
int timer = 0;
int character = 0;
int timeout = 0;
int incoming = 0;
String message2 = "";

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  // A0 is always analog input
  Serial.begin(9600);
  // sets up pins and starts a serial monitor for printing
  
  Serial.begin(9600);
  Serial.println("Starting Communication...");
  Serial.println("Connected");
} 

void loop() {
  while (Serial.available()==0){
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
     message2 += " ";
   }
   else if (character == 2) {
    message2 += 'e';
   }
   else if (character == 3) {
    message2 += 't';
   }
   else if (character == 4) {
    message2 += 'a';
   }
   else if (character == 5) {
    message2 += 'o';
   }
   else if (character == 6) {
    message2 += 'i';
   }
   else if (character == 7) {
    message2 += 'n';
   }
   else if (character == 8) {
    message2 += 's';
   }
   else if (character == 9) {
    message2 += 'h';
   }
   else if (character == 10) {
    message2 += 'r';
   }
   else if (character == 11) {
    message2 += 'd';
   }
   else if (character == 12) {
    message2 += 'l';
   }
   else if (character == 13) {
    message2 += 'c';
   }
   else if (character == 14) {
    message2 += 'u';
   }
   else if (character == 15) {
    message2 += 'm';
   }
   else if (character == 16) {
    message2 += 'w';
   }
   else if (character == 17) {
    message2 += 'f';
   }
   else if (character == 18) {
    message2 += 'g';
   }
   else if (character == 19) {
    message2 += 'y';
   }
   else if (character == 20) {
    message2 += 'p';
   }
   else if (character == 21) {
    message2 += 'b';
   }
   else if (character == 22) {
    message2 += 'v';
   }
   else if (character == 23) {
    message2 += 'k';
   }
   else if (character == 24) {
    message2 += 'j';
   }
   else if (character == 25) {
    message2 += 'x';
   }
   else if (character == 26) {
    message2 += 'q';
   }
   else if (character == 27) {
    message2 += 'z';
   }
   character = 0;
   timer = 0;
   //char bank to add to message
 }
 timeout ++;
 if (timeout >= 60 && !message2.equals("")) {
    Serial.println(message2);
    message = "";
    timeout = 0;
    incoming = 0;
 }
 }
  message=Serial.readString();
  Serial.println(message);
  send(message);
  message="";
}

void blink(int pin) {
  digitalWrite(pin, LOW);
  delay(2);
  digitalWrite(pin, HIGH);
  delay(2);
}

void send(String message) {
  message.toLowerCase();

  for (int i = 0; i < message.length(); i++) {
    switch (message.charAt(i)) {
      case 'z':
        blink(ledPin);
      case 'q':
        blink(ledPin);
      case 'x':
        blink(ledPin);
      case 'j':
        blink(ledPin);
      case 'k':
        blink(ledPin);
      case 'v':
        blink(ledPin);
      case 'b':
        blink(ledPin);
      case 'p':
        blink(ledPin);
      case 'y':
        blink(ledPin);
      case 'g':
        blink(ledPin);
      case 'f':
        blink(ledPin);
      case 'w':
        blink(ledPin);
      case 'm':
        blink(ledPin);
      case 'u':
        blink(ledPin);
      case 'c':
        blink(ledPin);
      case 'l':
        blink(ledPin);
      case 'd':
        blink(ledPin);
      case 'r':
        blink(ledPin);
      case 'h':
        blink(ledPin);
      case 's':
        blink(ledPin);
      case 'n':
        blink(ledPin);
      case 'i':
        blink(ledPin);
      case 'o':
        blink(ledPin);
      case 'a':
        blink(ledPin);
      case 't':
        blink(ledPin);
      case 'e':
        blink(ledPin);
      case ' ':
        blink(ledPin);
        break;
    }
    delay(5);
  }

}
