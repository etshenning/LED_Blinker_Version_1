



#define grueneLED 3 

void setup() {
  
  pinMode(grueneLED, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  digitalWrite(grueneLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(4000);                       // wait for a second
  digitalWrite(grueneLED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
