// Soil Moisture Configuration for ESP32
const int moisturePin = 34; // Analog pin to GPIO 34

int dryValue = 4095;  // Value when sensor is in dry air
int wetValue = 1700;  // Value when sensor is in a cup of water

void setup() {
  Serial.begin(115200);
  pinMode(moisturePin, INPUT);
  Serial.println("Soil Moisture Sensor Initialized...");
}

void loop() {
  int rawValue = analogRead(moisturePin);
  
  int moisturePercent = map(rawValue, dryValue, wetValue, 0, 100);
  
  // Constrain values between 0 and 100
  moisturePercent = constrain(moisturePercent, 0, 100);

  Serial.print("Raw Value: ");
  Serial.print(rawValue);
  Serial.print(" | Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  delay(2000);
}
