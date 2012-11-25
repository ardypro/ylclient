/*
 * SerialHTTP.cpp
 *
 *  Created on: 2012-11-12
 *      Author: ardypro
 */

#include "SerialHTTP.h"

#ifdef _DEBUG_
#include "Arduino.h"
#endif

extern HardwareSerial Serial;
#if defined(UBRR1H)
extern HardwareSerial Serial1;
#endif
#if defined(UBRR2H)
extern HardwareSerial Serial2;
#endif
#if defined(UBRR3H)
extern HardwareSerial Serial3;
#endif

namespace yeelink
{

SerialHTTP::SerialHTTP(int serialIndex)
{
	switch (serialIndex)
	{
	case 0:
		serial = &Serial;
		break;
	case 1:
#if defined(UBRR1H)
		serial = &Serial1;
#else
		serial = &Serial;
#endif
		break;
	case 2:
#if defined(UBRR2H)
		serial = &Serial2;
#else
		serial = &Serial;
#endif
		break;
	case 3:
#if defined(UBRR3H)
		serial = &Serial3;
#else
		serial = &Serial;
#endif
		break;
	default:
		serial = &Serial;
	}
}

SerialHTTP::~SerialHTTP()
{
// do nothing
}

bool SerialHTTP::connect()
{
	serial->println("serial port is connecting");
	return true;
}

bool SerialHTTP::Post(int value)
{
	sendValueflag();
	return serial->print(value);
}

bool SerialHTTP::Post(float value)
{
	sendValueflag();
	return serial->print(value);
}

bool SerialHTTP::postKeyValue(char* key, char* value)
{

	return 0;
}

void SerialHTTP::sendValueflag()
{
	//serial->print("\"value\":");
	serial->print("value:");
}

} /* namespace yeelink */

