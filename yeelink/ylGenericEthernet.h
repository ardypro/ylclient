/*
 * ylGenericEthernet.h
 *
 *  Created on: 2012-11-26
 *      Author: ardypro
 */

#ifndef YLGENERICETHERNET_H_
#define YLGENERICETHERNET_H_

#include "ylconf.h"
#include "ylconst.h"

namespace yeelink
{

class ylGenericEthernet
{
private:
	int seconds;
	json* apiHeader;
	json* jsonStr;
protected:
	//json* getAPIHeader();
	//json* getJSONStr();
public:
	ylGenericEthernet();
	virtual ~ylGenericEthernet();

	virtual bool connect()=0;
	virtual bool Post(int value)=0;
	virtual bool Post(float value)=0;
	//virtual bool Post(char* value)=0;
	//virtual bool Post(String value)=0;
	//virtual bool Post(int value)=0;
	virtual bool postKeyValue(char* key, char* value)=0;

	void setInterval(int Seconds);
	int getInterval();

	//virtual int Available()=0;
	//virtual char Read()=0;
};

} /* namespace yeelink */
#endif /* YLGENERICETHERNET_H_ */