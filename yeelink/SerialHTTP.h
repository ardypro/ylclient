/*
 * SerialHTTP.h
 *
 *  Created on: 2012-11-12
 *      Author: ardypro
 */

/*
 *    ********	IMPORTANT 	*******
 *
 *    使用之前，需要正确设置PC端串口转HTTP代理工具的API各项配置，
 *    否则，可能不能正常工作
 */

#ifndef SERIALHTTP_H_
#define SERIALHTTP_H_

#include "GenericEthernet.h"

namespace yeelink
{

class SerialHTTP: public yeelink::GenericEthernet
{
private:
	int serialindex;
	HardwareSerial* serial;
void sendValueflag();
public:
	SerialHTTP(int serialIndex = 0); //pass the serial index, currently it does not support software serial
	virtual ~SerialHTTP();

	bool connect();
	bool Post(int value);
	bool Post(float value);
	//bool Post(char* value);

	bool postKeyValue(char* key, char* value);

};

} /* namespace yeelink */
#endif /* SERIALHTTP_H_ */
