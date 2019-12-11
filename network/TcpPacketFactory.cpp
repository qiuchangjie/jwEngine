#include "TcpPacketFactory.h"

TPacketFactory * tcpPacketFactory;

TPacketFactory::TPacketFactory(int count) :
	objpool(count)
{

}

NetPacket * TPacketFactory::createPacket()
{
	return objpool.createObject();
}

void TPacketFactory::recyclePacket(NetPacket * obj)
{
	objpool.reclaimObject(obj);
}