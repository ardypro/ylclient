// Do not remove the include below
#include "yeelink.h"
#include "ylclient.h"

extern HardwareSerial Serial;
using namespace yeelink;

ylclient client;

const char* a="a";


//The setup function is called once at startup of the sketch
void setup()
{
	Serial.begin(9600);
	//初始化yeelink client
	//client.setAPIKey("apikey");	//设置API key，这里采用默认的key
	//client.setAPIVersion("v1.0");	//设置API版本，除非yeelink API升级，则采用默认的v1.0版本

	randomSeed(analogRead(0));
}

// The loop function is called in an endless loop
void loop()
{
	long v;
	v=random(256);
	//client.Post(v);
	delay(20*1000);
}