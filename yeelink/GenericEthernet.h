/*
 * GenericEthernet.h
 *
 *  Created on: 2012-11-9
 *      Author: ardypro
 */

#ifndef GENERICETHERNET_H_
#define GENERICETHERNET_H_

#define _DEBUG_					//调试状态

namespace yeelink {

class GenericEthernet {
private:

public:
	GenericEthernet();
	virtual ~GenericEthernet();

	virtual bool connect()=0;
	virtual bool Post(int value)=0;
	virtual bool Post(float value)=0;
	//virtual bool Post(char* value)=0;
	//virtual bool Post(String value)=0;
	//virtual bool Post(int value)=0;
	virtual bool postKeyValue(char* key, char* value)=0;
};

} /* namespace yeelink */
#endif /* GENERICETHERNET_H_ */
