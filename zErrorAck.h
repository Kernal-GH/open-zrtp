/*

Copyright 2010-2011 iCall, Inc.

This file is part of Open ZRTP.

Open ZRTP is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published bythe Free Software Foundation, either version 3 of the License, or(at your option) any later version.

Open ZRTP is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public Licensealong with Open ZRTP. If not, see http://www.gnu.org/licenses/.

*/


#ifndef __zErrorAck_h__
#define __zErrorAck_h__

#include "zPacketBase.h"

struct ZRTPErrorAckPacket
{
	ZRTPPacketHeader zrtpHeader;
	uint8_t crc[ZRTP_WORD_SIZE];
};

class zErrorAck : public zPacketBase
{
public:
	zErrorAck();
	virtual ~zErrorAck();
	zErrorAck(uint8_t* data);

private:
	ZRTPErrorAckPacket data;

};

#endif // __zErrorAck_h__
