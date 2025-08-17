# LED Chase Effect using Arduino

## Project Overview
This project creates an LED Chase (also known as Knight Rider) effect using Arduino. Multiple LEDs are connected in sequence, and they turn ON and OFF one after another in a chasing pattern, first from left to right and then back from right to left. This project demonstrates the use of arrays and loops in Arduino for cleaner and more efficient code.

## Features
- Sequential LED chasing effect.  
- LEDs light up from left to right, then right to left.  
- Uses arrays and for-loops to simplify code.  
- Beginner-friendly introduction to loops and arrays in Arduino.  

## Components Required
- 1 × Arduino UNO (or compatible board)  
- 4 × LEDs  
- 4 × Resistors (220Ω recommended)  
- Breadboard  
- Jumper wires  

## Circuit Connections
LED 1 -> Pin 3  
LED 2 -> Pin 5  
LED 3 -> Pin 9  
LED 4 -> Pin 11  

**Note:** Each LED should be connected with a 220Ω resistor in series.

## Code Explanation
1. All LED pins are stored in an array:
   int leds[] = {3, 5, 9, 11};

2. In setup(), a for-loop configures all pins as OUTPUT.  

3. In loop():  
   - First for-loop lights up LEDs from left to right.  
   - Second for-loop lights them up from right to left.  
   - Creates a chasing effect similar to Knight Rider lights.  

4. delay(200) controls the speed of the chase.  

## How to Run
1. Build the circuit according to the pin connections.  
2. Upload the code using Arduino IDE.  
3. Observe the LEDs chasing back and forth in sequence.  

## Future Improvements
- Add more LEDs for a longer chase effect.  
- Use PWM for fading instead of simple ON/OFF.  
- Control speed using a potentiometer or button.  
- Create multiple chasing patterns with functions.  

