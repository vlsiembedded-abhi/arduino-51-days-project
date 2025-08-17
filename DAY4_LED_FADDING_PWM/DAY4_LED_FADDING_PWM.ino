int ledpin = 3;
int ledpina = 5;
int ledpinb = 9;
int ledpinc = 11;

void setup() {
  pinMode(ledpin,OUTPUT);

}

void loop() {
  for(int brightness = 0; brightness <= 255; brightness++){
    analogWrite(ledpin,brightness);
    delay(10);
  }

  for(int brightness = 0; brightness <= 255; brightness++){
    analogWrite(ledpina,brightness);
    delay(10);
  }

  for(int brightness = 0; brightness <= 255; brightness++){
    analogWrite(ledpinb,brightness);
    delay(10);
  }

  for(int brightness = 0; brightness <= 255; brightness++){
    analogWrite(ledpinc,brightness);
    delay(10);
  }
  
  for(int brightness = 255; brightness >= 0; brightness--){
    analogWrite(ledpin,brightness);
    delay(10);
  }

   
  for(int brightness = 255; brightness >= 0; brightness--){
    analogWrite(ledpina,brightness);
    delay(10);
  }

   
  for(int brightness = 255; brightness >= 0; brightness--){
    analogWrite(ledpinb,brightness);
    delay(10);
  }

   
  for(int brightness = 255; brightness >= 0; brightness--){
    analogWrite(ledpinc,brightness);
    delay(10);
  }
}
