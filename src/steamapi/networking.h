#ifndef STEAMTRICKER_STEAMAPI_NETWORKING_H_
#define STEAMTRICKER_STEAMAPI_NETWORKING_H_

#include "types.h"

/**
 * interface for SteamNetworking version 005
 */
class ISteamNetworking {
public:
	virtual bool SendP2PPacket(CSteamID steamIDRemote,
			   const void *data,
			   uint32 dataSize,
			   P2PSendType sendType) = 0;

	virtual bool IsP2PPacketAvailable(uint32 *msgSize) = 0;

	virtual bool ReadP2PPacket(void *dest,
			   uint32 destSize,
			   uint32 *msgSize,
			   CSteamID *steamIDRemote) = 0;

	virtual bool AcceptP2PSessionWithUser(CSteamID steamIDRemote) = 0;

	virtual bool CloseP2PSessionWithUser(CSteamID steamIDRemote) = 0;

	//FIXME
	virtual bool CloseP2PChannelWithUser(CSteamID steamIDRemote, int channel) = 0;

	virtual bool GetP2PSessionState(CSteamID steamIDRemote,
				P2PSessionState *connectionState) = 0;

	//FIXME
	virtual bool AllowP2PPacketRelay(bool allow) = 0;

	virtual NetListenSocket CreateListenSocket(int virtualP2PPort,
					   uint32 ip,
					   uint16 port,
					   bool allowUseOfPacketRelay) = 0;

	virtual NetSocket CreateP2PConnectionSocket(CSteamID steamIDTarget, 
					    int virtualPort, 
					    int timeoutSec,
					    bool allowUseOfPacketRelay) = 0;

	virtual NetSocket CreateConnectionSocket(uint32 ip,
					 uint16 port,
					 int timeoutSec) = 0;

	virtual bool DestroySocket(NetSocket socket, bool notifyRemoteEnd) = 0;

	virtual bool DestroyListenSocket(NetListenSocket socket, bool notifyRemoteEnd) = 0;

	virtual bool SendDataOnSocket(NetSocket socket,
			      void *data, 
			      uint32 dataSize,
			      bool reliable) = 0;

	virtual bool IsDataAvailableOnSocket(NetSocket socket, uint32 *msgSize) = 0;

	virtual bool RetrieveDataFromSocket(NetSocket socket,
				    void *dest,
				    uint32 destSize,
				    uint32 *msgSize) = 0;

	virtual bool IsDataAvailable(NetListenSocket listenSocket,
			     uint32 *msgSize,
			     NetSocket *socket) = 0;

	virtual bool RetrieveData(NetListenSocket listenSocket,
			  void *dest,
			  uint32 destSize,
			  uint32 *msgSize,
			  NetSocket *socket) = 0;

	virtual bool GetSocketInfo(NetSocket socket,
			   CSteamID *steamIDRemote,
			   int *socketStatus,
			   uint32 *ipRemote,
			   uint16 *portRemote) = 0;

	virtual bool GetListenSocketInfo(NetListenSocket listenSocket,
				 uint32 *ip,
				 uint16 *port) = 0;

	virtual NetSocketConnectionType GetSocketConnectionType(NetSocket socket) = 0;

	virtual int GetMaxPacketSize(NetSocket socket) = 0;
};

class CSteamNetworking : public ISteamNetworking {
public:
	static CSteamNetworking& getInstance() {
		static CSteamNetworking instance;
		return instance;
	}

	bool SendP2PPacket(CSteamID steamIDRemote,
			   const void *data,
			   uint32 dataSize,
			   P2PSendType sendType);

	bool IsP2PPacketAvailable(uint32 *msgSize);

	bool ReadP2PPacket(void *dest,
			   uint32 destSize,
			   uint32 *msgSize,
			   CSteamID *steamIDRemote);

	bool AcceptP2PSessionWithUser(CSteamID steamIDRemote);

	bool CloseP2PSessionWithUser(CSteamID steamIDRemote);

	//FIXME
	bool CloseP2PChannelWithUser(CSteamID steamIDRemote, int channel);

	bool GetP2PSessionState(CSteamID steamIDRemote,
				P2PSessionState *connectionState);

	//FIXME
	bool AllowP2PPacketRelay(bool allow);

	NetListenSocket CreateListenSocket(int virtualP2PPort,
					   uint32 ip,
					   uint16 port,
					   bool allowUseOfPacketRelay);

	NetSocket CreateP2PConnectionSocket(CSteamID steamIDTarget, 
					    int virtualPort, 
					    int timeoutSec,
					    bool allowUseOfPacketRelay);

	NetSocket CreateConnectionSocket(uint32 ip,
					 uint16 port,
					 int timeoutSec);

	bool DestroySocket(NetSocket socket, bool notifyRemoteEnd);

	bool DestroyListenSocket(NetListenSocket socket, bool notifyRemoteEnd);

	bool SendDataOnSocket(NetSocket socket,
			      void *data, 
			      uint32 dataSize,
			      bool reliable);

	bool IsDataAvailableOnSocket(NetSocket socket, uint32 *msgSize);

	bool RetrieveDataFromSocket(NetSocket socket,
				    void *dest,
				    uint32 destSize,
				    uint32 *msgSize);

	bool IsDataAvailable(NetListenSocket listenSocket,
			     uint32 *msgSize,
			     NetSocket *socket);

	bool RetrieveData(NetListenSocket listenSocket,
			  void *dest,
			  uint32 destSize,
			  uint32 *msgSize,
			  NetSocket *socket);

	bool GetSocketInfo(NetSocket socket,
			   CSteamID *steamIDRemote,
			   int *socketStatus,
			   uint32 *ipRemote,
			   uint16 *portRemote);

	bool GetListenSocketInfo(NetListenSocket listenSocket,
				 uint32 *ip,
				 uint16 *port);

	NetSocketConnectionType GetSocketConnectionType(NetSocket socket);

	int GetMaxPacketSize(NetSocket socket);
};

#endif /* STEAMTRICKER_STEAMAPI_NETWORKING_H_ */
