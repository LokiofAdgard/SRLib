#include "sensorRead.h"

void setup() {
  Serial.begin(9600);
  float result = getV();
  float result1 = getI();
  bool result2 = relayOn(true);
  int result3 = switchAct();
  Serial.println(result);
}

void loop() {}
