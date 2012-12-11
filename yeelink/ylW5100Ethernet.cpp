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

bool ylW5100Ethernet::Post(float value)
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
	net.print((char*) APIVERSION);
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

} /* namespace yeelink */
