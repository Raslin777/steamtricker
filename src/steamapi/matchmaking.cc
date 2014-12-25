#include "api.h"
#include "matchmaking.h"


int CSteamMatchmaking::GetFavoriteGameCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetFavoriteGameCount);
	return 0;
}

bool CSteamMatchmaking::GetFavoriteGame(int game,
					AppId *appID,
					uint32 *ip,
					uint16 *connPort,
					uint16 *queryPort,
					uint32 *flags,
					uint32 *time32LastPlayedOnServer)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetFavoriteGame,
		game, appID, ip, connPort, queryPort, flags, time32LastPlayedOnServer);
	return true;
}

int CSteamMatchmaking::AddFavoriteGame(AppId appID,
				       uint32 ip,
				       uint16 connPort,
				       uint16 queryPort,
				       uint32 flags,
				       uint32 time32LastPlayedOnServer)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, AddFavoriteGame,
		appID, ip, connPort, queryPort, flags, time32LastPlayedOnServer);
	return 0;
}

bool CSteamMatchmaking::RemoveFavoriteGame(AppId appID,
					   uint32 ip,
					   uint16 connPort,
					   uint16 queryPort,
					   uint32 flags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, RemoveFavoriteGame,
		appID, ip, connPort, queryPort, flags);
	return true;
}

SteamAPICall CSteamMatchmaking::RequestLobbyList()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, RequestLobbyList);
	return SteamAPICallInvalid;
}

void CSteamMatchmaking::AddRequestLobbyListStringFilter(
		const char *keyToMatch,
		const char *valueToMatch,
		LobbyComparison comparisonType)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, AddRequestLobbyListStringFilter,
		keyToMatch, valueToMatch, comparisonType);
}

void CSteamMatchmaking::AddRequestLobbyListNumericalFilter(
		const char *keyToMatch,
		int valueToMatch,
		LobbyComparison comparisonType)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, AddRequestLobbyListNumericalFilter,
		keyToMatch, valueToMatch, comparisonType);
}

void CSteamMatchmaking::AddRequestLobbyListNearValueFilter(
		const char *keyToMatch,
		int valueToBeCloseTo)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, AddRequestLobbyListNearValueFilter,
		keyToMatch, valueToBeCloseTo);
}

void CSteamMatchmaking::AddRequestLobbyListFilterSlotsAvailable(
		int slotsAvailable)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, AddRequestLobbyListFilterSlotsAvailable,
		slotsAvailable);
}

void CSteamMatchmaking::AddRequestLobbyListDistanceFilter(
		LobbyDistanceFilter lobbyDistanceFilter )
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, AddRequestLobbyListDistanceFilter,
		lobbyDistanceFilter);
}

void CSteamMatchmaking::AddRequestLobbyListResultCountFilter(int maxResults)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, AddRequestLobbyListResultCountFilter,
		maxResults);
}

void CSteamMatchmaking::AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, AddRequestLobbyListCompatibleMembersFilter,
	                                     steamIDLobby);
}

CSteamID CSteamMatchmaking::GetLobbyByIndex(int lobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyByIndex,
					     lobby);
	return CSteamID(static_cast<uint64>(0));
}

SteamAPICall CSteamMatchmaking::CreateLobby(LobbyType lobbyType, int maxMembers)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, CreateLobby,
					     lobbyType, maxMembers);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamMatchmaking::JoinLobby(CSteamID steamIDLobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, JoinLobby,
					     steamIDLobby);
	return SteamAPICallInvalid;
}

void CSteamMatchmaking::LeaveLobby(CSteamID steamIDLobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, LeaveLobby,
					     steamIDLobby);
}

bool CSteamMatchmaking::InviteUserToLobby(CSteamID steamIDLobby,
					  CSteamID steamIDInvitee)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, InviteUserToLobby,
					     steamIDLobby, steamIDInvitee);
	return true;
}

