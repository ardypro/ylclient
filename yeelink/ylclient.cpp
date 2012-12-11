/*
 * ylclient.cpp
 *
 *  Created on: 2012-11-9
 *      Author: ardypro
 *
 *      2012-11-11	添加发布整数/浮点数/布尔值/字符串功能
 */

#include "ylclient.h"

#ifdef W5100BOARD
#include "ylW5100Ethernet.h"
#else
#ifdef ENC28J60BOARD
#include "ylW5100Ethernet.h"
#else
#include "ylSerialHTTP.h"
#endif
#endif

namespace yeelink
{

ylclient::ylclient()
{
	//决定ylGenericEthernet的子类类型
#ifdef W5100BOARD
	net = new ylW5100Ethernet();
#else
#ifdef ENC28J60BOARD
	net = new ylW5100Ethernet();
#else
	net = new ylSerialHTTP();
#endif
#endif

	this->_apikey = (char*) DEFAULTAPIKEY;


}

ylclient::~ylclient()
{
	delete net;
	net = NULL;
}

void ylclient::setAPIKey(String APIKey)
{
	net->setAPIKey(&APIKey[0]);
}

void ylclient::setAPIKey(char* APIKey)
{
	net->setAPIKey(APIKey);
}

bool ylclient::setActiveDevice(int deviceid)
{
	net->setActiveDevice(deviceid);
	return true;
}

bool ylclient::setActiveSensor(int sensorid)
{
	net->setActiveSensor(sensorid);
	return true;
}

bool ylclient::Post(long value)
{
	float v;
	v = (double) value;
	return this->Post(v);
}

bool ylclient::Post(char* value)
{
	return 0;
}

bool ylclient::Post(float value)
{
	return net->Post(value);
}

bool ylclient::Post(bool value)
{

	return 0;
}

void ylclient::setMACAddress(byte mac[])
{
	net->setMac(mac);
}

void ylclient::setIPAddress(byte ip[])
{
	net->setIP(ip);
}

void ylclient::setSubMask(byte mask[])
{
	net->setSubMask(mask);
}

void ylclient::setSerialIndex(byte index)
{
	byte _serialIndex;
	_serialIndex = index;
	if ((index < HARDSERIALCOUNTS - 1) || (index > HARDSERIALCOUNTS - 1))
		_serialIndex = 0; //Serial
	net->setSerialIndex(_serialIndex);
}

} /* namespace yeelink */

