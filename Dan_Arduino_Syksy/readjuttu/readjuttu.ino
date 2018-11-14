void setup() {
  
 Serial.begin(9600);

}

void loop() {
  
  int data = Serial.read();

  if(data != -1) {

    Serial.println(data);
  }

}
