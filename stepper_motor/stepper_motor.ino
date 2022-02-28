#include <Stepper.h>
int STEPS=2038;

Stepper stepper(STEPS,2,4,3,5);


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
stepper.setSpeed(5);
stepper.step(2038);
delay(1000);
stepper.setSpeed(5);
stepper.step(-2038);
delay(1000);

}
