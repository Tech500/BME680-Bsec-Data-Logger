/*

	"BME BSEC Data Logger.ino"
	config.h
	3/9/2021 * 6:51 EST
	
*/   

// Replace with your network details
const char* ssid = "yourSSID";
const char* password = "yourPassWOED";

//String linkAddress = "http://xxx.xxx.xxx.xxx:8060";  //WAN --publicIP and PORT for URL link; caution security risk!
String linkAddress = "http://10.0.0.110:8060";  //LAN --privateIP and PORT for URL link

// local port to listen for UDP packets
const int udpPort = 1337;
char incomingPacket[255];
char replyPacket[] = "Hi there! Got the message :-)";
const char * udpAddress1 = "us.pool.ntp.org";
const char * udpAddress2 = "time.nist.gov";

/*
     This is the ThingSpeak channel number for the MathwWorks weather station
     https://thingspeak.com/channels/YourChannelNumber.  It senses a number of things and puts them in the eight
     field of the channel:

     Field 1 - Temperature (Degrees F)
     Field 2 - Humidity (%RH)
     Field 3 - Barometric Pressure (in Hg)
     Field 4 - Gas Resistance KOhms
*/

//Graphing requires "FREE" "ThingSpeak.com" account..
//Enter "ThingSpeak.com" data here....
unsigned long myChannelNumber = 0123456;  //yourChannelNumber
const char * myWriteAPIKey = "yourWriteApiKey";

/*

	  Place "Thingspeak.com" Iframes into "index3.h;" one for each graph.
	
*/