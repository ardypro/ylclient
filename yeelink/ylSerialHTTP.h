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
{private:
	int serialindex;
	HardwareSerial* serial;
public:
	ylSerialHTTP(int serialIndex = 0); //pass the serial index, currently it does not support software serial
	virtual ~ylSerialHTTP();

	bool connect();
		bool Post(int value);
		bool Post(float value);
		//bool Post(char* value);

		bool postKeyValue(char* key, char* value);
};

} /* namespace yeelink */
#endif /* YLSERIALHTTP_H_ */