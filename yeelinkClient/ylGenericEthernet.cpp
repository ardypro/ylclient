/*
 * ylGenericEthernet.cpp
 *
 *  Created on: 2012-11-26
 *      Author: ardypro
 */

#include "ylGenericEthernet.h"
//#include "ylconst.h"

namespace yeelink
{

ylGenericEthernet::ylGenericEthernet()
{
	seconds = 30; //API规定两条记录发送的时间间隔不少于10s
	apiHeader = 0;
	jsonStr = 0;

}

ylGenericEthernet::~ylGenericEthernet()
{
	// TODO Auto-generated destructor stub
}

int ylGenericEthernet::getInterval()
{
	return seconds;
}

void ylGenericEthernet::setInterval(int Seconds)
{
	seconds = Seconds;
}

void ylGenericEthernet::setSerialIndex(int index)
{
	//do nothing in base class
}

void ylGenericEthernet::setMac(byte mac[])
{
	//do nothing in base class
}

void ylGenericEthernet::setSubMask(byte mask[])
{
	//do nothing in base class
}

void ylGenericEthernet::setIP(byte ip[])
{
	//do nothing in base class
}

void ylGenericEthernet::setAPIKey(char* key)
{
	apiKey = key;
}

char* ylGenericEthernet::getAPIKey()
{
	return apiKey;
}

void ylGenericEthernet::setActiveDevice(int deviceid)
{

}

int ylGenericEthernet::getActiveDevice()
{

}

void ylGenericEthernet::setActiveSensor(int sensorid)
{

}

int ylGenericEthernet::getActiveSensor()
{

}
} /* namespace yeelink */
