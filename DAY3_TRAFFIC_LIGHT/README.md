# Traffic Light Controller using Arduino

## Project Overview
This project simulates a simple Traffic Light Controller using Arduino. It controls three LEDs (Red, Yellow, Green) to mimic real traffic lights. If a yellow LED is not available, you can also use a Blue LED as a substitute. This project helps beginners understand timing, sequencing, and digital output in Arduino.

## Features
- Simulates real traffic light operation.  
- Uses delay() function to manage light timing.  
- Beginner-friendly code with clear structure.  
- Can be modified easily for more advanced versions.  

## Components Required
- 1 × Arduino UNO (or compatible board)  
- 1 × Red LED  
- 1 × Green LED  
- 1 × Yellow LED (or Blue if Yellow not available)  
- 3 × Resistors (220Ω recommended)  
- Breadboard  
- Jumper wires  

## Circuit Connections
Red LED    -> Pin 11  
Yellow LED -> Pin 5  (or Blue LED as substitute)  
Green LED  -> Pin 9  

Note: Connect each LED in series with a 220Ω resistor to prevent damage.

## Code Explanation
1. Define pin numbers for Red, Yellow, and Green LEDs:
   int red = 11;
   int yellow = 5;   // or blue LED if yellow not available
   int green = 9;

2. In setup(), configure all pins as OUTPUT using pinMode().  

3. In loop(), switch ON and OFF LEDs in a sequence similar to traffic lights:  
   - Red ON → Stop  
   - Yellow ON → Ready  
   - Green ON → Go  
   - Repeat sequence  

## How to Run
1. Build the circuit on a breadboard as per connections.  
2. Upload the Arduino code using Arduino IDE.  
3. Observe the LEDs blinking in a traffic light sequence.  

## Future Improvements
- Add a pedestrian crossing button.  
- Use an LCD to display countdown timer.  
- Control lights using real-time clock (RTC) module.  
- Extend project with multiple traffic signals.  