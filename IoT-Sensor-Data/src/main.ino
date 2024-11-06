#include "wifi_config.h"
#include <ESP8266WiFi.h>
#include "sensor_reading.cpp"
#include "http_client.cpp"

void setup() {
    Serial.begin(9600);
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("WiFi Connected!");
    setupSensor();
}

void loop() {
    float temperature = readTemperature();
    float humidity = readHumidity();
    
    if (!isnan(temperature) && !isnan(humidity)) {
        sendDataToServer(temperature, humidity);
    } else {
        Serial.println("Sensor error");
    }
    delay(2000); // Đợi 2 giây
}
