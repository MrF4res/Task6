// C++ code
//
/*
  describe your code here
*/

#include <Servo.h>
Servo S1, S2, S3, S4, S5;  // create servo object to control a servo
 
int A = 0;  // analog pin used to connect the potentiometer
int B = 1;
int C = 2;
int D = 3;
int E = 4;


int valA0;    // variable to read the value from the analog pin
int valA1;
int valA2;
int valA3;
int valA4;
 
void setup() {
  S1.attach(9);  // attaches the servo on pin 9 to the servo object
  S2.attach(10);
  S3.attach(11);
  S4.attach(12);
  S5.attach(13);
}
 
void loop() {
  valA0 = analogRead(A);            // reads the value of the potentiometer (value between 0 and 1023)
  valA0 = map(valA0, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  S1.write(valA0);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
  
  
  valA1 = analogRead(B);
  valA1 = map(valA1, 0, 1023, 0, 180);
  S2.write(valA1);
  delay(15);
  
  valA2 = analogRead(C);
  valA2 = map(valA2, 0, 1023, 0, 180);
  S3.write(valA2);
  delay(15);
  
  valA3 = analogRead(D);
  valA3 = map(valA3, 0, 1023, 0, 180);
  S4.write(valA3);
  delay(15);
  
  valA4 = analogRead(E);
  valA4 = map(valA4, 0, 1023, 0, 180);
  S5.write(valA4);
  delay(15);
  
}
