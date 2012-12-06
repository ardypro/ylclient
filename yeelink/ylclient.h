/*
 * ylclient.h
 *
 *  Created on: 2012-11-9
 *      Author: ardypro(jzopen@yeah.net)
 *
 *
 *      yeelink.net服务的Arduino客户端类库
 *
 */

#ifndef YLCLIENT_H_
#define YLCLIENT_H_

#include "WString.h"
#include "ylconst.h"
#include "ylconf.h"

#include "ylGenericEthernet.h"

namespace yeelink
{

class ylclient
{
private:
	char* _apikey;
	ETHERNETCARD _cardtype;
	bool _connected;
	char* _apiver;
	int _activedeviceid;
	int _activesensorid;
	byte _macaddr[];
	byte _ipaddr[];
	byte _serialIndex;

	ylGenericEthernet* net;			//定义一个虚拟网卡变量

public:
	ylclient(ETHERNETCARD cardType=SERIALOVERHTTP);
	virtual ~ylclient();

	/*
	 * 2012-12-06 注释掉下面方法
	 bool connect();					//连接到服务器，需要实现给APIKEY赋值
	 bool connect(char* APIkey);	//连接到服务器
	 void disconnect();				//断开与服务器的连接
	 bool connected();				//连接状态
	 */
	void setAPIKey(String APIKey);	//设置APIKEY

	//设置网卡参数
	void setEthernetCardParam(byte mac[], byte ip[]);
	void setEthernetCardParam(byte serialindex);			//仅对使用串口代理方式有效

	//设置网卡类型
	void setEthernetCardType(ETHERNETCARD cardType);

	//设置设备与传感器
	bool setActiveDevice(int deviceid);
	bool setActiveSensor(int sensorid);

	//发布数据方法
	bool Post(long value);
	bool Post(float value);
	bool Post(bool value);
	bool Post(char* value);

	//TODO 后续版本支持的功能
	//virtual int Available();
	//virtual char Read();
};

} /* namespace yeelink */
#endif /* YLCLIENT_H_ */
