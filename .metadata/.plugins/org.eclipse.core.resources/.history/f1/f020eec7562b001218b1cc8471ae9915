// Do not remove the include below
#include "yeelink.h"
#include "ylclient.h"

extern HardwareSerial Serial;
using namespace yeelink;

ylclient client;
String apikey="89501b438791e28f74c21035a88fffd2";


//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here
	Serial.begin(9600);
	//client.setAPIKey(apikey);
	client.connect();
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
	client.push(23);
}
