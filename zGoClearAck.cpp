/*

Copyright 2010-2011 iCall, Inc.

This file is part of Open ZRTP.

Open ZRTP is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published bythe Free Software Foundation, either version 3 of the License, or(at your option) any later version.

Open ZRTP is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public Licensealong with Open ZRTP. If not, see http://www.gnu.org/licenses/.

*/


#include "zGoClearAck.h"

zGoClearAck::zGoClearAck()
{
	DBGLOGLINE("Creating ClearAck packet without data");

	_PacketHeader = &data.zrtpHeader;

	SetZrtpID();
	SetLength((sizeof(ZRTPClearAckPacket) / ZRTP_WORD_SIZE) - 1);
	SetMsgType((uint8_t*)ClearAckMsg);
}

zGoClearAck::zGoClearAck(uint8_t *data)
{
	DBGLOGLINE("Creating Conf2Ack packet from data");

	_PacketHeader = (ZRTPPacketHeader *)&((ZRTPClearAckPacket*)data)->zrtpHeader;
}

zGoClearAck::~zGoClearAck()
{
	DBGLOGLINE("Deleting ClearAck packet.");
}
