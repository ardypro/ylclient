/*
 * GenericEthernet.cpp
 *
 *  Created on: 2012-11-9
 *      Author: ardypro
 */

#include "GenericEthernet.h"

namespace yeelink {

GenericEthernet::GenericEthernet() {
	seconds=10; //API规定两条记录发送的时间间隔不少于10s
}

GenericEthernet::~GenericEthernet() {

}


int GenericEthernet::getInterval()
{
	return seconds;
}

void GenericEthernet::setInterval(int Seconds)
{
	seconds=Seconds;
}

json* GenericEthernet::getAPIHeader()
{

}

json* GenericEthernet::getJSONStr()
{

}

} /* namespace yeelink */


