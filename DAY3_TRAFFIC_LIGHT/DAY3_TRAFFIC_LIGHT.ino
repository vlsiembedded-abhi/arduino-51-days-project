int red = 11;
int green = 9;
int blue = 5;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

}

void loop() {
  digitalWrite(green,HIGH);
  delay(5000);
  digitalWrite(green,LOW);

  digitalWrite(blue,HIGH);
  delay(1500);
  digitalWrite(blue,LOW);

  digitalWrite(red,HIGH);
  delay(5000);
  digitalWrite(red,LOW);

  digitalWrite(blue,HIGH);
  delay(1500);
  digitalWrite(blue,LOW);


}
