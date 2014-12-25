#ifndef STEAMTRICKER_STEAMAPI_MASTERSERVERUPDATER_H_
#define STEAMTRICKER_STEAMAPI_MASTERSERVERUPDATER_H_

#include "types.h"

/*
FIXME: this doesn't seem to get used anywhere
*/

class ISteamMasterServerUpdater {
public:
	virtual void SetActive(bool active) = 0;

	virtual void SetHeartbeatInterval(int heartbeatInterval) = 0;

	virtual bool HandleIncomingPacket(const void *data,
				  int cbData,
				  uint32 srcIP,
				  uint16 srcPort) = 0;

	virtual int GetNextOutgoingPacket(void *out,
				  int maxOut,
				  uint32 *netAdr,
				  uint16 *port) = 0;

	virtual void SetBasicServerData(unsigned short protocolVersion, 
				bool dedicatedServer, 
				const char *regionName,
				const char *productName, 
				unsigned short maxReportedClients,
				bool passwordProtected,
				const char *gameDescription) = 0;

	virtual void ClearAllKeyValues() = 0;

	virtual void SetKeyValue(const char *key, const char *value) = 0;

	virtual void NotifyShutdown() = 0;

	virtual bool WasRestartRequested() = 0;

	virtual void ForceHeartbeat() = 0;

	virtual bool AddMasterServer(const char *serverAddress) = 0;

	virtual bool RemoveMasterServer(const char *serverAddress) = 0;

	virtual int GetNumMasterServers() = 0;

	virtual int GetMasterServerAddress(int server, char *out, int outBufferSize) = 0;
};

class CSteamMasterServerUpdater : public ISteamMasterServerUpdater {
public:
	static CSteamMasterServerUpdater& getInstance() {
		static CSteamMasterServerUpdater instance;
		return instance;
	}

	void SetActive(bool active);

	void SetHeartbeatInterval(int heartbeatInterval);

	bool HandleIncomingPacket(const void *data,
				  int cbData,
				  uint32 srcIP,
				  uint16 srcPort);

	int GetNextOutgoingPacket(void *out,
				  int maxOut,
				  uint32 *netAdr,
				  uint16 *port);

	void SetBasicServerData(unsigned short protocolVersion, 
				bool dedicatedServer, 
				const char *regionName,
				const char *productName, 
				unsigned short maxReportedClients,
				bool passwordProtected,
				const char *gameDescription);

	void ClearAllKeyValues();

	void SetKeyValue(const char *key, const char *value);

	void NotifyShutdown();

	bool WasRestartRequested();

	void ForceHeartbeat();

	bool AddMasterServer(const char *serverAddress);

	bool RemoveMasterServer(const char *serverAddress);

	int GetNumMasterServers();

	int GetMasterServerAddress(int server, char *out, int outBufferSize);
};

#endif /* STEAMTRICKER_STEAMAPI_MASTERSERVERUPDATER_H_ */
