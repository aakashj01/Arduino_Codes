int ledpin=13;
int switchpin=8;


void setup() {
  // put your setup code here, to run once:
pinMode(switchpin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
Serial.print(digitalRead(switchpin));  // put your main code here, to run repeatedly:
if(digitalRead(switchpin)==HIGH){
  digitalWrite(ledpin,HIGH);
}
else{
 digitalWrite(ledpin,LOW);
}
}
