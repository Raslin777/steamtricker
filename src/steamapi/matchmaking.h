#ifndef STEAMTRICKER_STEAMAPI_MATCHMAKING_H_
#define STEAMTRICKER_STEAMAPI_MATCHMAKING_H_

#include "types.h"

class MatchMakingKeyValuePair {
public:
	MatchMakingKeyValuePair()
	{
		mKey[0] = 0;
		mValue[0] = 0;
	}

	MatchMakingKeyValuePair(const char *key, const char *value)
	{
		strncpy(mKey, key, sizeof(mKey));
		strncpy(mValue, value, sizeof(mValue));
	}

	char mKey[256];
	char mValue[256];
};

class ServerNetAddr {
public:
	void Init(unsigned int ip, uint16 queryPort, uint16 connectionPort)
	{
		mIP = ip;
		mQueryPort = queryPort;
		mConnectionPort = connectionPort;
	}

	uint16 GetQueryPort() const
	{
		return mQueryPort;
	}

	void SetQueryPort(uint16 port)
	{
		mQueryPort = port;
	}

	uint16 GetConnectionPort() const
	{
		return mConnectionPort;
	}

	void SetConnectionPort(uint16 port)
	{
		mConnectionPort = port;
	}

	uint32 GetIP() const
	{
		return mIP;
	}

	void SetIP(uint32 ip)
	{
		mIP = ip;
	}

	const char *GetConnectionAddressString() const
	{
		return ToString(mIP, mConnectionPort);
	}

	const char *GetQueryAddressString() const
	{
		return ToString(mIP, mQueryPort);
	}

	bool operator<(const ServerNetAddr &netadr) const
	{
		return (mIP < netadr.mIP) ||
		       (mIP == netadr.mIP && mQueryPort < netadr.mQueryPort);
	}

	void operator=(const ServerNetAddr &that)
	{
		mConnectionPort = that.mConnectionPort;
		mQueryPort = that.mQueryPort;
		mIP = that.mIP;
	}

private:
	const char *ToString(uint32 ip, uint16 port) const
	{
		static char s[4][64];
		static int buf = 0;
		unsigned char *byte = (unsigned char *)&ip;
		snprintf(s[buf],
			 sizeof(s[buf]),
			 "%u.%u.%u.%u:%i",
			 (int)(byte[3]),
			 (int)(byte[2]),
			 (int)(byte[1]),
			 (int)(byte[0]),
			 port);
		const char *ret = s[buf];
		++buf;
		buf %= ((sizeof(s)/sizeof(s[0])));
		return ret;
	}

	uint16 mConnectionPort;
	uint16 mQueryPort;
	uint32 mIP;
};

// FIXME
class GameServerItem {
public:
	GameServerItem();

	const char* GetName() const;
	void SetName(const char *name);

	ServerNetAddr m_NetAdr;
	int m_nPing;
	bool m_bHadSuccessfulResponse;
	bool m_bDoNotRefresh;
	char m_szGameDir[32];
	char m_szMap[32];
	char m_szGameDescription[64];
	uint32 m_nAppID;
	int m_nPlayers;
	int m_nMaxPlayers;
	int m_nBotPlayers;
	bool m_bPassword;
	bool m_bSecure;
	uint32 m_ulTimeLastPlayed;
	int m_nServerVersion;

private:
	char m_szServerName[64];

public:
	char m_szGameTags[128];
	CSteamID m_steamID;
};

class ISteamMatchmakingServerListResponse {
public:
	virtual void ServerResponded(ServerListRequest request,
				     int server) = 0;

	virtual void ServerFailedToRespond(ServerListRequest request,
					   int server) = 0;

	virtual void RefreshComplete(ServerListRequest request,
				     MatchMakingServerResponse response) = 0;
};

class ISteamMatchmakingPlayersResponse
{
public:
	virtual void AddPlayerToList(const char *name,
				     int score,
				     float timePlayed) = 0;

	virtual void PlayersFailedToRespond() = 0;

	virtual void PlayersRefreshComplete() = 0;
};

