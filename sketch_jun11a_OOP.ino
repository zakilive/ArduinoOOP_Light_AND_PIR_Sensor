#include "sensor.h"

int greenLightPin = 12;
int redLightPin = 11;
int sensorPin = 4;


mySensor obj(greenLightPin, redLightPin, sensorPin);


void setup() {
  // put your setup code here, to run once:
  

}

void loop() {
  // put your main code here, to run repeatedly:

  if(obj.sensor()){
    
    obj.greenLight();
    delay(1000);
    obj.redLight();
    delay(1000);
  }
  else{
    obj.AllLightOff();
  }

}
