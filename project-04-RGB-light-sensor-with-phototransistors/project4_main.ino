const int deadband = 3;

const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

const int greenSensorPin = A1;
const int redSensorPin = A0;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int prevRedValue = 0;
int prevGreenValue = 0;
int prevBlueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

int redMin = 6,   redMax = 1003;
int greenMin = 16, greenMax = 987;
int blueMin = 15,  blueMax = 1001;


void setup() {
Serial.begin(9600);

pinMode(greenLEDPin, OUTPUT);
pinMode(blueLEDPin, OUTPUT);
pinMode(redLEDPin, OUTPUT);
}

void loop() {
  // reading the value of each light sensor
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);

  Serial.print("Raw Sensor Values: \t red: ");
  Serial.print(redSensorValue);
  Serial.print("\t green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t blue: ");
  Serial.print(blueSensorValue);

  redSensorValue = constrain(redSensorValue, redMin, redMax);
  greenSensorValue = constrain(greenSensorValue, greenMin, greenMax);
  blueSensorValue = constrain(blueSensorValue, blueMin, blueMax);

  redValue = map(redSensorValue, redMin, redMax, 0, 255);
  greenValue = map(greenSensorValue, greenMin, greenMax, 0, 255);
  blueValue = map(blueSensorValue, blueMin, blueMax, 0, 255);

  Serial.print("Mapped Sensor Values\t red: ");
  Serial.print(redValue);
  Serial.print("\t green: ");
  Serial.print(greenValue);
  Serial.print("\t blue: ");
  Serial.println(blueValue);

  if (abs(redValue - prevRedValue) > deadband) {
  prevRedValue = redValue;
    }
  analogWrite(redLEDPin, prevRedValue);

  if (abs(greenValue - prevGreenValue) > deadband) {
  prevGreenValue = greenValue;
    }
  analogWrite(greenLEDPin, prevGreenValue);

  if (abs(blueValue - prevBlueValue) > deadband) {
  prevBlueValue = blueValue;
    }
  analogWrite(blueLEDPin, prevBlueValue);
}