class ISteamMatchmakingPingResponse
{
public:
	virtual void ServerResponded(GameServerItem &server) = 0;

	virtual void ServerFailedToRespond() = 0;
};

class ISteamMatchmakingRulesResponse
{
public:
	virtual void RulesResponded(const char *rule, const char *value ) = 0;

	virtual void RulesFailedToRespond() = 0;

	virtual void RulesRefreshComplete() = 0;
};

/**
 * interface for SteamMatchmaking version 009
 */
class ISteamMatchmaking {
public:
	virtual int GetFavoriteGameCount() = 0;

	virtual bool GetFavoriteGame(int game,
			     AppId *appID,
			     uint32 *ip,
			     uint16 *connPort,
			     uint16 *queryPort,
			     uint32 *flags,
			     uint32 *time32LastPlayedOnServer) = 0;

	virtual int AddFavoriteGame(AppId appID,
			    uint32 ip,
			    uint16 connPort,
			    uint16 queryPort,
			    uint32 flags,
			    uint32 time32LastPlayedOnServer) = 0;

	virtual bool RemoveFavoriteGame(AppId appID,
				uint32 ip,
				uint16 connPort,
				uint16 queryPort,
				uint32 flags) = 0;

	virtual SteamAPICall RequestLobbyList() = 0;

	virtual void AddRequestLobbyListStringFilter(const char *keyToMatch,
					     const char *valueToMatch,
					     LobbyComparison comparisonType) = 0;

	virtual void AddRequestLobbyListNumericalFilter(const char *keyToMatch,
						int valueToMatch,
						LobbyComparison comparisonType) = 0;

	virtual void AddRequestLobbyListNearValueFilter(const char *keyToMatch,
						int valueToBeCloseTo) = 0;

	virtual void AddRequestLobbyListFilterSlotsAvailable(int slotsAvailable) = 0;

	virtual void AddRequestLobbyListDistanceFilter(LobbyDistanceFilter lobbyDistanceFilter) = 0;

	virtual void AddRequestLobbyListResultCountFilter(int maxResults) = 0;

	virtual void AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby) = 0;

	virtual CSteamID GetLobbyByIndex(int lobby) = 0;

	virtual SteamAPICall CreateLobby(LobbyType lobbyType, int maxMembers) = 0;

	virtual SteamAPICall JoinLobby(CSteamID steamIDLobby) = 0;

	virtual void LeaveLobby(CSteamID steamIDLobby) = 0;

	virtual bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) = 0;

	virtual int GetNumLobbyMembers(CSteamID steamIDLobby) = 0;

	virtual CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int member) = 0;

	virtual const char *GetLobbyData(CSteamID steamIDLobby, const char *key) = 0;

	virtual bool SetLobbyData(CSteamID steamIDLobby,
			  const char *key,
			  const char *value ) = 0;

	virtual int GetLobbyDataCount(CSteamID steamIDLobby) = 0;

	virtual bool GetLobbyDataByIndex(CSteamID steamIDLobby,
				 int lobbyData,
				 char *key,
				 int keyBufferSize,
				 char *value,
				 int valueBufferSize) = 0;

	virtual bool DeleteLobbyData(CSteamID steamIDLobby, const char *key) = 0;

	virtual const char *GetLobbyMemberData(CSteamID steamIDLobby,
				       CSteamID steamIDUser,
				       const char *key) = 0;

	virtual void SetLobbyMemberData(CSteamID steamIDLobby,
				const char *key,
				const char *value) = 0;

	virtual bool SendLobbyChatMsg(CSteamID steamIDLobby,
			      const void *msgBody,
			      int msgBodySize) = 0;

	virtual int GetLobbyChatEntry(CSteamID steamIDLobby,
			      int chatID,
			      CSteamID *steamIDUser,
			      void *data,
			      int dataSize,
			      ChatEntryType *chatEntryType) = 0;

	virtual bool RequestLobbyData(CSteamID steamIDLobby) = 0;

	virtual void SetLobbyGameServer(CSteamID steamIDLobby,
				uint32 gameServerIP,
				uint16 gameServerPort,
				CSteamID steamIDGameServer) = 0;

	virtual bool GetLobbyGameServer(CSteamID steamIDLobby,
				uint32 *gameServerIP,
				uint16 *gameServerPort,
				CSteamID *steamIDGameServer) = 0;

	virtual bool SetLobbyMemberLimit(CSteamID steamIDLobby, int maxMembers) = 0;

	virtual int GetLobbyMemberLimit(CSteamID steamIDLobby) = 0;

	virtual bool SetLobbyType(CSteamID steamIDLobby, LobbyType lobbyType) = 0;

	virtual bool SetLobbyJoinable(CSteamID steamIDLobby, bool lobbyJoinable) = 0;

	virtual CSteamID GetLobbyOwner(CSteamID steamIDLobby) = 0;

	virtual bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner) = 0;

	virtual bool SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobbyDependent) = 0;
};


