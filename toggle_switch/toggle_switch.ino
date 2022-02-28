int ledpin=13;
int switchpin=8;

int os=0;
int ledstate=0;
int dt=100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(switchpin,INPUT);
pinMode(ledpin,OUTPUT);

}

void loop() {
  if(digitalRead(switchpin)==HIGH && os==0){
    
     if(ledstate==0){
      digitalWrite(ledpin,HIGH);
      ledstate=1;
     }
     else{
      digitalWrite(ledpin,LOW);
      ledstate=0;
     }
     
  }
  
os=digitalRead(switchpin);
  delay(dt);
  Serial.print(ledstate);
}
