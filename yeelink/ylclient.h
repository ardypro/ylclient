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
#include "GenericEthernet.h"


namespace yeelink {

class ylclient {
private:
	char* _apikey;
	ETHERNETCARD _cardtype;
	bool _connected;
	char* _apiver;
	int _activedeviceid;
	int _activesensorid;
	int _macaddr[];
	int _ipaddr[];
	int _serialIndex;

	//GenericEthernet* net;			//定义一个虚拟网卡变量

public:
	ylclient();
	virtual ~ylclient();

	bool connect();					//连接到服务器，需要实现给APIKEY赋值
	bool connect(char* APIkey);	//连接到服务器
	void disconnect();				//断开与服务器的连接
	bool connected();				//连接状态

	void setAPIKey(char* APIKey);	//设置APIKEY
	void setAPIKey(String APIKey);
	void setAPIVersion(char* APIVer);
	void setAPIVersion(String APIVer);

	//设置网卡参数
	void setEthernetCardParam(char* mac, char* ip);
	void setEthernetCardParam(String mac, String ip);
	void setEthernetCardParam(int serialindex);			//仅对使用串口代理方式有效
	void setEthernetCardType(ETHERNETCARD cardType);

	//设置设备与传感器
	bool setActiveDevice(int deviceid);
	bool setActiveSensor(int sensorid);

	//发布数据方法
	bool push(int value);
	bool push(float value);
	bool push(bool value);
	bool push(char* value);


};
} /* namespace yeelink */
#endif /* YLCLIENT_H_ */
