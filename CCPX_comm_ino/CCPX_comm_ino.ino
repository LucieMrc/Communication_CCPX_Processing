#include <Adafruit_CircuitPlayground.h>

int threshold;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {  
  int valeur = 0;
  threshold = 900;

  //capteur 6 = A1
  if (CircuitPlayground.readCap(6) > threshold) {
    valeur = 1;
    delay(10);
  }

  //capteur 9 = A2
  if (CircuitPlayground.readCap(9) > threshold) {
    valeur = 2;
    delay(10);
  }

  //capteur 10 = A3
  if (CircuitPlayground.readCap(10) > threshold) {
    valeur = 3;
    delay(10);
  }

  //capteur 3 = A4
  if (CircuitPlayground.readCap(3) > threshold) {
    valeur = 4;
    delay(10);
  }

  //capteur 2 = A5
  if (CircuitPlayground.readCap(2) > threshold) {
    valeur = 5;
    delay(10);
  }

  //capteur 0 = A6
  if (CircuitPlayground.readCap(0) > threshold) {
    valeur = 6;
    delay(10);
  }

  //capteur 1 = A7
  if (CircuitPlayground.readCap(1) > threshold) {
    valeur = 7;
    delay(10);
  }

  Serial.write(valeur);

}
