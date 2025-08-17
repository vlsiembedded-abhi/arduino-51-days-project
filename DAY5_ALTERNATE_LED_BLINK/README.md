# Alternate LED Blinking using Arduino

## Project Overview
This project demonstrates an alternate LED blinking effect using Arduino. Four LEDs are connected to digital pins and controlled in pairs. At any given time, two LEDs are ON while the other two are OFF, and then they switch alternately. This project is useful for learning basic digital output control and timing in Arduino.

## Features
- Four LEDs blink alternately in pairs.  
- Uses simple digitalWrite() functions with delay().  
- Beginner-friendly project to understand digital I/O.  
- Can be extended to more complex LED patterns.  

## Components Required
- 1 × Arduino UNO (or compatible board)  
- 4 × LEDs  
- 4 × Resistors (220Ω recommended)  
- Breadboard  
- Jumper wires  

## Circuit Connections
LED A -> Pin 3  
LED B -> Pin 5  
LED C -> Pin 9  
LED D -> Pin 11  

**Note:** Connect each LED in series with a 220Ω resistor to prevent damage.

## Code Explanation
1. Define pin numbers for four LEDs (3, 5, 9, 11).  
2. In setup(), configure all pins as OUTPUT.  
3. In loop():  
   - First state: LED A & LED C ON, LED B & LED D OFF.  
   - After 500 ms: LED A & LED C OFF, LED B & LED D ON.  
   - This creates an alternating blinking pattern.  

## How to Run
1. Build the circuit as per the connections.  
2. Upload the code using Arduino IDE.  
3. Observe the LEDs blinking alternately in pairs.  

## Future Improvements
- Add more LEDs for advanced patterns.  
- Use arrays and loops to reduce repetitive code.  
- Control speed of blinking with a potentiometer.  
- Implement alternate blinking with PWM for fading effects.  
