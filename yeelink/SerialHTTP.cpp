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

namespace yeelink {

SerialHTTP::SerialHTTP(int serialIndex) {
	// TODO Auto-generated constructor stub

}

SerialHTTP::~SerialHTTP() {
	// TODO Auto-generated destructor stub
}


bool SerialHTTP::connect() {
	Serial.println("serial connecting");
	return true;
}

bool SerialHTTP::Post(int value) {

}

bool SerialHTTP::Post(float value) {

}

bool SerialHTTP::postKeyValue(char* key, char* value) {

	return 0;
}
} /* namespace yeelink */

