/*
 * ylconst.h
 *
 *  Created on: 2012-11-9
 *      Author: ardypro
 */

#ifndef YLCONST_H_
#define YLCONST_H_

#include "stdint.h"


typedef uint8_t byte;
typedef char json;



//网络模块类型，最后一种是串口转HTTP代理工具
enum ETHERNETCARD {
	W5100, 				    //W5100网络模块
	ENC28J60,				//ENC28J60网络模块
	SERIALOVERHTTP		    //电脑串口代理工具，需要指定串口号（1,2,3）
};

enum SENSORTYPE {
	ST_NUMERIC, 			//数值型传感器
	ST_GPS, 				//GPS类型传感器
	ST_GENERIC, 			//泛型传感器（保留）
	ST_IMAGE				//图像传感器(保留)
};

//错误类型
const int SUCCESSFUL=0;
const int INVALID_APIKEY = 1;
const int SERVER_NOT_AVAILABLE = 2;
const int SERVER_BUSY = 3;

const int INVALID_DEVICEID = 11;
const int INVALID_SENSORID = 12;
const int SERIALPORT_BUSY = 13;

//const char* APIV ="A";

#endif /* YLCONST_H_ */
