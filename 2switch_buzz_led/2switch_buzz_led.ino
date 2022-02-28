int ledbrightness=0;
int ledpin=9;
int buzzpin=12;
int switchl=11;
int switchr=10;
int d=51;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(buzzpin,OUTPUT);
pinMode(switchl,INPUT);
pinMode(switchr,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzpin,LOW);
  analogWrite(ledpin,ledbrightness);
if(digitalRead(switchl)==HIGH){
  ledbrightness=ledbrightness-d;
}
if(digitalRead(switchr)==HIGH){
  ledbrightness=ledbrightness+d;
}
if(ledbrightness<0){
  digitalWrite(buzzpin,HIGH);
  ledbrightness=0;
}
if(ledbrightness>255){
  digitalWrite(buzzpin,HIGH);
  ledbrightness=255;
}
Serial.println(ledbrightness);
delay(200);
}
