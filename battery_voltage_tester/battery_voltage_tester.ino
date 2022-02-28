/*
Display5vOrless sketch
prints the voltage on analog pin to the serial port
Warning - do not connect more than 5 volts directly to an Arduino pin.
*/
const int referenceVolts = 5; const int batteryPin = 0;
void setup() {
Serial.begin(9600); }
void loop() {
// the default reference on a 5-volt board // battery is connected to analog pin 0
int val = analogRead(batteryPin); // read the value from the sensor 
Serial.print(val);
Serial.print(", ");
//float volts = (val / 1023)*5; 
// calculate the ratio 
Serial.print(val*0.0048);
Serial.println("V");
// print the value in volts
delay(100);
}
