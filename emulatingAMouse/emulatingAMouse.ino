// define global variables for analog pins.

// X values will be read from pin 0 and Y from pin 1

#define PIN_ANALOG_X 0

#define PIN_ANALOG_Y 1

 

void setup() {

 // Start serial because we will observe values at serial monitor

 Serial.begin(115200);

}

 

void loop() {

 // Print x axis values

// Serial.print("x: ");
int x=map(analogRead(PIN_ANALOG_X),0,1024,0,1280);
 Serial.print(x);

 // Print y axis values
 Serial.print(" ");

 //Serial.print("y: ");
int y=map(analogRead(PIN_ANALOG_Y),0,1024,800,0);
 Serial.println(y);

 

 // Some delay to clearly observe your values on serial monitor.

 delay(100);

}
