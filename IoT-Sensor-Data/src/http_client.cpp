#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>

void sendDataToServer(float temperature, float humidity) {
    if (WiFi.status() == WL_CONNECTED) {
        HTTPClient http;
        http.begin("http://yourserver.com/api"); // Thay bằng địa chỉ server
        http.addHeader("Content-Type", "application/json");
        
        String jsonData = "{\"temperature\": " + String(temperature) + ", \"humidity\": " + String(humidity) + "}";
        int httpResponseCode = http.POST(jsonData);
        
        if (httpResponseCode > 0) {
            Serial.println(http.getString());
        } else {
            Serial.println("Error in sending data");
        }
        http.end();
    }
}
