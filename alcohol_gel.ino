const int pingPin = 9; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 10; // Echo Pin of Ultrasonic Sensor
#include <Servo.h>
Servo servoMotor;

void setup() {
   servoMotor.attach(11);
   servoMotor.write(180);
}

void loop() {
   long duration, inches, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   cm = microsecondsToCentimeters(duration);
   delay(100);
   if (cm < 15.0) {
    servoMotor.write(0);
    delay(500);
   }
    servoMotor.write(180);
    delay(1000);
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
