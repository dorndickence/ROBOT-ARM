#include<Servo.h>

//Add all sevors used 
Servo myServo;
Servo elbow;
Servo wrist;
Servo Grippers;

int pot1=A0;
int pot2=A1;
int pot3=A2;
int pot4=A3;
 int pos1, pos2, pos3, pos4;
 
void setup() {
myServo.attach(9);
elbow.attach(10);
wrist.attach(11);
Grippers.attach(12);



 pinMode(pot1, INPUT);
 pinMode(pot2, INPUT);

pinMode(pot3, INPUT);
 pinMode(pot4, INPUT);

 Serial.begin(9600);
}


void loop() {

pos1 = analogRead(pot1);//analog  value  of 0-1023
pos2 = analogRead(pot2);
pos3 = analogRead(pot3);
pos4 = analogRead(pot4);

Serial.print("value for potentiometer 1");//show value for potentiometer 
Serial.println(pos1);
Serial.print("value for potentiometer2");
Serial.println(pos2);
Serial.print("value for potentiometer3");
Serial.println(pos3);
Serial.print("value for potentiometer4");
Serial.println(pos4);


pos1= map(pos1,0,1023,0,180);
pos2= map(pos2,0,1023,0,180);
pos3= map(pos3,0,1023,0,180);
pos4= map(pos4,0,1023,0,180);

myServo.write(pos1);
elbow.write(pos2);
wrist.write(pos3);
Grippers.write(pos4);
  
}
