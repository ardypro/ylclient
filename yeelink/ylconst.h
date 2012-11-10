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

//网络模块类型，最后一种是串口转HTTP代理工具
enum ETHERNETCARD {
	W5100, 				//W5100网络模块
	ENC28J60,				//ENC28J60网络模块
	SERIALOVERHTTP		//电脑串口代理工具，需要指定串口号（1,2,3）
};

enum SENSORTYPE {
	ST_NUMERIC, 			//数值型传感器
	ST_GPS, 				//GPS类型传感器
	ST_GENERIC, 			//泛型传感器
	ST_IMAGE				//图像传感器
};

//错误类型
const int ERR_INVALID_APIKEY = 1;
const int ERR_SERVER_NOT_AVAILABLE = 2;
const int ERR_SERVER_BUSY = 3;

const int ERR_INVALID_DEVICE_ID = 11;
const int ERR_INVALID_SENSOR_ID = 12;
const int ERR_SERIAL_BUSY = 13;

#endif /* YLCONST_H_ */
