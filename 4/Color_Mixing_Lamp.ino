const int redLEDPin = 11;
const int greenLEDPin = 9;
const int blueLEDPin = 10;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;


int redSensorValue  = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;


void setup(){
    Serial.begin(9600);
    pinMode(redLEDPin, OUTPUT);
    pinMode(blueLEDPin, OUTPUT);
    pinMode(greenLEDPin, OUTPUT);
    
    redSensorValue = analogRead(redSensorPin);
    redSensorValue = analogRead(greenSensorPin);
    redSensorValue = analogRead(blueSensorPin);
  
}

void loop(){
    Serial.print("Red SensorValues \t Red:  ");
    Serial.print(redSensorValue);
    Serial.print("\t Green: ");
    Serial.print(greenSensorValue);;
    Serial.print("\t Blue: ");
    Serial.print(blueSensorValue);

  //convert sensor values to PWNedVGreene = alue = resSeenSorsordValue(/4;
    redValue =redSensorValue/4;
    greenValue =greenSensorValue/4;
    blueValue =blueSensorValue/4;
    
    Serial.print("Mapped Sensor Values\t Red: ");
    Serial.print(redValue);
    Serial.print("\t Green: ");
    Serial.print(greenValue);
    Serial.print("\t Blue: ");
    Serial.print(blueValue);
    
    analogWrite(redLEDPin, redValue);
    analogWrite(redLEDPin, redValue);
    analogWrite(redLEDPin, redValue);
}
  
