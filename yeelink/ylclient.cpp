/*
 * ylclient.cpp
 *
 *  Created on: 2012-11-9
 *      Author: ardypro
 *
 *      2012-11-11	添加发布整数/浮点数/布尔值/字符串功能
 */

#include "ylclient.h"

//#ifdef SERIALPROXY
#include "ylSerialHTTP.h"
//#endif

#include "ylW5100Ethernet.h"

namespace yeelink
{

ylclient::ylclient(ETHERNETCARD cardType)
{
	// 必须先设置cardtype，这样才能确定net是哪个子类的实例
	this->_cardtype = cardType;
	this->setEthernetCardType(cardType);

	this->_connected = false;
	this->_apikey = (char*) "89501b438791e28f74c21035a88fffd2";	//TODO 发布时要取消

	this->_apiver = (char*) APIVERSION;
}

ylclient::~ylclient()
{
	delete net;
	net = NULL;
}

//bool ylclient::connect(char * APIKey)
//{
//	this->_apikey = APIKey;
//	return 0;
//}
//
//bool ylclient::connect()
//{
//	if (this->_apikey == 0)
//	{
//		return 0;
//	}
//	else
//	{
//
//		return 0;
//	}
//}
//
//bool ylclient::connected()
//{
////注意，目前这里没有实时获取连接状态，因此有可能在服务器端断开连接直接之后，
////本地端的状态变量依然是连接
//
//	return _connected;
//}

void ylclient::setAPIKey(String APIKey)
{
	this->_apikey = &APIKey[0];
}

void ylclient::setEthernetCardType(ETHERNETCARD cardType)
{
	this->_cardtype = cardType;
	switch (cardType)
	{
	case W5100:
		net = new ylW5100Ethernet();
		break;
	case ENC28J60:

		break;

	case SERIALOVERHTTP:
		net = new ylSerialHTTP();

		break;
	}
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

