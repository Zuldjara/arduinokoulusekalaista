#define ledGreen 12
#define button 5

#define BUTTONPRESSED LOW
#define LON LOW
#define LOFF HIGH

int ledGreenState = LOFF;
int buttonOldState;

void setup() {

pinMode (ledGreen, OUTPUT);
digitalWrite (ledGreen, ledGreenState);
pinMode (button, INPUT_PULLUP);
buttonOldState = digitalRead (button);
Serial.begin (9600);

}

void loop() {

int buttonNewState = digitalRead (button);
if (buttonNewState != buttonOldState){
  if (buttonNewState == BUTTONPRESSED){
    if (ledGreenState == LOFF) {
      ledGreenState = LON;
      }else{
        ledGreenState = LOFF;
      
     }
      digitalWrite (ledGreen, ledGreenState);
  }
     
     
     }
  }

 
