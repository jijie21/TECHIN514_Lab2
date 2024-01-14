#include <Arduino.h>

const int analogPin = D9;
float voltage;

void setup() {
  Serial.begin(115200); 
}

void loop() {
  int adcValue = analogRead(analogPin);
  voltage = (adcValue / 4095.0) * 3.3;

  // Display the voltage reading on the serial monitor
  Serial.print("ADC Value: ");
  Serial.print(adcValue);
  Serial.print(", Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000);
}
