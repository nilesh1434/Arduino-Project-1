// Nilesh Jain - 653929943
// Lab 1 - Get started with Arduino
// This code is supposed to blink 3 LED lights separately
// Youtube link - https://youtu.be/9l4zBByIy6M

int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;
unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
const long interval = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
//  LEDtimer = millis();
//  redLEDtimer = millis();
//  greenLEDtimer = millis();
}

void my_delay(const long interval) {
  unsigned long t0 = millis();
  unsigned long t1 = millis();
  while(t1-t0 <= interval) {
    t1 = millis();
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis1 >= interval){
    previousMillis1 = currentMillis;

    if(ledState1 == LOW){
      ledState1 = HIGH;
//      ledState2 = LOW;
//      ledState3 = LOW;
    }
    else {
      ledState1 = LOW;
//      ledState2 = LOW;
//      ledState3 = LOW;
    }
    digitalWrite(LED_BUILTIN,ledState1);
//    digitalWrite(8,ledState2);
//    digitalWrite(7,ledState3);
    my_delay(1000);

//    previousMillis1 = millis();
  }

  if(currentMillis - previousMillis2 >= interval){
    previousMillis2 = currentMillis;

    if(ledState2 == LOW){
      ledState2 = HIGH;
//      ledState1 = LOW;
//      ledState3 = LOW;
    }
    else {
      ledState2 = LOW;
//      ledState1 = LOW;
//      ledState3 = LOW;
    }
    digitalWrite(8,ledState2);
//    digitalWrite(LED_BUILTIN,ledState1);
//    digitalWrite(7,ledState3);
    my_delay(1000);
//    previousMillis2 = millis();
  }

  if(currentMillis - previousMillis3 >= interval){
    previousMillis3 = currentMillis;

    if(ledState3 == LOW){
      ledState3 = HIGH;
//      ledState1 = LOW;
//      ledState2 = LOW;
    }
    else {
      ledState3 = LOW;
//      ledState1 = LOW;
//      ledState2 = LOW;
    }
    digitalWrite(7,ledState3);
//    digitalWrite(8,ledState2);
//    digitalWrite(LED_BUILTIN,ledState1);
    my_delay(1000);
//    previousMillis3 = millis();
  }
  
//  digitalWrite(LED_BUILTIN,HIGH);
//  digitalWrite(8,LOW);
//  digitalWrite(7,LOW);
//  delay(1000);
//  digitalWrite(LED_BUILTIN,LOW);
//  digitalWrite(8,HIGH);
//  digitalWrite(7,LOW);
//  delay(1000);
//  digitalWrite(LED_BUILTIN,LOW);
//  digitalWrite(8,LOW);
//  digitalWrite(7,HIGH);
//  delay(1000);
}