int CSteamMatchmaking::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetNumLobbyMembers,
					     steamIDLobby);
	return 0;
}

CSteamID CSteamMatchmaking::GetLobbyMemberByIndex(CSteamID steamIDLobby,
						  int member)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyMemberByIndex,
					     steamIDLobby, member);
	return CSteamID(static_cast<uint64>(0));
}

const char *CSteamMatchmaking::GetLobbyData(CSteamID steamIDLobby,
					    const char *key)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyData,
					     steamIDLobby, key);
	return "LobbyData";
}

bool CSteamMatchmaking::SetLobbyData(CSteamID steamIDLobby,
				     const char *key,
				     const char *value)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, SetLobbyData,
					     steamIDLobby, key, value);
	return true;
}

int CSteamMatchmaking::GetLobbyDataCount(CSteamID steamIDLobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyDataCount,
					     steamIDLobby);
	return 0;
}

bool CSteamMatchmaking::GetLobbyDataByIndex(CSteamID steamIDLobby,
					    int lobbyData,
					    char *key,
					    int keyBufferSize,
					    char *value,
					    int valueBufferSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyDataByIndex,
					     steamIDLobby, lobbyData, key,
					     keyBufferSize, value, valueBufferSize);
	*value = 0;
	return true;
}

bool CSteamMatchmaking::DeleteLobbyData(CSteamID steamIDLobby,
					const char *key)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, DeleteLobbyData,
					     steamIDLobby, key);
	return true;
}

const char *CSteamMatchmaking::GetLobbyMemberData(CSteamID steamIDLobby,
						  CSteamID steamIDUser,
						  const char *key)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyMemberData,
					     steamIDLobby, steamIDUser, key);
	return "LobbyMemberData";
}

void CSteamMatchmaking::SetLobbyMemberData(CSteamID steamIDLobby,
					   const char *key,
					   const char *value)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, SetLobbyMemberData,
					     steamIDLobby, key, value);
}

bool CSteamMatchmaking::SendLobbyChatMsg(CSteamID steamIDLobby,
					 const void *msgBody,
					 int msgBodySize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, SendLobbyChatMsg,
					     steamIDLobby, msgBody, msgBodySize);
	return true;
}

int CSteamMatchmaking::GetLobbyChatEntry(CSteamID steamIDLobby,
					 int chatID,
					 CSteamID *steamIDUser,
					 void *data,
					 int dataSize,
					 ChatEntryType *chatEntryType)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyChatEntry,
					     steamIDLobby, chatID, steamIDUser,
					     data, dataSize, chatEntryType);
	*chatEntryType = ChatEntryTypeInvalid;
	return 0;
}

bool CSteamMatchmaking::RequestLobbyData(CSteamID steamIDLobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, RequestLobbyData,
					     steamIDLobby);
	return true;
}

void CSteamMatchmaking::SetLobbyGameServer(CSteamID steamIDLobby,
					   uint32 gameServerIP,
					   uint16 gameServerPort,
					   CSteamID steamIDGameServer)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, SetLobbyGameServer,
					     steamIDLobby, gameServerIP,
					     gameServerPort, steamIDGameServer);
}

bool CSteamMatchmaking::GetLobbyGameServer(CSteamID steamIDLobby,
					   uint32 *gameServerIP,
					   uint16 *gameServerPort,
					   CSteamID *steamIDGameServer)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyGameServer,
					     steamIDLobby, gameServerIP,
					     gameServerPort, steamIDGameServer);
	*gameServerIP = 0;
	*gameServerPort = 0;
	*steamIDGameServer = CSteamID(static_cast<uint64>(0));
	return true;
}

bool CSteamMatchmaking::SetLobbyMemberLimit(CSteamID steamIDLobby,
					    int maxMembers)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, SetLobbyMemberLimit,
					     steamIDLobby, maxMembers);
	return true;
}

int CSteamMatchmaking::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyMemberLimit,
					     steamIDLobby);
	return 0;
}

