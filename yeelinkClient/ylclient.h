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
    //ETHERNETCARD _cardtype;
    bool _connected;
    //char* _apiver;
    int _activedeviceid;
    int _activesensorid;

    ylGenericEthernet* net;			//定义一个虚拟网卡变量

public:
    ylclient();
    virtual ~ylclient();

    /*
			* 2012-12-06 注释掉下面方法
     			bool connect();					//连接到服务器，需要实现给APIKEY赋值
     			bool connect(char* APIkey);	    //连接到服务器
     			void disconnect();				//断开与服务器的连接
     			bool connected();				//连接状态
     			*/
    void setAPIKey(String APIKey);	//设置APIKEY
    void setAPIKey(char* APIKey);
    //使用含义更加明显的方法名称 2012-12-07
    void setMACAddress(byte mac[]);
    void setIPAddress(byte ip[]);
    void setSubMask(byte mask[]);
    void setSerialIndex(byte index);

    //设置设备与传感器
    bool setActiveDevice(int deviceid);
    bool setActiveSensor(int sensorid);

    //发布数据方法
    bool Post(long value);
    bool Post(float value, int decimal=2);
    bool Post(bool value);
    bool Post(char* value);

    //TODO 后续版本支持的功能
    //virtual int Available();
    //virtual char Read();

private:

  };

} /* namespace yeelink */
#endif /* YLCLIENT_H_ */

