#include "api.h"
#include "networking.h"

bool CSteamNetworking::SendP2PPacket(CSteamID steamIDRemote,
				     const void *data,
				     uint32 dataSize,
				     P2PSendType sendType)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, SendP2PPacket,
					     steamIDRemote, data, dataSize,
					     sendType);
	return true;
}

bool CSteamNetworking::IsP2PPacketAvailable(uint32 *msgSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, IsP2PPacketAvailable,
					     msgSize);
	*msgSize = 0;
	return false;
}

bool CSteamNetworking::ReadP2PPacket(void *dest,
				     uint32 destSize,
				     uint32 *msgSize,
				     CSteamID *steamIDRemote)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, ReadP2PPacket,
					     dest, destSize, msgSize,
					     steamIDRemote);
	*msgSize = 0;
	*steamIDRemote = CSteamID(static_cast<uint64>(0));
	return true;
}

bool CSteamNetworking::AcceptP2PSessionWithUser(CSteamID steamIDRemote)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, AcceptP2PSessionWithUser,
					     steamIDRemote);
	return true;
}

bool CSteamNetworking::CloseP2PSessionWithUser(CSteamID steamIDRemote)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, CloseP2PSessionWithUser,
					     steamIDRemote);
	return true;
}

bool CSteamNetworking::CloseP2PChannelWithUser(
        CSteamID steamIDRemote,
        int channel)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, CloseP2PChannelWithUser,
					     steamIDRemote, channel);
	return false;
}

bool CSteamNetworking::GetP2PSessionState(CSteamID steamIDRemote,
					  P2PSessionState *connectionState)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, GetP2PSessionState,
					     steamIDRemote, connectionState);
	return false;
}

bool CSteamNetworking::AllowP2PPacketRelay(bool allow)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, AllowP2PPacketRelay,
					     allow);
	return false;
}

NetListenSocket CSteamNetworking::CreateListenSocket(int virtualP2PPort,
						     uint32 ip,
						     uint16 port,
						     bool allowUseOfPacketRelay)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, CreateListenSocket,
					     virtualP2PPort, ip, port,
					     allowUseOfPacketRelay);
	return 0;
}

NetSocket CSteamNetworking::CreateP2PConnectionSocket(CSteamID steamIDTarget,
						      int virtualPort,
						      int timeoutSec,
						      bool allowUseOfPacketRelay)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, CreateP2PConnectionSocket,
					     steamIDTarget, virtualPort,
					     timeoutSec, allowUseOfPacketRelay);
	return 0;
}

NetSocket CSteamNetworking::CreateConnectionSocket(uint32 ip,
						   uint16 port,
						   int timeoutSec)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, CreateConnectionSocket,
					     ip, port, timeoutSec);
	return 0;
}

bool CSteamNetworking::DestroySocket(NetSocket socket, bool notifyRemoteEnd)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, DestroySocket,
					     socket, notifyRemoteEnd);
	return true;
}

bool CSteamNetworking::DestroyListenSocket(NetListenSocket socket,
					   bool notifyRemoteEnd)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, DestroyListenSocket,
					     socket, notifyRemoteEnd);
	return true;
}

bool CSteamNetworking::SendDataOnSocket(NetSocket socket,
					void *data,
					uint32 dataSize,
					bool reliable)
{ 
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, SendDataOnSocket,
					     socket, data, dataSize, reliable);
	return true;
}

bool CSteamNetworking::IsDataAvailableOnSocket(NetSocket socket,
					       uint32 *msgSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, IsDataAvailableOnSocket,
					     socket, msgSize);
	*msgSize = 0;
	return false;
}

bool CSteamNetworking::RetrieveDataFromSocket(NetSocket socket,
					      void *dest,
					      uint32 destSize,
					      uint32 *msgSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, RetrieveDataFromSocket,
					     socket, dest, destSize, msgSize);
	*msgSize = 0;
	return false;
}

bool CSteamNetworking::IsDataAvailable(NetListenSocket listenSocket,
				       uint32 *msgSize,
				       NetSocket *socket)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, IsDataAvailable,
					     listenSocket, msgSize, socket);
	*msgSize = 0;
	*socket = 0;
	return false;
}

bool CSteamNetworking::RetrieveData(NetListenSocket listenSocket,
				    void *dest,
				    uint32 destSize,
				    uint32 *msgSize,
				    NetSocket *socket)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, RetrieveData,
					     listenSocket, dest, destSize,
					     msgSize, socket);
	*msgSize = 0;
	*socket = 0;
	return false;
}

bool CSteamNetworking::GetSocketInfo(NetSocket socket,
				     CSteamID *steamIDRemote,
				     int *socketStatus,
				     uint32 *ipRemote,
				     uint16 *portRemote)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, GetSocketInfo,
					     socket, steamIDRemote, socketStatus,
					     ipRemote, portRemote);
	*steamIDRemote = CSteamID(static_cast<uint64>(0));
	*socketStatus = 0;
	*ipRemote = 0;
	*portRemote = 0;
	return false;
}

bool CSteamNetworking::GetListenSocketInfo(NetListenSocket listenSocket,
					   uint32 *ip,
					   uint16 *port)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, GetListenSocketInfo,
					     listenSocket, ip, port);
	*ip = 0;
	*port = 0;
	return false;
}

NetSocketConnectionType CSteamNetworking::GetSocketConnectionType(NetSocket socket)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, GetSocketConnectionType,
					     socket);
	return NetSocketConnectionTypeNotConnected;
}

int CSteamNetworking::GetMaxPacketSize(NetSocket socket)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamNetworking, GetMaxPacketSize,
					     socket);
	return 0;
}
