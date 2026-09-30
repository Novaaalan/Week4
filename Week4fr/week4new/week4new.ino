const int buttonPin = 2;
const int RLEDPin = 3;
const int GLEDPin = 4;
const int BLEDPin = 5;

int buttonState = 0;
int ledcolor = 0;

void setup() {
  pinMode(RLEDPin, OUTPUT);
  pinMode(GLEDPin, OUTPUT);
  pinMode(BLEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}
void loop() {
  buttonState = digitalRead(buttonPin);

  if(buttonState == LOW) {
    ledcolor = ledcolor + 1;
    delay(100);
  }
  if(ledcolor == 0){
    digitalWrite(RLEDPin, HIGH);
    digitalWrite(GLEDPin, HIGH);
    digitalWrite(BLEDPin, HIGH);
  }
  else if(ledcolor == 1){
    digitalWrite(RLEDPin, LOW);
    digitalWrite(GLEDPin, HIGH);
    digitalWrite(BLEDPin, HIGH); 
  }
  else if(ledcolor == 2){
    digitalWrite(RLEDPin, HIGH);
    digitalWrite(GLEDPin, LOW);
    digitalWrite(BLEDPin, HIGH); 
  }
  else if(ledcolor == 3){
    digitalWrite(RLEDPin, HIGH);
    digitalWrite(GLEDPin, HIGH);
    digitalWrite(BLEDPin, LOW); 
  }
  else if(ledcolor == 4){
    digitalWrite(RLEDPin, LOW);
    digitalWrite(GLEDPin, LOW);
    digitalWrite(BLEDPin, HIGH); 
  }
  else if(ledcolor == 5){
    digitalWrite(RLEDPin, LOW);
    digitalWrite(GLEDPin, HIGH);
    digitalWrite(BLEDPin, LOW); 
  }
  else if(ledcolor == 6){
    digitalWrite(RLEDPin, HIGH);
    digitalWrite(GLEDPin, LOW);
    digitalWrite(BLEDPin, LOW); 
  }
  else if(ledcolor == 7){
    digitalWrite(RLEDPin, LOW);
    digitalWrite(GLEDPin, LOW);
    digitalWrite(BLEDPin, LOW); 
  }
   else if(ledcolor == 8){
    ledcolor =0;
   }

}
