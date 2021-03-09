//index2.h
const char HTML3[] PROGMEM = R"====(
<!DOCTYPE HTML>
<html>

<head>
    <title>BME680 Graphs</title>
</head>

<body>
  <br>
	<h2>BME680 Observations</h2>
	<br>
  <frameset rows="30%,70%" cols="33%,34%">
  //Two "Thingspeak.com" Iframes go here...
	
  </frameset>
  <br><br>
  //Two "Thingspeak.com" Iframes go here...
 
  <iframe width="450" height="260" style="border: 1px solid #cccccc;" src="https://thingspeak.com/channels/1320323/charts/4?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&title=BME680+Gas&type=line&xaxis=Date+and+Time&yaxis=Gas+Res++KOhms"></iframe>
  </frameset>
 	<br><br>
  <h2><a href="%LINK%/BME680" >Home</a></h2>
  <br>
</body>

</html>
)====";
