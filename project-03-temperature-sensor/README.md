# Project 03 – Temperature Sensor (Chill-o-meter)

## Description
The Chill-o-meter is a simple temperature monitoring system using an Arduino.  
As the temperature increases, more LEDs turn on to visually indicate the change.

## Goal
The goal of this project was to learn how to:
- read analog sensor data
- use conditional logic
- control multiple outputs (LEDs)

## Components
- Arduino Uno
- Temperature sensor (TMP36)
- 3x LEDs
- Resistors
- Breadboard
- Jumper wires

## How It Works
The temperature sensor outputs an analog voltage depending on the temperature.  
The Arduino reads this value and converts it into a temperature reading.

Depending on the temperature:
- room temperature → no LEDs
- medium temperature → 1–2 LEDs
- high temperature → all LEDs ON

This creates a visual “thermometer” using LEDs.

## Demo
Watch the project in action:  
https://youtube.com/shorts/pQ8A2pTnrOk?feature=share

## Circuit
<p align="center">
  <img src="temperature_sensor-setup.jpeg" width="400">
</p>

## Code
The code for this project is available in this folder.

## What I Learned
- how to read analog values from a sensor
- how to map sensor data to real-world values (temperature)
- using `if` statements to control outputs
- basic hardware debugging

## Challenges
- understanding how analog values relate to real temperature  
- adjusting thresholds for LED activation  
- ensuring stable sensor readings
- inclusion of TMP36 offset due to the possibility of measuring negative temperatures
- necessary to ensure a small delay

## Key Insight
Small voltage changes from the sensor represent temperature differences, so proper conversion and threshold setting are essential for accurate behavior.

## Future Improvements
- display temperature on LCD
- add buzzer for high temperature warning
- improve accuracy with calibration
