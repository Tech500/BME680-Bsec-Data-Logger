# BME680-Bsec-Data-Logger
BME680 Data Logger using BSec Library; with Async web server and Indoor Air Quality index.
Data is displayed on OLED and logged to file every 15 Minutes.  Data may be viewed from built-in file browser.  
Clicking on a url filename will allow display file.  FTP is available for managing the number of files
stored in "LittleFS." 

Before using "BME680-Bsec-Data-Logger" enter your network credentials and related information into "config.h"

"Thingspeak.com" graphing can be displayed by inputing "Thingspeak.com" Iframes into "index.h"

Wemos D1 R2 was used in devolping code.  FTP was tested using "FileZilla."
