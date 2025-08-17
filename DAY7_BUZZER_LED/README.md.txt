# Button Controlled Buzzer using Arduino

## Project Overview
This project demonstrates how to control a buzzer using a push button with Arduino. When the button is pressed, the buzzer turns ON; when the button is released, the buzzer turns OFF. The code uses the internal pull-up resistor to simplify the circuit and make it beginner-friendly.

## Features
- Simple push button input controlling a buzzer output.  
- Uses Arduino's internal pull-up resistor (no external resistor needed).  
- Beginner-friendly project to learn digital input and output.  
- Includes a delay to clearly observe buzzer ON/OFF behavior.  

## Components Required
- 1 × Arduino UNO (or compatible board)  
- 1 × Buzzer  
- 1 × Push Button  
- Breadboard  
- Jumper wires  

## Circuit Connections
- Button -> Pin 2 (configured as INPUT_PULLUP)  
- Buzzer -> Pin 13 (configured as OUTPUT)  
- One side of button -> GND  
- Other side of button -> Pin 2  

**Note:** Since INPUT_PULLUP is used, the button logic is inverted:  
- Button not pressed → HIGH  
- Button pressed → LOW  

## Code Explanation
1. Define pin numbers for button (2) and buzzer (13).  
2. Configure button as INPUT_PULLUP and buzzer as OUTPUT.  
3. In loop():  
   - Read button state using `digitalRead(buttonpin)`.  
   - If button is pressed (LOW), turn buzzer ON.  
   - If button is not pressed (HIGH), turn buzzer OFF.  
4. `delay(1000)` keeps the buzzer ON or OFF for 1 second before checking again.  

## How to Run
1. Connect the circuit as described above.  
2. Upload the code to Arduino using Arduino IDE.  
3. Press and release the button to control the buzzer sound.  

## Future Improvements
- Remove the delay for real-time response.  
- Add an LED indicator along with the buzzer.  
- Use debounce logic to avoid false triggers.  
- Implement toggle mode (button press once → ON, next press → OFF).  
