# ArduinoToLabviewESP8266
This code sends to floating point variables from Arduino to LabView via ESP8266 UDP Comunication
This is a simple sample to be used anyway you want. The comunication is made with a Baud Rate of 115200 bps, to use lower Baud Rates, you need to sintony the timeout on the SendData function.
Don't use 115200 bps if you are going to use SoftwareSerial library for Arduino, this lib don't assegure the integrity for the data in Baud Rates higher than 19200 bps.

TIP: If you are going to use PWM, don't use sotware Serial. Both libs uses the same Timer in Arduino UNO and Nano and your signal will be distorted.

