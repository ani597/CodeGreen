const int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
    Serial.begin(115200);
  delay(1000); 
  Serial.println("System Initialized...");
}

void loop() {
digitalWrite(ledPin, HIGH);
  Serial.println("LED status: ON");
  delay(1000);
digitalWrite(ledPin, LOW);
  Serial.println("LED status: OFF");
  delay(1000);
}
//Status: Working
