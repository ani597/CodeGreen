#include "DHT.h"

#define DHTPIN 4 
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println(F("DHT11 Temperature Test Initialized"));
  dht.begin();
}

void loop() {
  // Wait 2 seconds between each reading
  delay(2000);
  float t = dht.readTemperature();

  if (isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor! Check your wiring."));
    return;
  }

  Serial.print(F("Current Room Temp: "));
  Serial.print(t);
  Serial.println(F("°C"));
}
