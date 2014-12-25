#ifndef STEAMTRICKER_STEAMAPI_GAMESERVER_H_
#define STEAMTRICKER_STEAMAPI_GAMESERVER_H_

#include "types.h"

/**
 * Interface for SteamGameServer version 012
 */
class ISteamGameServer {
public:

	virtual bool InitGameServer(uint32 ip,
								uint16 gamePort,
								uint16 queryPort,
								uint32 flags,
								AppId gameAppId,
								const char *versionString) = 0;

	virtual void SetProduct(const char *product) = 0;

	virtual void SetGameDescription(const char *gameDescription) = 0;

	virtual void SetModDir(const char *modDir) = 0;

	virtual void SetDedicatedServer(bool dedicated) = 0;

	virtual void LogOn() = 0;

	virtual void LogOnAnonymous() = 0;

	virtual void LogOff() = 0;

	virtual bool BLoggedOn() = 0;

	virtual bool BSecure() = 0;

	virtual CSteamID GetSteamID() = 0;

	virtual bool WasRestartRequested() = 0;

	virtual void SetMaxPlayerCount(int playersMax) = 0;

	virtual void SetBotPlayerCount(int botplayers) = 0;

	virtual void SetServerName(const char *serverName) = 0;

	virtual void SetMapName(const char *mapName) = 0;

	virtual void SetPasswordProtected(bool passwordProtected) = 0;

	virtual void SetSpectatorPort(uint16 spectatorPort) = 0;

	virtual void SetSpectatorServerName(const char *spectatorServerName) = 0;

	virtual void ClearAllKeyValues() = 0;

	virtual void SetKeyValue(const char *key, const char *value) = 0;

	virtual void SetRegion(const char *region) = 0;

	virtual bool SendUserConnectAndAuthenticate(uint32 IPClient,
					    const void *authBlob,
					    uint32 authBlobSize,
					    CSteamID *steamIDUser) = 0;

	virtual CSteamID CreateUnauthenticatedUserConnection() = 0;

	virtual void SendUserDisconnect(CSteamID steamIDUser) = 0;

	virtual bool BUpdateUserData(CSteamID steamIDUser,
			     const char *playerName,
			     uint32 score) = 0;

	virtual AuthTicket GetAuthSessionTicket(void *ticket,
											int maxTicket,
											uint32 *ticketi) = 0;

	virtual BeginAuthSessionResult BeginAuthSession(const void *authTicket,
													int authTicketi,
													CSteamID steamID) = 0;

	virtual void EndAuthSession(CSteamID steamID) = 0;
	
	virtual void CancelAuthTicket(AuthTicket authTicket) = 0;

	virtual bool HandleIncomingPacket(const void *data,
									  int datai,
									  uint32 srcIP,
									  uint16 srcPort) = 0;

	virtual int GetNextOutgoingPacket(void *out,
									  int maxOut,
									  uint32 *netAdr,
									  uint16 *port) = 0;

	virtual void EnableHeartbeats(bool active) = 0;

	virtual void SetHeartbeatInterval(int heartbeatInterval) = 0;

	virtual void ForceHeartbeat() = 0;

	virtual SteamAPICall AssociateWithClan(CSteamID steamIDClan) = 0;

	virtual SteamAPICall ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer) = 0;

	virtual bool BSetServerType(uint32 serverFlags,
			    uint32 gameIP,
			    uint16 gamePort,
			    uint16 spectatorPort,
			    uint16 queryPort,
			    const char *gameDir,
			    const char *version,
			    bool LANMode) = 0;

	virtual void UpdateServerStatus(int players,
				int playersMax,
				int botPlayers,
				const char *serverName,
				const char *spectatorServerName,
				const char *mapName) = 0;

	virtual void UpdateSpectatorPort(uint16 spectatorPort) = 0;

	virtual void SetGameTags(const char *gameTags) = 0;

	virtual void GetGameplayStats() = 0;

	virtual SteamAPICall GetServerReputation() = 0;

	virtual bool RequestUserGroupStatus(CSteamID steamIDUser,
				    CSteamID steamIDGroup) = 0;

	virtual uint32 GetPublicIP() = 0;

	virtual void SetGameData(const char *gameData) = 0; 

	virtual UserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID,
							AppId appID) = 0;
};

/**
 * interface for SteamGameServerStats 001
 */
class ISteamGameServerStats {
public:
	virtual SteamAPICall RequestUserStats(CSteamID steamIDUser) = 0;

	virtual bool GetUserStat(CSteamID steamIDUser, const char *name, int32 *data) = 0;

	virtual bool GetUserStat(CSteamID steamIDUser, const char *name, float *data) = 0;

	virtual bool GetUserAchievement(CSteamID steamIDUser,
				const char *name,
				bool *achieved) = 0;

	virtual bool SetUserStat(CSteamID steamIDUser, const char *name, int32 data) = 0;

	virtual bool SetUserStat(CSteamID steamIDUser, const char *name, float data) = 0;

