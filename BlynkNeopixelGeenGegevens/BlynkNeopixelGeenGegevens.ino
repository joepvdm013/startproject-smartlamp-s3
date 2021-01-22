//SmartLamp NeoPixel
//M.b.v. de Blynk app en de NeoPixel RGB Led Ring heb ik een lamp gemaakt die je met je telefoon kunt bedienen.
//ingeladen libraries
#include <Adafruit_NeoPixel.h>
#include <SPI.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>


#define PIN D1
#define NUMPIXELS 12 //aantal neopixels op de ring
#define BLYNK_PRINT Serial
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

//setup wordt eenmalig uitgevoerd
void setup()
{
Serial.begin(9600); //serial monitor poort wordt gestart
Blynk.begin("key", "ssid", "wachtwoord"); //Blynk wordt gestart. Blynk is een externe app voor je telefoon waarmee je een arduino (die beschikt over WiFi) kunt bedienen. Hij gebruikt hierbij de API key vanuit Blynk, en het SSID en Wachtwoord van je netwerk.
pixels.begin();
}
BLYNK_WRITE(V1)
{

int R = param[0].asInt(); //waarde van rood wordt omgezet naar een integer
int G = param[1].asInt(); //waarde van green wordt omgezet naar een integer
int B = param[2].asInt(); //waarde van blauw wordt omgezet naar een integer

//RGB waardes worden geprint naar de serial monitor
Serial.println(R);
Serial.println(G);
Serial.println(B);

// foor loop die het aantal pixels afgaat en de juiste kleuren weergeeft op de neopixel
for(int i=0;i<NUMPIXELS;i++){

pixels.setPixelColor(i, pixels.Color(R,G,B));

pixels.show();
}
}
//zorgt er voor dat blynk draait zodat je met de blynk app de kleuren van de app kunt veranderen
void loop()
{
Blynk.run();
}
