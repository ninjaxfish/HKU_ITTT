//import libary
#include <Servo.h>
    //name variable
  Servo myservo; 

// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int myServo =  9;      // the number of the servo motor
int angle = 0;
int rotationSpeed = 0;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  //Define servo pin
   myservo.attach(9);
   
  pinMode(A1, INPUT);
  pinMode(myServo, OUTPUT);
}

void loop() {
  // Read the input on analog pin 0:
  int sensorValue = analogRead(A1);
  Serial.println(angle);

  rotationSpeed = sensorValue/4;
  angle += rotationSpeed;
  myservo.write(angle);
}

