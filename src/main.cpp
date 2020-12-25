#include <Arduino.h>

const int greenLed = 5;
const int redLed = 6;
const int surfaceSensor = 2;

void setup() {
    pinMode(greenLed, OUTPUT);
    pinMode(redLed, OUTPUT);
}

void loop() {
    if(digitalRead(surfaceSensor)){
        digitalWrite(greenLed, HIGH);
        digitalWrite(redLed, LOW);
    } else {
        digitalWrite(redLed, HIGH);
        digitalWrite(greenLed, LOW);
    }
}