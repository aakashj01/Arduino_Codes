
int led=9;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int brightness=analogRead(A0);
analogWrite(led,brightness);
Serial.println(brightness);
delay(100);
}
