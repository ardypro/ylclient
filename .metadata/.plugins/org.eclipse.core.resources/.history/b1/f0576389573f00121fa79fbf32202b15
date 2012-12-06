/*
 * ylSerialHTTP.cpp
 *
 *  Created on: 2012-11-26
 *      Author: ardypro
 */

#include "ylSerialHTTP.h"

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

ylSerialHTTP::ylSerialHTTP(int serialIndex)
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

ylSerialHTTP::~ylSerialHTTP()
{
	// TODO Auto-generated destructor stub
}

bool ylSerialHTTP::connect()
{
	serial->println("serial port is connecting");
	return true;
}

bool ylSerialHTTP::Post(int value)
{
	//sendValueflag();
	return serial->print(value);
}

bool ylSerialHTTP::Post(float value)
{
	//sendValueflag();
	return serial->print(value);
}

bool ylSerialHTTP::postKeyValue(char* key, char* value)
{

	return 0;
}

} /* namespace yeelink */
