#include "api.h"
#include "gameserver.h"

bool CSteamGameServer::InitGameServer(
		uint32 ip,
		uint16 gamePort,
		uint16 queryPort,
		uint32 flags,
		AppId gameAppId,
		const char *versionString)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, InitGameServer,
					     ip, gamePort, queryPort,
					     flags, gameAppId, versionString);
	return true;
}

void CSteamGameServer::SetProduct(const char *product)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetProduct,
					     product);
}

void CSteamGameServer::SetGameDescription(const char *gameDescription)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetGameDescription,
					     gameDescription);
}

void CSteamGameServer::SetModDir(const char *modDir)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetModDir,
					     modDir);
}

void CSteamGameServer::SetDedicatedServer(bool dedicated)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetDedicatedServer,
					     dedicated);
}

void CSteamGameServer::LogOn()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, LogOn);
}

void CSteamGameServer::LogOnAnonymous()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, LogOnAnonymous);
}

void CSteamGameServer::LogOff()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, LogOff);
}

bool CSteamGameServer::BLoggedOn()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, BLoggedOn);
	return true;
}

bool CSteamGameServer::BSecure()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, BSecure);
	return true;
}

CSteamID CSteamGameServer::GetSteamID()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetSteamID);
	return CSteamID(static_cast<uint64>(0));
}

bool CSteamGameServer::WasRestartRequested()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, WasRestartRequested);
	return false;
}

void CSteamGameServer::SetMaxPlayerCount(int playersMax)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetMaxPlayerCount,
										 playersMax);
}

void CSteamGameServer::SetBotPlayerCount(int botplayers)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetBotPlayerCount,
										 botplayers);
}

void CSteamGameServer::SetServerName(const char *serverName)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetServerName,
										 serverName);
}

void CSteamGameServer::SetMapName(const char *mapName)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetMapName,
										 mapName);
}

void CSteamGameServer::SetPasswordProtected(bool passwordProtected)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetPasswordProtected,
										 passwordProtected);
}

void CSteamGameServer::SetSpectatorPort(uint16 spectatorPort)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetSpectatorPort,
										 spectatorPort);
}

void CSteamGameServer::SetSpectatorServerName(const char *spectatorServerName)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetSpectatorServerName,
										 spectatorServerName);
}

void CSteamGameServer::ClearAllKeyValues()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, ClearAllKeyValues);
}

void CSteamGameServer::SetKeyValue(const char *key, const char *value)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetKeyValue,
										 key, value);
}

void CSteamGameServer::SetRegion(const char *region)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetRegion,
										 region);
}

bool CSteamGameServer::SendUserConnectAndAuthenticate(uint32 IPClient,
						      const void *authBlob,
						      uint32 authBlobSize,
						      CSteamID *steamIDUser)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SendUserConnectAndAuthenticate,
					     IPClient, authBlob, authBlobSize, steamIDUser);
	return true;
}

CSteamID CSteamGameServer::CreateUnauthenticatedUserConnection()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, CreateUnauthenticatedUserConnection);
	return CSteamID(static_cast<uint64>(0));
}

void CSteamGameServer::SendUserDisconnect(CSteamID steamIDUser)
{
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SendUserDisconnect, steamIDUser);
	STUB();
}

bool CSteamGameServer::BUpdateUserData(CSteamID steamIDUser,
				       const char *playerName,
				       uint32 score)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, BUpdateUserData,
					     steamIDUser, playerName, score);
	return true;
}

AuthTicket CSteamGameServer::GetAuthSessionTicket(
		void *ticket,
		int maxTicket,
		uint32 *ticketi)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetAuthSessionTicket,
										 ticket, maxTicket, ticketi);
	return 0;
}

BeginAuthSessionResult CSteamGameServer::BeginAuthSession(
		const void *authTicket,
		int authTicketi,
		CSteamID steamID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, BeginAuthSession,
										 authTicket, authTicketi, steamID);
	return BeginAuthSessionResultOK;
}

void CSteamGameServer::EndAuthSession(CSteamID steamID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, EndAuthSession,
										 steamID);
}

void CSteamGameServer::CancelAuthTicket(AuthTicket authTicket)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, CancelAuthTicket,
										 authTicket);
}

bool CSteamGameServer::HandleIncomingPacket(
		const void *data,
		int datai,
		uint32 srcIP,
		uint16 srcPort)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, HandleIncomingPacket,
										 data, datai,
										 srcIP, srcPort);
	return false;
}

int CSteamGameServer::GetNextOutgoingPacket(
		void *out,
		int maxOut,
		uint32 *netAdr,
		uint16 *port)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetNextOutgoingPacket,
										 out, maxOut,
										 netAdr, port);
	return 0;
}

