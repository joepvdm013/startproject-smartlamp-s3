## Smartlamp
![](lamp.png)
## Introduction
The smartlamp is a project I worked on during the first weeks of the 3d semester on Fontys. This project was meant for us students to get familiar with Arduinos. I challenged myself to make a smartlamp that I could interact with my phone.

## Components
The components and parts I used for this project are the following:
* NodeMCU Lolin V3 Module ESP8266 ESP-12E <br>
The ESP8266 module is an Arduino bord that has WiFi build into it. So it lets us control it using 3d party software like the Blynk app to control the lights. <br>
[Amazon Link](https://www.amazon.nl/AZDelivery-NodeMCU-Lolin-V3-Development/dp/B06Y1ZPNMS/ref=sxts_sxwds-bia-wc-rsf-lq2a1_0?__mk_nl_NL=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=U3KB89O0UE9O&cv_ct_cx=nodemcu+esp8266&dchild=1&keywords=nodemcu+esp8266&pd_rd_i=B06Y1ZPNMS&pd_rd_r=27419844-79e8-4098-8e28-ef9bfc275d7b&pd_rd_w=IPHGE&pd_rd_wg=VWMV5&pf_rd_p=baafa48b-abec-4e6a-bfde-515b6ca1bdb9&pf_rd_r=GTDPGVWS1HNEZ619RM4P&psc=1&qid=1611345493&sprefix=nodemcu+esp%2Caps%2C160&sr=1-1-569cd1f4-72a6-4f1d-b3c5-cf7f1ae39fbb) <br>

* Adafruit NeoPixel Ring (12leds) <br>
The Adafruit NeoPixel Ring is a RGB led ring which you can use to show off some amazing RGB lights. We use it for our lamp in this case. <br>
[Adafruit Link](https://www.adafruit.com/product/1643)

* Blynk app <br>
The blynk app is an application for your phone which enables you to interact with the ESP8266. In our case, to change to color. <br>
[Link to Blynk.io](https://blynk.io/)

## Used libraries
The following libraries were used to make this project.
* Adafruit_NeoPixel
* SPI
* BlynkSimpleESP2866
* ESP8266WiFi

### How to install a library?
1. Open up the Arduino IDE software
2. Go to Sketch -> Include Library -> Manage libraries
3. The library manager will open. Search for the right library and click on install. Some of the libraries mentioned above might already be installed.
![](libraryAdd.png)

## How to Use
1. Grab some male to female wires <br>
2. Connect pin D1 to Data Input on the Neopixel <br>
3. Connect V3 to 5v DC Power on the Neopixel <br>
4. Connect g to ground on the Neopixel <br>
5. Grab a soldering iron and solder the pins into the holes.
6. Download the [Arduino IDE](https://www.arduino.cc/en/software) software.
7. Connect your ESP8266 to your computer.
8. Download the BlynkNeopixelGeenGegevens code from this github repository.
9. Download the blynk app.
10. Edit your key and network credentials to your own.
11. Make sure you select the right board(NodeMCU 1.0 ESP12-E module) and a port in the tools menu.
12. Press upload and you are all done. Open the blynk app to change the colors.


## To be realized
I also wanted the smartlamp to work with voice recognition but that was a step to far and I couldn't get it to work. I made some efforts but I couldn't get it working in time.

## Demo
A demo of the lamp:
[YouTube Video Link](https://youtu.be/Pgk00DX3wDk)

## License
