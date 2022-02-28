#include<Stepper.h>
int STEP=2038;
int ledpin=8;
int buzzpin=12;
int switchpinup=11;
int switchpindown=10;
int rpm=0;
int B1=1;
int B2=1;

Stepper stepper(STEP,0,2,1,3);

void setup() {
  Serial.begin(9600);
  digitalWrite(switchpinup,HIGH);
  digitalWrite(switchpindown,HIGH);
  pinMode(ledpin,OUTPUT);
  pinMode(buzzpin,OUTPUT);
  
}

void loop() {
  B1=digitalRead(switchpinup);
  B2=digitalRead(switchpindown);
  stepper.setSpeed(rpm);
  Serial.print("speed is ");
  Serial.print(rpm);
  Serial.print("up ");
  Serial.print(B1);
  Serial.print("down ");
  Serial.println(B2);

  if(B1==0){
    rpm=rpm+1;
    delay(100);
  }
  if(B2==0){
    rpm=rpm-1;
    delay(100);
  }
  if(rpm>5){
    rpm=5;
  }
  if(rpm<0){
    rpm=0;
  }
  
  }

  
