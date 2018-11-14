#define PAINIKE 5

void setup() {

 pinMode (PAINIKE, INPUT);
 Serial.begin (9600);

}

void loop() {


 int x = digitalRead (PAINIKE);
 if (x == LOW) {
    Serial.println ("Painike on painettuna");
    delay (250);
    
    
 }

}
