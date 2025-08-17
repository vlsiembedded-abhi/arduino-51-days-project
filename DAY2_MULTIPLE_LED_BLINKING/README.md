# Multiple LED Blinking using Arduino

## Project Overview
This project demonstrates a simple LED sequencing effect using an Arduino board. Four LEDs are connected to different digital pins, and they light up one by one in sequence with a short delay. This is a beginner-friendly project to learn the basics of digital output control and pinMode()/digitalWrite() functions in Arduino.

## Features
- Turns ON each LED one after another.  
- Adds a 500 ms delay before switching to the next LED.  
- Simple code structure for beginners to understand loop execution in Arduino.  
- Can be extended to more LEDs or patterns (like chasing, blinking, or random lighting).  

## Components Required
- 1 × Arduino UNO (or compatible board)  
- 4 × LEDs  
- 4 × Resistors (220Ω recommended)  
- Jumper wires  
- Breadboard  

## Circuit Connections
LED A  -> Pin 2  
LED B  -> Pin 4  
LED C  -> Pin 8  
LED D  -> Pin 11  

Note: Connect each LED in series with a 220Ω resistor to prevent damage.

## Code Explanation
1. Define the pin numbers for each LED:
   int ledpin_a = 2;
   int ledpin_b = 4;
   int ledpin_c = 8;
   int ledpin_d = 11;

2. In the setup(), configure all pins as OUTPUT using pinMode().  

3. In the loop(), turn ON each LED for 500 ms, then turn it OFF before moving to the next one.  

## How to Run
1. Connect the circuit on a breadboard.  
2. Open Arduino IDE and upload the code to your board.  
3. Observe the LEDs turning ON and OFF in sequence.  

## Future Improvements
- Increase the number of LEDs for more complex patterns.  
- Add push buttons to control speed or direction of sequencing.  
- Implement PWM fading instead of simple ON/OFF.  
- Use arrays and loops to reduce repetitive code.  