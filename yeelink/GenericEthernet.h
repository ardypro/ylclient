/*
 * GenericEthernet.h
 *
 *  Created on: 2012-11-9
 *      Author: ardypro
 */

#ifndef GENERICETHERNET_H_
#define GENERICETHERNET_H_

namespace yeelink {

class GenericEthernet {
private:

public:
	GenericEthernet();
	virtual ~GenericEthernet();

	virtual bool connect()=0;
	virtual bool push(int value)=0;
	virtual bool push(float value)=0;
	//virtual bool push(int value)=0;
	//virtual bool push(int value)=0;
	//virtual bool push(int value)=0;
	virtual bool pushKeyValue(char* key, char* value);
};

} /* namespace yeelink */
#endif /* GENERICETHERNET_H_ */
