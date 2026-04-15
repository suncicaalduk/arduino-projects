## Description
This project uses three phototransistors covered with gels that only transmit light of a specific wavelength (red, green, and blue) to detect the intensity of light in their respective wavelengths. The Arduino reads the light levels and controls an RGB LED to mirror the detected colors in real-time.

## Goal
It demonstrates a practical understanding of:
- Phototransistors and photoelectric effect
- Common-collector transistor configuration
- Analog-to-digital conversion (ADC)
- PWM (Pulse Width Modulation) for LED brightness control
- RGB color mixing

## Components
- Arduino Uno
- RGB LED (common cathode)
- 3× Phototransistors
- 3× Current-limiting resistors (for RGB LED, 220Ω)
- 3× Load resistors (for phototransistors, 10kΩ)
- 3x Gels (red, green, blue)
- Jumper wires and breadboard

## How It Works
- Three phototransistors with color filters detect red, green, and blue light components.
- Each phototransistor is connected in common-collector mode.
- The analog pins (A0, A1, A2) read the voltage drop across the emitter resistor.
- The raw values (0–1023) are mapped to 0–255 range and sent to PWM pins.
- The RGB LED reproduces the detected color by adjusting the brightness of its red, green, and blue channels.

Important note: In this configuration, higher sensor values = brighter light detected. 

## Circuit 
- Phototransistor Collector connected to 5V
- Phototransistor Emitter (Analog pin) trough 10kΩ resistor connected to GND
RGB LED: Red pin → Arduino pin 10 (PWM)
Green pin → Arduino pin 9 (PWM) 
Blue pin → Arduino pin 11 (PWM) (through resistors)
Cathode → GND
<p align="center">
  <img src="RGB_light_sensor-setupp.jpeg" height="300">
  <img src="RGB_light_sensor-scheme.jpeg" height="300">
</p>.

## Demo
Watch the project in action:
https://youtube.com/shorts/m8uG3f1YL34?si=95o5YV90eodV7VDb

## What I learned
- Functioning of the phototransistor
- Real-time color detection
- Serial monitor output showing raw and mapped sensor values
- Educational project for learning analog sensors and PWM
- Functioning of the common chatode RGB LED

## Challenges
The most challenging part was the functioning of the phototransistor itself. It took me more time to understand how exactly it generates a current proportional to quantity of light absorbed.

## Future Improvements / Experiments
- Automatic calibration (min/max values)
- Smooth color transitions
- Complementary color mode (opposite colors)
- Adding a button or potentiometer for mode switching

## Technologies Used
- Arduino C++
- Analog sensors (phototransistors)
- PWM control
- Serial communication

## Code
The code for this project is available in this folder.

