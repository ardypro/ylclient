/*
 * ylW5100Ethernet.h
 *
 *  Created on: 2012-12-4
 *      Author: ardypro
 */

#ifndef YLW5100ETHERNET_H_
#define YLW5100ETHERNET_H_

#include "ylGenericEthernet.h"


namespace yeelink
{

class ylW5100Ethernet: public yeelink::ylGenericEthernet
{
public:
	ylW5100Ethernet();
	virtual ~ylW5100Ethernet();


	bool Post(long value);
	bool Post(float value);
	//bool Post(char* value);
	//bool Post(String value);
	//bool Post(int value);

protected:
private:
	bool connect();

};

} /* namespace yeelink */
#endif /* YLW5100ETHERNET_H_ */
