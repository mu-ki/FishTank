#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "aql0l05fAftYZXMFV5SGnGsshyFqxe2R";

char ssid[] = "muki";
char pass[] = "11112222";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
