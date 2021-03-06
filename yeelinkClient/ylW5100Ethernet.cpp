/*
 * ylW5100Ethernet.cpp
 *
 *  Created on: 2012-12-4
 *      Author: ardypro
 */

#include "ylW5100Ethernet.h"

namespace yeelink
{

ylW5100Ethernet::ylW5100Ethernet()
{
	// TODO Auto-generated constructor stub

}

ylW5100Ethernet::~ylW5100Ethernet()
{
	// TODO Auto-generated destructor stub
}

bool ylW5100Ethernet::Post(float value, int decimal)
{
	bool r;
	if (connect())
	{

		r = true;
	}
	else
		r = false;
	return r;
}

bool ylW5100Ethernet::Post(long value)
{
	float f;
	f = value * 1.0;
	sendHEADER();

	return Post(f);
}

bool ylW5100Ethernet::connect()
{
	return Ethernet.begin(MAC);
}

void ylW5100Ethernet::setMac(byte mac[])
{
	MAC = mac;
}

void ylW5100Ethernet::setSubMask(byte mask[])
{
	subMask = mask;
}

void ylW5100Ethernet::setIP(byte ip[])
{
	IP = ip;
}

void ylW5100Ethernet::sendHEADER()
{
	net.print("POST /");
	net.print(APIVERSION);
	net.print("/device/");
	net.print(getActiveDevice());
	net.print("/sensor/");
	net.print(getActiveSensor());
	net.print("/datapoints");
	net.println(" HTTP/1.1");
	net.print("Host: ");
	net.println(APISERVER);
	net.print("Accept: *");
	net.print("/");
	net.println("*");
	net.print("U-ApiKey: ");
	net.println(getAPIKey());
	net.print("Content-Length: ");



}

int ylW5100Ethernet::getLength(float value, int decimal)
{
	char buf[MAXFLOATLENGTH]=""; //
	dtostrf(value,1,decimal,buf);

	int i=0;
	while (buf[i])
		i++;

	return i++;
}

int ylW5100Ethernet::getLength(long value)
{
	   int digits = 1;
	    if (value<0)
	    {
	        digits++;
	        value=-value;
	    }
	    int dividend = value /10;
	    while (dividend > 0)
	    {
	        dividend = dividend /10;
	        digits++;
	    }
	    return digits;
}

} /* namespace yeelink */
