#include <Servo.h>

Servo motor1 , motor2 ,motor3 , motor4 ,motor5 ,motor6;




void setup() {
  motor1.attach(22);
  motor2.attach(23);
  motor3.attach(24);
  motor4.attach(25);
  motor5.attach(26);
  motor6.attach(27);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);

}

void loop() {
 
    // for lower rotation hand
    int a = analogRead(A0);
    int Motor1 = map(a,0,1023,0,180);
    motor1.write(Motor1);

   // for lower moving hand
   int b = analogRead(A1);
   int Motor2 = map(b,0,1023,0,180);
   motor2.write(Motor2); 

   // for mid-low moving hand 
   int c = analogRead(A2);
   int Motor3 = map(c,0,1023,0,180);
   motor3.write(Motor3);  

   // for top-rotation hand 
   int d = analogRead(A3);
   int Motor4 = map(d,0,1023,0,180);
   motor4.write(Motor4);

   // for top moving hand 
   int e = analogRead(A4);
   int Motor5 = map(e,0,1023,0,180);
   motor5.write(Motor5); 

  // for top holding hand 
  int f = analogRead(A5);
   int Motor6 = map(f,0,1023,0,180);
   motor6.write(Motor6);  
  

}
