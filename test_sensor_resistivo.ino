int FSR_Pin = A0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int FSRReading = analogRead(FSR_Pin);
  
  Serial.println(FSRReading);
  delay(250);
}
