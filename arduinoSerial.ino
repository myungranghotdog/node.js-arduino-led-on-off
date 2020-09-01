void setup(){
  Serial.begin(115200);
  pinMode(12, OUTPUT);
}

void loop(){
  if(Serial.read() == '1') {digitalWrite(12, HIGH); delay(100);}
  if(Serial.read() == '2') {digitalWrite(12, LOW); delay(100);}
  
}
