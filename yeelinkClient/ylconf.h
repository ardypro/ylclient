/*
 * ylconf.h
 *
 *  Created on: 2012-11-15
 *      Author: ardypro
 *
 *      类库的配置文件
 *      可以选择是支持所有的三种连接方式还是其中的任意一种，基于硬件平台的连接和/或基于软件的连接方式
 *
 */

#ifndef YLCONF_H_
#define YLCONF_H_

#include "ylconst.h"

//#define DEFAULTAPIKEY  "89501b438791e28f74c21035a88fffd2"
//#define APISERVER  "api.yeelink.net"
//#define APIVERSION  "v1.0"

char* const DEFAULTAPIKEY = "89501b438791e28f74c21035a88fffd2"; //默认的APIKEY
char* const APISERVER = "api.yeelink.net"; //yeelink服务器地址
//const char*  APIVERSION = "v1.0";  //API版本号  ?无法通过编译，但是在其它地方又可以，不明白
char* const APIVERSION = "v1.0";

byte const MACLENGTH = 6; //Mac address length
byte const IPLENGTH = 4;

byte const MAXFLOATLENGTH = 20; //浮点数长度，包含小数点以及小数点后面的小数

/*
 * 		选择与服务器连接方式，目前支持的方式有三种
 * 			W5100网络模块
 * 			ENC28J60网络模块
 * 			通过PC上的Serial转HTTP方式
 *
 * 		根据不同的连接方式，来注释掉下面的预编译指令
 */
//#define ENC28J60BOARD
#define W5100BOARD
//#define SERIALHTTPAPP

//调试状态，正式版本应该置为RELEASE版本，直接注释掉下面预定义即可
#define _DEBUG_
//调试状态

//根据不同版本的IDE来包含对应的Arduino主文件
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WConstants.h"
#include "WProgram.h"
#endif

//TODO 添加对软串口的支持，增加一个串口基类
//设置硬件串口数（暂时不支持软串口）
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
#define HARDSERIALCOUNTS 3
#else
#define HARDSERIALCOUNTS 1
#endif

#endif /* YLCONF_H_ */
