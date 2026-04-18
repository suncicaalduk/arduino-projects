#include <Servo.h>

enum State {
  READING,
  SERVO_OUTPUT
};

State currentState = READING;

Servo myServo;

int const potPin = A0;
int potVal = 0;
float currentAngle = 0; 
float targetAngle = 0;
float smoothing = 0.1;

int minAngle = 10;
int maxAngle = 80;

void setup() {
  analogReadResolution(12);
  myServo.attach(9);
  Serial.begin(9600);
}

void loop() {

  switch(currentState) {

    // Read sensor input and compute target angle
    case READING:
      potVal = analogRead(potPin);
      targetAngle = map(potVal, 0, 4095, minAngle, maxAngle);
      currentState = SERVO_OUTPUT;
      break;
  
    // Smoothly move servo towards target position
    case SERVO_OUTPUT:
      currentAngle = currentAngle + (targetAngle - currentAngle) * smoothing;
      myServo.write((int)currentAngle);

      Serial.print("potVal: ");
      Serial.print(potVal);
      Serial.print(" , angle: ");
      Serial.println(currentAngle);

      delay(15);
      currentState = READING;
      break;
   }

}