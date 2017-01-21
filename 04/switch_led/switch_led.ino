// Pins
int inputPin = 4;
int outputPin = 5;

void setup() {
  
  // Init Serial
  Serial.begin(115200);
  
  // Setup pins
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
}

void loop() {
  
  // Read pin
  int pinState = digitalRead(inputPin);
  
  // Control LED accordingly 
  digitalWrite(outputPin, pinState);
  delay(1);     
}



