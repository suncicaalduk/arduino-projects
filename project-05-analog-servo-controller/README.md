# Project 05 - Analog Servo Controller (Mood Cue)

## Description

This project demonstrates how to read an analog input from a potentiometer and map it to control a servo motor in real time. The servo acts as a physical pointer that moves between 0° and 180°, creating an interactive "mood cue" or gauge.

It is a great introduction to:
- Analog sensors and voltage dividers
- Servo motors and PWM control
- The `Servo` library and object-oriented programming in Arduino
- Mapping values with the `map()` function

##  How It Works

- A 10 kΩ potentiometer is used as a voltage divider.
- The Arduino reads the analog value from the potentiometer (0–1023 on 10-bit or 0–4095 on 12-bit resolution).
- This value is mapped to a servo angle between 0° and 180°.
- The servo motor physically moves an arrow to the corresponding position.
- `delay(15)` ensures smooth and stable movement of the servo.

## Hardware Components

- Arduino Uno R4 (Minima or WiFi)
- 10 kΩ potentiometer
- Micro servo motor (SG90 or MG90S)
- Jumper wires
- Breadboard
- Optional: 100 nF decoupling capacitor for the servo

## Circuit Connection

**Potentiometer:**
- Left pin → **5V**
- Right pin → **GND**
- Middle pin → **A0**

**Servo Motor:**
- Red wire → **5V**
- Black/Brown wire → **GND**
- Orange/White wire (signal) → **Pin 9**

**Important:** Add a 100 nF capacitor directly across the servo power pins for stability.

## Features

- Real-time control of servo position using a potentiometer
- Smooth movement thanks to proper `delay()` timing
- Serial monitor output for debugging
- Clean object-oriented code using the `Servo` library


## Technologies Used

- Arduino C++ (with OOP – `Servo` class)
- Analog input (`analogRead()`)
- `map()` function for value scaling
- Servo motor PWM control
- `analogReadResolution()` for Uno R4

## What I Learned

- How a potentiometer works as a voltage divider and how the wiper changes the resistance ratio
- Difference between 10-bit and 12-bit ADC on Arduino Uno R4
- Proper use of the `Servo` library and the `.attach()` method
- Why servo motors need specific pulse widths (1000–2000 μs) and timing (`delay(15)`)
- Importance of decoupling capacitors with motors
- Basics of object-oriented programming in Arduino (creating and using objects)


## Future Improvements

- Add multiple "mood zones" with LEDs (e.g. green = happy, red = angry)
- Implement smooth easing / animation between positions
- Add a button to save favorite positions
- Connect to Processing or p5.js to visualize the mood on screen
- Create a physical enclosure / case with a printed mood scale

