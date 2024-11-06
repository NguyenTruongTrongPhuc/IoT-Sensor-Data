
# IoT Sensor Data Collection and Transmission

This project collects data from temperature and humidity sensors (DHT11/DHT22) and sends the data to a server using an ESP8266/ESP32 microcontroller.

## Folder Structure
- `src/`: Contains source files for the main logic.
- `config/`: Configuration files such as Wi-Fi credentials and server settings.
- `utils/`: Utility files for error handling and additional functions.
- `docs/`: Documentation files for project guidance.

## Files
- `main.ino`: Entry point for the Arduino sketch.
- `wifi_config.h`: Wi-Fi configuration settings.
- `sensor_reading.cpp`: Functions to read data from sensors.
- `http_client.cpp`: Functions to send data to the server.
