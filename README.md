# BME680-BSEC-Data-Logger
"BME680 BSEC Data Logger.ino" usses "Bosch" BME60 BSEC Library; with Async web server and Indoor Air Quality index.
Data is displayed on OLED and logged to file every 15 Minutes.  Data may be viewed from built-in file browser.  
Clicking on a URL filename will allow display file.  FTP is available for managing the number of files
stored in "LittleFS." 

Before using "BME680-BSEC-Data-Logger" enter your network credentials and related information into "config.h"

"Thingspeak.com" graphing can be displayed by inputing "Thingspeak.com" Iframes into "index3.h"

Images of the "BME680 Bsec Data Logger" project:  
https://drive.google.com/drive/folders/1L7QDz4w8qhgxX3nBnLf-JB6nFU1T7aWC?usp=sharing

Wemos D1 R2 was used in developing code.  

FTP was tested using "FileZilla."

"Serial Monitor --Acetone Test.txt" is a test of BME680 with an Acetone, soaked Qtip placed close to the 
BME680.  Start of Acetone Qtip test: 21:08:40, Removal of Qtip 21:18:59,  Return to "Good" air quality 21:37:20.
