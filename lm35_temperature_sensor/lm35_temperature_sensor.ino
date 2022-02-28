
int sensorpin=A0;
float value;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(sensorpin);
Serial.print(value);
Serial.print(">");
float millivolts=(value/1024.0)*5000;
float celsius=millivolts/10; //sensor op is 10 mV per deg celsius
Serial.println(celsius);
delay(1000);
}
