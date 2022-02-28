String names="aakash,aashika";
int commaposition;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(names);
do{
  commaposition=names.indexOf(',');
  Serial.println(commaposition);
  if(commaposition != -1){
    Serial.println(names.substring(0,commaposition));
    names=names.substring(commaposition+1,names.length());
  }
  else{
    if(names.length() >0){
      Serial.println(names);
    }
  }
  delay(1000);
  }
while(commaposition>=0);
delay(5000);

}
