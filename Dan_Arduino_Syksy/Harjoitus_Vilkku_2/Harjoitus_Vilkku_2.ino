#define ledGreen 12
#define Button 5

void setup() {
 
pinMode (ledGreen, OUTPUT);
pinMode (Button, INPUT);
Serial.begin (9600);

}

#define LON LOW
#define LOFF HIGH

//#define D1 200
#define D2 200

void loop() {

int x = digitalRead (Button);
if (x == LOW) {
   Serial.println ("Button is pressed");
   //delay (200);
   }

digitalWrite (ledGreen, LON);
  delay (D2);

digitalWrite (ledGreen, LOFF);
  delay (D2);

}
  
  


