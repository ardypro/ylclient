/*
 * ylW5100Ethernet.h
 *  W5100网络模块类
 *  Created on: 2012-12-4
 *      Author: ardypro
 */

#ifndef YLW5100ETHERNET_H_
#define YLW5100ETHERNET_H_

#include "ylGenericEthernet.h"
#include "SPI.h"
#include "Ethernet.h"
#include "ylconf.h"
#include "ylconst.h"

namespace yeelink
{

class ylW5100Ethernet: public yeelink::ylGenericEthernet
{
public:
	ylW5100Ethernet();
	virtual ~ylW5100Ethernet();

	void setMac(byte mac[]);
	void setSubMask(byte mask[]);
	void setIP(byte ip[]);
	bool Post(long value);
	bool Post(float value, int decimal=2);
	//bool Post(char* value);
	//bool Post(String value);
	//bool Post(int value);

protected:
private:
	bool connect();
	byte* MAC;
	byte* IP;
	byte* subMask;

	EthernetClient net;//TODO 这里需要根据arduino IDE版本调整

	void sendHEADER();
	int getLength(long value);
	int getLength(float value, int decimal=2);

};

} /* namespace yeelink */
#endif /* YLW5100ETHERNET_H_ */
