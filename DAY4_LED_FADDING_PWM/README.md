# LED Fading using PWM on Arduino

## Project Overview
This project demonstrates how to fade multiple LEDs in and out using Arduino's **PWM (Pulse Width Modulation)** capability. By gradually increasing and decreasing the brightness values from 0 to 255, the LEDs smoothly fade ON and OFF. This is a beginner-friendly project to understand the concept of **PWM control with analogWrite()** in Arduino.

## Features
- Smooth fading effect on multiple LEDs.  
- Uses PWM pins of Arduino (3, 5, 9, 11).  
- Simple code structure using for-loops.  
- Helps in understanding analogWrite() and duty cycle.  

## Components Required
- 1 × Arduino UNO (or compatible board)  
- 4 × LEDs  
- 4 × Resistors (220Ω recommended)  
- Breadboard  
- Jumper wires  

## Circuit Connections
LED 1 -> Pin 3 (PWM)  
LED 2 -> Pin 5 (PWM)  
LED 3 -> Pin 9 (PWM)  
LED 4 -> Pin 11 (PWM)  

**Note:** Use a 220Ω resistor in series with each LED to prevent damage.

## Code Explanation
1. Four LED pins are defined as output (3, 5, 9, 11).  
2. The program uses two for-loops for each LED:  
   - Increasing brightness from 0 → 255 (fade in).  
   - Decreasing brightness from 255 → 0 (fade out).  
3. `analogWrite(pin, brightness)` generates PWM signals that control the LED brightness.  
4. A small delay (10 ms) ensures smooth transitions.  

## How to Run
1. Connect the LEDs to the specified pins with resistors.  
2. Upload the code using Arduino IDE.  
3. Observe the LEDs smoothly fading in and out one by one.  

## Future Improvements
- Fade multiple LEDs simultaneously instead of sequentially.  
- Add buttons or potentiometer to control fade speed.  
- Use RGB LED for multicolor fading.  
- Create wave-like fading patterns.  