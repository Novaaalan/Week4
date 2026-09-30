const int rLEDPin = 9;
const int gLEDPin = 10;
const int bLEDPin = 11;
void setup() {
  pinMode(rLEDPin, OUTPUT);
  pinMode(gLEDPin, OUTPUT);
  pinMode(bLEDPin, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rLEDPin, HIGH);
  digitalWrite(gLEDPin, LOW);
  digitalWrite(bLEDPin, HIGH);
  delay(5000);   
  digitalWrite(rLEDPin, LOW);
  digitalWrite(gLEDPin, LOW);
  digitalWrite(bLEDPin, HIGH);
  delay(1000);   
  digitalWrite(rLEDPin, LOW);
  digitalWrite(gLEDPin, HIGH);
  digitalWrite(bLEDPin, HIGH);
  delay(8000);   

}
