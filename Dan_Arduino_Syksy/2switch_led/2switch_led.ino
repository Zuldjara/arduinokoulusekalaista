#define led1 12
#define switch1 4
#define switch2 5
#define SWITCHPRESSED LOW
#define LAGG1 200
#define LAGG2 200
#define LOFF HIGH
#define LON LOW

int led1State = LOFF;
int switch1OldState;
int switch2OldState;

void setup() {

pinMode (led1, OUTPUT);
pinMode (switch1, INPUT_PULLUP); 
pinMode (switch2, INPUT_PULLUP);
//digitalWrite (led1, led1State);
switch1OldState = digitalRead (switch1);
switch2OldState = digitalRead (switch2);
//led1OldState = digitalRead (switch2);
Serial.begin (9600);


}

void loop() {

  int switch2NewState = digitalRead (switch2);
    if (switch2NewState != switch2OldState){
      if (switch2NewState == SWITCHPRESSED){
        Serial.println ("Moi, en enää jaksa :D");
        
      }
    }

 int switch1NewState = digitalRead (switch1);

  if (switch1NewState != switch1OldState){
    if (switch1NewState == SWITCHPRESSED){
      
     if (led1State == LOFF) {
      led1State = LON;
      }else{
        led1State = LOFF;
        
      }
      digitalWrite (led1, led1State);

      if (led1State == LON){
        
      }
    }
    
    switch2OldState = switch2NewState;
    
  }
}

