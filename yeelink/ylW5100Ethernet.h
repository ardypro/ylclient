/*
 * ylW5100Ethernet.h
 *
 *  Created on: 2012-12-4
 *      Author: ardypro
 */

#ifndef YLW5100ETHERNET_H_
#define YLW5100ETHERNET_H_

#include "ylGenericEthernet.h"
#include "SPI.h"

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
	bool Post(float value);
	//bool Post(char* value);
	//bool Post(String value);
	//bool Post(int value);

protected:
private:
	bool connect();
	byte* MAC;
	byte* IP;
	byte* subMask;
};

} /* namespace yeelink */
#endif /* YLW5100ETHERNET_H_ */