	virtual bool UpdateUserAvgRateStat(CSteamID steamIDUser, 
				   const char *name, 
				   float countThisSession, 
				   double sessionLength) = 0;

	virtual bool SetUserAchievement(CSteamID steamIDUser, const char *name) = 0;

	virtual bool ClearUserAchievement(CSteamID steamIDUser, const char *name) = 0;

	virtual SteamAPICall StoreUserStats(CSteamID steamIDUser) = 0;
};

class CSteamGameServer : public ISteamGameServer {
public:
	static CSteamGameServer& getInstance() {
		static CSteamGameServer instance;
		return instance;
	}

	bool InitGameServer(uint32 ip,
						uint16 gamePort,
						uint16 queryPort,
						uint32 flags,
						AppId gameAppId,
						const char *versionString);

	void SetProduct(const char *product);

	void SetGameDescription(const char *gameDescription);

	void SetModDir(const char *modDir);

	void SetDedicatedServer(bool dedicated);

	void LogOn();

	void LogOnAnonymous();

	void LogOff();

	bool BLoggedOn();

	bool BSecure();

	CSteamID GetSteamID();

	bool WasRestartRequested();

	void SetMaxPlayerCount(int playersMax);

	void SetBotPlayerCount(int botplayers);

	void SetServerName(const char *serverName);

	void SetMapName(const char *mapName);

	void SetPasswordProtected(bool passwordProtected);

	void SetSpectatorPort(uint16 spectatorPort);

	void SetSpectatorServerName(const char *spectatorServerName);

	void ClearAllKeyValues();

	void SetKeyValue(const char *key, const char *value);

	void SetRegion(const char *region);

	bool SendUserConnectAndAuthenticate(uint32 IPClient,
					    const void *authBlob,
					    uint32 authBlobSize,
					    CSteamID *steamIDUser);

	CSteamID CreateUnauthenticatedUserConnection();

	void SendUserDisconnect(CSteamID steamIDUser);

	bool BUpdateUserData(CSteamID steamIDUser,
			     const char *playerName,
			     uint32 score);

	AuthTicket GetAuthSessionTicket(void *ticket,
									int maxTicket,
									uint32 *ticketi);

	BeginAuthSessionResult BeginAuthSession(const void *authTicket,
											int authTicketi,
											CSteamID steamID);

	void EndAuthSession(CSteamID steamID);
	
	void CancelAuthTicket(AuthTicket authTicket);

	bool HandleIncomingPacket(const void *data,
							  int datai,
							  uint32 srcIP,
							  uint16 srcPort);

	int GetNextOutgoingPacket(void *out,
							  int maxOut,
							  uint32 *netAdr,
							  uint16 *port);

	void EnableHeartbeats(bool active);

	void SetHeartbeatInterval(int heartbeatInterval);

	void ForceHeartbeat();

	SteamAPICall AssociateWithClan(CSteamID steamIDClan);

	SteamAPICall ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer);

	bool BSetServerType(uint32 serverFlags,
			    uint32 gameIP,
			    uint16 gamePort,
			    uint16 spectatorPort,
			    uint16 queryPort,
			    const char *gameDir,
			    const char *version,
			    bool LANMode);

	void UpdateServerStatus(int players,
				int playersMax,
				int botPlayers,
				const char *serverName,
				const char *spectatorServerName,
				const char *mapName);

	void UpdateSpectatorPort(uint16 spectatorPort);

	void SetGameTags(const char *gameTags);

	void GetGameplayStats();

	SteamAPICall GetServerReputation();

	bool RequestUserGroupStatus(CSteamID steamIDUser,
				    CSteamID steamIDGroup);

	uint32 GetPublicIP();

	void SetGameData(const char *gameData); 

	UserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID,
							AppId appID);
};

class CSteamGameServerStats : public ISteamGameServerStats {
public:
	static CSteamGameServerStats& getInstance() {
		static CSteamGameServerStats instance;
		return instance;
	}

	SteamAPICall RequestUserStats(CSteamID steamIDUser);

	bool GetUserStat(CSteamID steamIDUser, const char *name, int32 *data);

	bool GetUserStat(CSteamID steamIDUser, const char *name, float *data);

	bool GetUserAchievement(CSteamID steamIDUser,
				const char *name,
				bool *achieved);

	bool SetUserStat(CSteamID steamIDUser, const char *name, int32 data);

	bool SetUserStat(CSteamID steamIDUser, const char *name, float data);

	bool UpdateUserAvgRateStat(CSteamID steamIDUser, 
				   const char *name, 
				   float countThisSession, 
				   double sessionLength);

	bool SetUserAchievement(CSteamID steamIDUser, const char *name);

	bool ClearUserAchievement(CSteamID steamIDUser, const char *name);

	SteamAPICall StoreUserStats(CSteamID steamIDUser);
};

#endif /* STEAMTRICKER_STEAMAPI_GAMESERVER_H_ */
