#define led 2

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode (led, OUTPUT);
  
}

#define viive1 1000


void loop() {

  Serial.println("ON");
  digitalWrite(led, HIGH);
  delay(viive1);
  Serial.println("OFF");
  digitalWrite(led, LOW);
  delay(viive1);

}
