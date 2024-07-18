#include <HCSR04.h>

HCSR04 sesorDistance(2 , 3) //trig e echo, os pinos no sensor de distancia

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(sesorDistance.dist()/100); 
//dist() retorna a distancia em centimetros
delay(1000)
}
