/*
 * SerialHTTP.h
 *
 *  Created on: 2012-11-12
 *      Author: ardypro
 */

#ifndef SERIALHTTP_H_
#define SERIALHTTP_H_

#include "GenericEthernet.h"

namespace yeelink {

class SerialHTTP: public yeelink::GenericEthernet {
public:
	SerialHTTP(int serialIndex=1);
	virtual ~SerialHTTP();

	bool connect();
	bool Post(int value);
	bool Post(float value);
	//bool Post(char* value);

	bool postKeyValue(char* key, char* value);

};

} /* namespace yeelink */
#endif /* SERIALHTTP_H_ */