/**
 * interface for SteamMatchMakingServers version 002
 */
class ISteamMatchmakingServers {
public:
	virtual ServerListRequest RequestInternetServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse) = 0;

	virtual ServerListRequest RequestLANServerList(
		AppId app,
		ISteamMatchmakingServerListResponse *requestServersResponse) = 0;

	virtual ServerListRequest RequestFriendsServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse) = 0;

	virtual ServerListRequest RequestFavoritesServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse) = 0;

	virtual ServerListRequest RequestHistoryServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse) = 0;

	virtual ServerListRequest RequestSpectatorServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse) = 0;

	virtual void ReleaseRequest(ServerListRequest serverListRequest) = 0;

	virtual GameServerItem *GetServerDetails(ServerListRequest request, int server) = 0;

	virtual void CancelQuery(ServerListRequest request) = 0;

	virtual void RefreshQuery(ServerListRequest request) = 0;

	virtual bool IsRefreshing(ServerListRequest request) = 0;

	virtual int GetServerCount(ServerListRequest request) = 0;

	virtual void RefreshServer(ServerListRequest request, int server) = 0;

	virtual ServerQuery PingServer(uint32 ip,
			       uint16 port,
			       ISteamMatchmakingPingResponse *requestServersResponse) = 0;

	virtual ServerQuery PlayerDetails(uint32 ip,
				  uint16 port,
				  ISteamMatchmakingPlayersResponse *requestServersResponse) = 0;

	virtual ServerQuery ServerRules(uint32 ip,
				uint16 port,
				ISteamMatchmakingRulesResponse *requestServersResponse) = 0;

	virtual void CancelServerQuery(ServerQuery serverQuery) = 0;
};

class CSteamMatchmaking : public ISteamMatchmaking {
public:
	static CSteamMatchmaking& getInstance() {
		static CSteamMatchmaking instance;
		return instance;
	}

	int GetFavoriteGameCount();

	bool GetFavoriteGame(int game,
			     AppId *appID,
			     uint32 *ip,
			     uint16 *connPort,
			     uint16 *queryPort,
			     uint32 *flags,
			     uint32 *time32LastPlayedOnServer);

	int AddFavoriteGame(AppId appID,
			    uint32 ip,
			    uint16 connPort,
			    uint16 queryPort,
			    uint32 flags,
			    uint32 time32LastPlayedOnServer);

	bool RemoveFavoriteGame(AppId appID,
				uint32 ip,
				uint16 connPort,
				uint16 queryPort,
				uint32 flags);

	SteamAPICall RequestLobbyList();

	void AddRequestLobbyListStringFilter(const char *keyToMatch,
					     const char *valueToMatch,
					     LobbyComparison comparisonType);

	void AddRequestLobbyListNumericalFilter(const char *keyToMatch,
						int valueToMatch,
						LobbyComparison comparisonType);

	void AddRequestLobbyListNearValueFilter(const char *keyToMatch,
						int valueToBeCloseTo);

	void AddRequestLobbyListFilterSlotsAvailable(int slotsAvailable);

	void AddRequestLobbyListDistanceFilter(LobbyDistanceFilter lobbyDistanceFilter);

