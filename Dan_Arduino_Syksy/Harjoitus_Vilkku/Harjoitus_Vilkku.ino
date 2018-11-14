#define ledRed 5

#define ON LOW
#define OFF HIGH

void setup() {
  
pinMode (ledRed, OUTPUT);
Serial.begin (9600);

}

#define V1 1000

void loop() {
  
Serial.println ("Light ON");
digitalWrite (ledRed, ON);
delay (V1);

Serial.println ("Light OFF");
digitalWrite (ledRed, OFF);
delay (V1);

  

}
