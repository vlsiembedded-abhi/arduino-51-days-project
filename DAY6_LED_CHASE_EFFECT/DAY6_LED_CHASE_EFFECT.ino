int leds[] = {3, 5, 9, 11};
int numLeds = 4;

void setup() {
  for(int i=0; i<numLeds; i++){
    pinMode(leds[i],OUTPUT);
  }

}

void loop() {
  for(int i = 0; i < numLeds; i++){
    digitalWrite(leds[i],HIGH);
    delay(200);
    digitalWrite(leds[i],LOW);
  }

  for(int i = numLeds - 1; i >= 0; i--){
    digitalWrite(leds[i],HIGH);
    delay(200);
    digitalWrite(leds[i],LOW);
  }

}
