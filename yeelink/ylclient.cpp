/*
 * ylclient.cpp
 *
 *  Created on: 2012-11-9
 *      Author: ardypro
 *
 *      2012-11-11	添加发布整数/浮点数/布尔值/字符串功能
 */

#include "ylclient.h"

namespace yeelink {

ylclient::ylclient() {
	// TODO Auto-generated constructor stub
	this->_connected = false;
	this->_apikey = (char*) "89501b438791e28f74c21035a88fffd2";	//TODO 发布时要取消
	this->_cardtype = W5100;
	this->_apiver = (char*) "v1.0";
	this->_activedeviceid = 0;
	this->_activesensorid = 0;
	this->_serialIndex=1;

}

ylclient::~ylclient() {
	// TODO Auto-generated destructor stub
}

bool ylclient::connect(char * APIKey) {
	this->_apikey = APIKey;
	return 0;
}

bool ylclient::connect() {
	if (this->_apikey == 0) {
		return 0;
	} else {

		return 0;
	}
}

bool ylclient::connected() {
//注意，目前这里没有实时获取连接状态，因此有可能在服务器端断开连接直接之后，
//本地端的状态变量依然是连接

	return _connected;
}

void ylclient::setAPIKey(char* APIKey) {

}

void ylclient::setEthernetCardParam(char* mac, char* ip) {

}

bool ylclient::Post(int value) {

	return 0;
}

bool ylclient::Post(char* value) {

	return 0;
}

bool ylclient::Post(float value) {

	return 0;
}

bool ylclient::Post(bool value) {

	return 0;
}

} /* namespace yeelink */

