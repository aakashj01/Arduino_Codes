#include <Servo.h>
int servopin=10;
int servopos;
Servo bob;
void setup() {
  // use no line ending in the serial monitor
Serial.begin(9600);
bob.attach(servopin);

}

void loop() {
  
  Serial.println("enter servo position value:");
  while(Serial.available()==0){
    }
  servopos=Serial.parseInt();
  bob.write(servopos);
  
}
