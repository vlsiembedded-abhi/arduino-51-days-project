int buttonpin = 2;
int buzzerpin = 13;

void setup() {
  pinMode(buttonpin,INPUT_PULLUP);
  pinMode(buzzerpin,OUTPUT);

}

void loop() {
  
  int buttonstate = digitalRead(buttonpin);
  if(buttonstate == LOW){
  digitalWrite(buzzerpin,HIGH);
  delay(1000);
  }
  else{
  digitalWrite(buzzerpin,LOW);
  delay(1000);
  }
}
