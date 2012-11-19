/*
 * GenericEthernet.h
 *
 *  Created on: 2012-11-9
 *      Author: ardypro
 */

#ifndef GENERICETHERNET_H_
#define GENERICETHERNET_H_

#include "ylconf.h"
#include "ylconst.h"

namespace yeelink {

class GenericEthernet {
private:
	int seconds;

protected:
	json* getAPIHeader();
	json* getJSONStr();
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

	void setInterval(int Seconds);
	int getInterval();

	int Available()=0;
	char Read()=0;

};

} /* namespace yeelink */
#endif /* GENERICETHERNET_H_ */