bool CSteamMatchmaking::SetLobbyType(CSteamID steamIDLobby, LobbyType lobbyType)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, SetLobbyType,
					     steamIDLobby, lobbyType);
	return true;
}

bool CSteamMatchmaking::SetLobbyJoinable(CSteamID steamIDLobby,
					 bool lobbyJoinable)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, SetLobbyJoinable,
					     steamIDLobby, lobbyJoinable);
	return true;
}

CSteamID CSteamMatchmaking::GetLobbyOwner(CSteamID steamIDLobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, GetLobbyOwner,
					     steamIDLobby);
	return CSteamID(static_cast<uint64>(0));
}

bool CSteamMatchmaking::SetLobbyOwner(CSteamID steamIDLobby,
				      CSteamID steamIDNewOwner)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, SetLobbyOwner,
					     steamIDLobby, steamIDNewOwner);
	return true;
}

bool CSteamMatchmaking::SetLinkedLobby(
        CSteamID steamIDLobby,
        CSteamID steamIDLobbyDependent)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmaking, SetLinkedLobby,
					     steamIDLobby, steamIDLobbyDependent);
	return true;
}

ServerListRequest CSteamMatchmakingServers::RequestInternetServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, RequestInternetServerList,
					     app, filters, filtersSize,
					     requestServersResponse);
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestLANServerList(
		AppId app,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, RequestLANServerList,
					     app, requestServersResponse);
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestFriendsServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, RequestFriendsServerList,
					     app, filters, filtersSize,
					     requestServersResponse);
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestFavoritesServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, RequestFavoritesServerList,
					     app, filters, filtersSize,
					     requestServersResponse);
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestHistoryServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, RequestHistoryServerList,
					     app, filters, filtersSize,
					     requestServersResponse);
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestSpectatorServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, RequestSpectatorServerList,
					     app, filters, filtersSize,
					     requestServersResponse);
	return NULL;
}

void CSteamMatchmakingServers::ReleaseRequest(ServerListRequest serverListRequest)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, ReleaseRequest,
					     serverListRequest);
}

GameServerItem *CSteamMatchmakingServers::GetServerDetails(
		ServerListRequest request,
		int server)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, GetServerDetails,
					     request, server);
	return NULL;
}

void CSteamMatchmakingServers::CancelQuery(ServerListRequest request)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, CancelQuery,
					     request);
}

void CSteamMatchmakingServers::RefreshQuery(ServerListRequest request)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, RefreshQuery,
					     request);
}

bool CSteamMatchmakingServers::IsRefreshing(ServerListRequest request)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, IsRefreshing,
					     request);
	return true;
}

int CSteamMatchmakingServers::GetServerCount(ServerListRequest request)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, GetServerCount,
					     request);
	return 0;
}

void CSteamMatchmakingServers::RefreshServer(ServerListRequest request,
					     int server)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, RefreshServer,
					     request, server);
}

ServerQuery CSteamMatchmakingServers::PingServer(
		uint32 ip,
		uint16 port,
		ISteamMatchmakingPingResponse *requestServersResponse )
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, PingServer,
					     ip, port, requestServersResponse);
	return 0;
}

ServerQuery CSteamMatchmakingServers::PlayerDetails(
		uint32 ip,
		uint16 port,
		ISteamMatchmakingPlayersResponse *requestServersResponse)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, PlayerDetails,
					     ip, port, requestServersResponse);
	return 0;
}

ServerQuery CSteamMatchmakingServers::ServerRules(
		uint32 ip,
		uint16 port,
		ISteamMatchmakingRulesResponse *requestServersResponse)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, ServerRules,
					     ip, port, requestServersResponse);
	return 0;
}

void CSteamMatchmakingServers::CancelServerQuery(ServerQuery serverQuery)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMatchmakingServers, CancelServerQuery,
					     serverQuery);
}

