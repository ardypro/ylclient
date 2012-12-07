/*
 * ylSerialHTTP.h
 *
 *  Created on: 2012-11-26
 *      Author: ardypro
 */

#ifndef YLSERIALHTTP_H_
#define YLSERIALHTTP_H_

#include "ylGenericEthernet.h"

namespace yeelink
{

class ylSerialHTTP: public yeelink::ylGenericEthernet
{
private:
	HardwareSerial* serial;
public:
	ylSerialHTTP();
	virtual ~ylSerialHTTP();

	void setSerialIndex(byte serialIndex);

	bool connect();
	bool Post(long value);
	bool Post(float value);
	//bool Post(char* value);

	bool postKeyValue(char* key, char* value);
};

} /* namespace yeelink */
#endif /* YLSERIALHTTP_H_ */
