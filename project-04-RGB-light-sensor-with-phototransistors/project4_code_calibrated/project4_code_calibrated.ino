const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

const int greenSensorPin = A1;
const int redSensorPin = A0;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;


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

  Serial.print("Raw Sensor Vlaues: \t red: ");
  Serial.print(redSensorValue);
  Serial.print("\t green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t blue: ");
  Serial.print(blueSensorValue);

  redSensorValue = constrain(redSensorValue, 6, 1003);
  blueSensorValue = constrain(blueSensorValue, 15, 1001);
  greenSensorValue = constrain(greenSensorValue, 16, 987);

  redValue = map(redSensorValue, 6, 1003, 0, 255);
  blueValue = map(blueSensorValue, 15, 1001, 0, 255);
  greenValue = map(greenSensorValue, 16, 987, 0, 255);

  Serial.print("Mapped Sensor Values\t red: ");
  Serial.print(redValue);
  Serial.print("\t green: ");
  Serial.print(greenValue);
  Serial.print("\t blue: ");
  Serial.println(blueValue);

  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}
