#include "DHT.h"
DHT dht15(15,DHT11);
void setup()
{
Serial.begin(9600);
}
void loop()
{
Serial.println("Temperatura en el sensor");
Serial.println((dht15.readTemperature( )));
Serial.println("Humedad en el sensor");
Serial.println((dht15.readHumidity()));
delay(5000);
}
