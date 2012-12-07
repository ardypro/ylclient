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

	int activeSensorID;
	int activeDeviceID;

	json* apiHeader;
	json* jsonStr;
protected:
	//json* getAPIHeader();
	//json* getJSONStr();
public:
	ylGenericEthernet();
	virtual ~ylGenericEthernet();

	virtual bool Post(long value)=0;
	virtual bool Post(float value)=0;
	//virtual bool Post(char* value)=0;
	//virtual bool Post(String value)=0;
	//virtual bool Post(int value)=0;
	//virtual bool postKeyValue(char* key, char* value)=0;

	void setInterval(int Seconds);
	int getInterval();

	//设置网卡类型
	void virtual setSerialIndex(int index);
	void virtual setMac(byte mac[]);
	void virtual setIP(byte ip[]);
	void virtual setSubMask(byte mask[]);

	void setActiveSensor(int sensorid);
	int getActiveSensor();
	void setActiveDevice(int deviceid);
	int getActiveDevice();

//TODO 后续版本支持的功能
	//virtual int Available()=0;
	//virtual char Read()=0;
};

} /* namespace yeelink */
#endif /* YLGENERICETHERNET_H_ */