void CSteamGameServer::EnableHeartbeats(bool active)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, EnableHeartbeats,
										 active);
}

void CSteamGameServer::SetHeartbeatInterval(int heartbeatInterval)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetHeartbeatInterval,
										 heartbeatInterval);
}

void CSteamGameServer::ForceHeartbeat()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, ForceHeartbeat);
}

SteamAPICall CSteamGameServer::AssociateWithClan(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, AssociateWithClan,
										 steamIDClan);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamGameServer::ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, ComputeNewPlayerCompatibility,
										 steamIDNewPlayer);
	return SteamAPICallInvalid;
}

bool CSteamGameServer::BSetServerType(uint32 serverFlags,
				      uint32 gameIP,
				      uint16 gamePort,
				      uint16 spectatorPort,
				      uint16 queryPort,
				      const char *gameDir,
				      const char *version,
				      bool LANMode)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, BSetServerType,
					     serverFlags, gameIP, gamePort,
					     spectatorPort, queryPort, gameDir,
					     version, LANMode);
	return true;
}

void CSteamGameServer::UpdateServerStatus(int players,
					  int playersMax,
					  int botPlayers,
					  const char *serverName,
					  const char *spectatorServerName,
					  const char *mapName)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, UpdateServerStatus,
					     players, playersMax, botPlayers,
					     serverName, spectatorServerName,
					     mapName);
}

void CSteamGameServer::UpdateSpectatorPort(uint16 spectatorPort)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, UpdateSpectatorPort,
					     spectatorPort);
}

void CSteamGameServer::SetGameTags(const char *gameTags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetGameTags,
					     gameTags);
}

void CSteamGameServer::GetGameplayStats()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetGameplayStats);
}

SteamAPICall CSteamGameServer::GetServerReputation()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetServerReputation);
	return SteamAPICallInvalid;
}

bool CSteamGameServer::RequestUserGroupStatus(CSteamID steamIDUser,
					      CSteamID steamIDGroup)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, RequestUserGroupStatus,
					     steamIDUser, steamIDGroup);
	return true;
}

uint32 CSteamGameServer::GetPublicIP()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetPublicIP);
	return 0;
}

void CSteamGameServer::SetGameData(const char *gameData)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetGameData,
					     gameData);
}

UserHasLicenseForAppResult CSteamGameServer::UserHasLicenseForApp(CSteamID steamID,
								  AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, UserHasLicenseForApp,
					     steamID, appID);
	return UserHasLicenseResultHasLicense;
}

SteamAPICall CSteamGameServerStats::RequestUserStats(CSteamID steamIDUser)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, RequestUserStats,
					     steamIDUser);
	return SteamAPICallInvalid;
}

bool CSteamGameServerStats::GetUserStat(CSteamID steamIDUser,
					const char *name,
					int32 *data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, GetUserStat,
					     steamIDUser, name, data);
	*data = 0;
	return true;
}

bool CSteamGameServerStats::GetUserStat(CSteamID steamIDUser,
					const char *name,
					float *data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, GetUserStat,
					     steamIDUser, name, data);
	*data = 0;
	return true;
}

bool CSteamGameServerStats::GetUserAchievement(CSteamID steamIDUser,
					       const char *name,
					       bool *achieved)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, GetUserAchievement,
					     steamIDUser, name, achieved); 
	*achieved = true;
	return true;
}

bool CSteamGameServerStats::SetUserStat(CSteamID steamIDUser,
					const char *name,
					int32 data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, SetUserStat,
					     steamIDUser, name, data);
	return true;
}

bool CSteamGameServerStats::SetUserStat(CSteamID steamIDUser,
					const char *name,
					float data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, SetUserStat,
					     steamIDUser, name, data); 
	return true;
}

bool CSteamGameServerStats::UpdateUserAvgRateStat(CSteamID steamIDUser,
						  const char *name,
						  float countThisSession,
						  double sessionLength)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, UpdateUserAvgRateStat,
					     steamIDUser, name, countThisSession,
					     sessionLength);
	return true;
}

bool CSteamGameServerStats::SetUserAchievement(CSteamID steamIDUser,
					       const char *name) {
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, SetUserAchievement,
					     steamIDUser, name);
	return true;
}

bool CSteamGameServerStats::ClearUserAchievement(CSteamID steamIDUser,
						 const char *name)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, ClearUserAchievement,
					     steamIDUser, name);
	return true;
}

SteamAPICall CSteamGameServerStats::StoreUserStats(CSteamID steamIDUser)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, StoreUserStats,
					     steamIDUser);
	return SteamAPICallInvalid;
}