	void AddRequestLobbyListResultCountFilter(int maxResults);

	void AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby);

	CSteamID GetLobbyByIndex(int lobby);

	SteamAPICall CreateLobby(LobbyType lobbyType, int maxMembers);

	SteamAPICall JoinLobby(CSteamID steamIDLobby);

	void LeaveLobby(CSteamID steamIDLobby);

	bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee);

	int GetNumLobbyMembers(CSteamID steamIDLobby);

	CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int member);

	const char *GetLobbyData(CSteamID steamIDLobby, const char *key);

	bool SetLobbyData(CSteamID steamIDLobby,
			  const char *key,
			  const char *value );

	int GetLobbyDataCount(CSteamID steamIDLobby);

	bool GetLobbyDataByIndex(CSteamID steamIDLobby,
				 int lobbyData,
				 char *key,
				 int keyBufferSize,
				 char *value,
				 int valueBufferSize);

	bool DeleteLobbyData(CSteamID steamIDLobby, const char *key);

	const char *GetLobbyMemberData(CSteamID steamIDLobby,
				       CSteamID steamIDUser,
				       const char *key);

	void SetLobbyMemberData(CSteamID steamIDLobby,
				const char *key,
				const char *value);

	bool SendLobbyChatMsg(CSteamID steamIDLobby,
			      const void *msgBody,
			      int msgBodySize);

	int GetLobbyChatEntry(CSteamID steamIDLobby,
			      int chatID,
			      CSteamID *steamIDUser,
			      void *data,
			      int dataSize,
			      ChatEntryType *chatEntryType);

	bool RequestLobbyData(CSteamID steamIDLobby);

	void SetLobbyGameServer(CSteamID steamIDLobby,
				uint32 gameServerIP,
				uint16 gameServerPort,
				CSteamID steamIDGameServer);

	bool GetLobbyGameServer(CSteamID steamIDLobby,
				uint32 *gameServerIP,
				uint16 *gameServerPort,
				CSteamID *steamIDGameServer);

	bool SetLobbyMemberLimit(CSteamID steamIDLobby, int maxMembers);

	int GetLobbyMemberLimit(CSteamID steamIDLobby);

	bool SetLobbyType(CSteamID steamIDLobby, LobbyType lobbyType);

	bool SetLobbyJoinable(CSteamID steamIDLobby, bool lobbyJoinable);

	CSteamID GetLobbyOwner(CSteamID steamIDLobby);

	bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner);

	bool SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobbyDependent);
};

class CSteamMatchmakingServers : public ISteamMatchmakingServers {
public:
	static CSteamMatchmakingServers& getInstance() {
		static CSteamMatchmakingServers instance;
		return instance;
	}

	ServerListRequest RequestInternetServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse);

	ServerListRequest RequestLANServerList(
		AppId app,
		ISteamMatchmakingServerListResponse *requestServersResponse);

	ServerListRequest RequestFriendsServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse);

	ServerListRequest RequestFavoritesServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse);

	ServerListRequest RequestHistoryServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse);

	ServerListRequest RequestSpectatorServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse);

	void ReleaseRequest(ServerListRequest serverListRequest);

	GameServerItem *GetServerDetails(ServerListRequest request, int server);

	void CancelQuery(ServerListRequest request);

	void RefreshQuery(ServerListRequest request);

	bool IsRefreshing(ServerListRequest request);

	int GetServerCount(ServerListRequest request);

	void RefreshServer(ServerListRequest request, int server);

	ServerQuery PingServer(uint32 ip,
			       uint16 port,
			       ISteamMatchmakingPingResponse *requestServersResponse);

	ServerQuery PlayerDetails(uint32 ip,
				  uint16 port,
				  ISteamMatchmakingPlayersResponse *requestServersResponse);

	ServerQuery ServerRules(uint32 ip,
				uint16 port,
				ISteamMatchmakingRulesResponse *requestServersResponse);

	void CancelServerQuery(ServerQuery serverQuery); 
};

#endif /* STEAMTRICKER_STEAMAPI_MATCHMAKING_H_ */
