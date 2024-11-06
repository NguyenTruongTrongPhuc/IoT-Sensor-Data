#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

void setupSensor() {
    dht.begin();
}

float readTemperature() {
    return dht.readTemperature();
}

float readHumidity() {
    return dht.readHumidity();
}
