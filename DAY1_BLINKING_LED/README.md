# LED Blink Project

This is my first Arduino project where I made an LED blink using `digitalWrite()` and `delay()`.

## Components Used
- Arduino Uno
- LED
- 220Ω Resistor
- Jumper Wires
- Breadboard

## How It Works
The LED is connected to pin 2. The code turns it ON for 1 second and OFF for 1 second repeatedly.

## Code
```cpp
void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}

