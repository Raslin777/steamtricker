#include <string>

#include "user.h"
#include "userstats.h"
#include "friends.h"
#include "utils.h"
#include "matchmaking.h"
#include "apps.h"
#include "networking.h"
#include "remotestorage.h"
#include "gameserver.h"
#include "masterserverupdater.h"
#include "api.h"

#include "client.h"

SteamPipeId CSteamClient::CreateSteamPipe()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, CreateSteamPipe);
	return 0;
}

bool CSteamClient::BReleaseSteamPipe(SteamPipeId steamPipe)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, BReleaseSteamPipe,
					     steamPipe);
	return true;
}

SteamUserId CSteamClient::ConnectToGlobalUser(SteamPipeId steamPipe)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, ConnectToGlobalUser,
					     steamPipe);
	return 0;
}

SteamUserId CSteamClient::CreateLocalUser(SteamPipeId *steamPipe,
					AccountType accountType)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, CreateLocalUser,
					     steamPipe, accountType);
	return 0;
}

void CSteamClient::ReleaseUser(SteamPipeId steamPipe, SteamUserId user)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, ReleaseUser,
					     steamPipe, user);
}

ISteamUser *CSteamClient::GetISteamUser(SteamUserId steamUser,
					SteamPipeId steamPipe,
					const char *version)
{
	STUB();
	return static_cast<ISteamUser*>(&CSteamUser::getInstance());
}

ISteamGameServer *CSteamClient::GetISteamGameServer(SteamUserId steamUser,
						    SteamPipeId steamPipe,
						    const char *version)
{
	STUB();
	return static_cast<ISteamGameServer*>(&CSteamGameServer::getInstance());
}

void CSteamClient::SetLocalIPBinding(uint32 ip, uint16 port)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, SetLocalIPBinding,
					     ip, port);
}

ISteamFriends *CSteamClient::GetISteamFriends(SteamUserId steamUser,
					      SteamPipeId steamPipe,
					      const char *version)
{
	STUB();
	return static_cast<ISteamFriends*>(&CSteamFriends::getInstance());
}

ISteamUtils *CSteamClient::GetISteamUtils(SteamPipeId steamPipe, const char *version)
{
	STUB();
	return static_cast<ISteamUtils*>(&CSteamUtils::getInstance());
}

ISteamMatchmaking *CSteamClient::GetISteamMatchmaking(SteamUserId steamUser,
						      SteamPipeId steamPipe,
						      const char *version)
{
	STUB();
	return static_cast<ISteamMatchmaking*>(&CSteamMatchmaking::getInstance());
}

ISteamMasterServerUpdater *CSteamClient::GetISteamMasterServerUpdater(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamMasterServerUpdater*>(&CSteamMasterServerUpdater::getInstance());
}

ISteamMatchmakingServers *CSteamClient::GetISteamMatchmakingServers(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamMatchmakingServers*>(&CSteamMatchmakingServers::getInstance());
}

void *CSteamClient::GetISteamGenericInterface(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();

	std::string interface(version);
	if(interface.find("STEAMUSERSTATS") != std::string::npos) {
		return GetISteamUserStats(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMUSER") != std::string::npos) {
		return GetISteamUser(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMGAMESERVERSTATS") != std::string::npos) {
		return GetISteamGameServerStats(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMGAMESERVER") != std::string::npos) {
		return GetISteamGameServer(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMFRIENDS") != std::string::npos) {
		return GetISteamFriends(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMUTILS") != std::string::npos) {
		return GetISteamUtils(steamPipe, version);
	}
	else if(interface.find("STEAMMATCHMAKINGSERVERS") != std::string::npos) {
		return GetISteamMatchmakingServers(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMMATCHMAKING") != std::string::npos) {
		return GetISteamMatchmaking(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMMASTERSERVERUPDATER") != std::string::npos) {
		return GetISteamMasterServerUpdater(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMAPPS") != std::string::npos) {
		return GetISteamApps(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMNETWORKING") != std::string::npos) {
		return GetISteamNetworking(steamUser, steamPipe, version);
	}
	else if(interface.find("STEAMREMOTESTORAGE") != std::string::npos) {
		return GetISteamRemoteStorage(steamUser, steamPipe, version);
	}
	else {
		LOG("unhandled GetISteamGenericInterface %s", version);
	}

	return NULL;
}

ISteamUserStats *CSteamClient::GetISteamUserStats(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamUserStats*>(&CSteamUserStats::getInstance());
}

ISteamGameServerStats *CSteamClient::GetISteamGameServerStats(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamGameServerStats*>(&CSteamGameServerStats::getInstance());
}

ISteamApps *CSteamClient::GetISteamApps(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamApps*>(&CSteamApps::getInstance());
}

ISteamNetworking *CSteamClient::GetISteamNetworking(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamNetworking*>(&CSteamNetworking::getInstance());
}

ISteamRemoteStorage *CSteamClient::GetISteamRemoteStorage(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version )
{
	STUB();
	return static_cast<ISteamRemoteStorage*>(&CSteamRemoteStorage::getInstance());
}

ISteamScreenshots *CSteamClient::GetISteamScreenshots(SteamUserId steamuser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamScreenshots*>(&CSteamScreenshots::getInstance());
}

void CSteamClient::RunFrame()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, RunFrame);
}

uint32 CSteamClient::GetIPCCallCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, GetIPCCallCount);
	return 0;
}

void CSteamClient::SetWarningMessageHook(SteamAPIWarningMessageHook function)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, SetWarningMessageHook,
					     function);
}

bool CSteamClient::BShutdownIfAllPipesClosed()
{
	STUB();
	return true;
}

ISteamHTTP *CSteamClient::GetISteamHTTP(
		SteamUserId steamuser,
		SteamPipeId steamPipe,
		const char *version )
{
	STUB();
	return static_cast<ISteamHTTP*>(&CSteamHTTP::getInstance());
}

ISteamUnifiedMessages *CSteamClient::GetISteamUnifiedMessages(
		SteamUserId steamuser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamUnifiedMessages*>(&CSteamUnifiedMessages::getInstance());
}

ISteamController *CSteamClient::GetISteamController(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamController*>(&CSteamController::getInstance());
}

ISteamUGC *CSteamClient::GetISteamUGC(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamUGC*>(&CSteamUGC::getInstance());
}

ISteamAppList *CSteamClient::GetISteamAppList(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamAppList*>(&CSteamAppList::getInstance());
}

ISteamMusic *CSteamClient::GetISteamMusic(
		SteamUserId steamuser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamMusic*>(&CSteamMusic::getInstance());
}

ISteamMusicRemote *CSteamClient::GetISteamMusicRemote(
		SteamUserId steamuser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamMusicRemote*>(&CSteamMusicRemote::getInstance());
}

ISteamHTMLSurface *CSteamClient::GetISteamHTMLSurface(
		SteamUserId steamuser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamHTMLSurface*>(&CSteamHTMLSurface::getInstance());
}

void CSteamClient::Set_SteamAPI_CPostAPIResultInProcess(
		SteamAPI_PostAPIResultInProcess func)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, Set_SteamAPI_CPostAPIResultInProcess);
}

void CSteamClient::Remove_SteamAPI_CPostAPIResultInProcess(
		SteamAPI_PostAPIResultInProcess func)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, Remove_SteamAPI_CPostAPIResultInProcess);
}

void CSteamClient::Set_SteamAPI_CCheckCallbackRegisteredInProcess(
		SteamAPI_CheckCallbackRegistered func)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamClient, Set_SteamAPI_CCheckCallbackRegisteredInProcess);
}

