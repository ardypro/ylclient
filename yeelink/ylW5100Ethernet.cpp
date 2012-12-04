/*
 * ylW5100Ethernet.cpp
 *
 *  Created on: 2012-12-4
 *      Author: ardypro
 */

#include "ylW5100Ethernet.h"

namespace yeelink
{

ylW5100Ethernet::ylW5100Ethernet()
{
	// TODO Auto-generated constructor stub

}

ylW5100Ethernet::~ylW5100Ethernet()
{
	// TODO Auto-generated destructor stub
}

bool ylW5100Ethernet::Post(float value)
{
	bool r;
	if ( connect())
		{

		r=true;
		}
	else
		r=false;
	return r;
}

bool ylW5100Ethernet::Post(long value)
{
	float f;
	f=value*1.0;
	return Post( f);
}

bool ylW5100Ethernet::connect()
{

}


} /* namespace yeelink */
