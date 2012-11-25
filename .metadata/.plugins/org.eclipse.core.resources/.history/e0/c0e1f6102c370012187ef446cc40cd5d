/*
 * GenericEthernet.cpp
 *
 *  Created on: 2012-11-9
 *      Author: ardypro
 */

#include "GenericEthernet.h"
#include "ylconst.h"

namespace yeelink {

GenericEthernet::GenericEthernet() {
	seconds = 10; //API规定两条记录发送的时间间隔不少于10s
	apiHeader = 0;
	jsonStr = 0;
}

GenericEthernet::~GenericEthernet() {

}

int GenericEthernet::getInterval() {
	return seconds;
}

void GenericEthernet::setInterval(int Seconds) {
	seconds = Seconds;
}

/*

json* GenericEthernet::getAPIHeader() {
	json* header;
	header = "POST /";
	strcat(header, APIVERSION);
	strcat(header, "/device/");

	strcat(header, "demo");

}

json* GenericEthernet::getJSONStr() {

}
*/

} /* namespace yeelink */

