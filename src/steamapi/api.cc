#include <hook/hook.h>
#include "api.h"

__STEAMAPI bool
SteamAPI_Init()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_Init);
	return SteamAPI::Init();
}

__STEAMAPI bool
SteamAPI_InitSafe()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_InitSafe);
	return SteamAPI::InitSafe();
}

__STEAMAPI void
SteamAPI_Shutdown()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_Shutdown);
	SteamAPI::Shutdown();
}

__STEAMAPI bool
SteamAPI_IsSteamRunning()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_IsSteamRunning);
	return SteamAPI::IsSteamRunning();
}

__STEAMAPI bool
SteamAPI_RestartAppIfNecessary(uint32 appId)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_RestartAppIfNecessary,
					       appId);
	return false;
}

__STEAMAPI void
SteamAPI_WriteMiniDump(uint32 exceptionCode,
		       void *exceptionInfo,
		       uint32 buildId)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_WriteMiniDump,
					       exceptionCode,
					       exceptionInfo,
					       buildId);
}

__STEAMAPI void
SteamAPI_SetMiniDumpComment(const char *msg)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_SetMiniDumpComment,
					       msg);
}

__STEAMAPI void
SteamAPI_UseBreakpadCrashHandler(char const *version,
				 char const *date,
				 char const *time)
{
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_UseBreakpadCrashHandler,
					       version, date, time);
	STUB();
}

__STEAMAPI ISteamClient *
SteamClient()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamClient);
	return SteamAPI::SteamClient();
}

__STEAMAPI ISteamUser *
SteamUser()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamUser);
	return SteamAPI::SteamUser();
}

__STEAMAPI ISteamFriends *
SteamFriends()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamFriends);
	return SteamAPI::SteamFriends();
}

__STEAMAPI ISteamUtils *
SteamUtils()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamUtils);
	return SteamAPI::SteamUtils();
}

__STEAMAPI ISteamMatchmaking *
SteamMatchmaking()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamMatchmaking);
	return SteamAPI::SteamMatchmaking();
}

__STEAMAPI ISteamUserStats *
SteamUserStats()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamUserStats);
	return SteamAPI::SteamUserStats();
}

__STEAMAPI ISteamApps *
SteamApps()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamApps);
	return SteamAPI::SteamApps();
}

__STEAMAPI ISteamNetworking *
SteamNetworking()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamNetworking);
	return SteamAPI::SteamNetworking();
}

__STEAMAPI ISteamMatchmakingServers *
SteamMatchmakingServers()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamMatchmakingServers);
	return SteamAPI::SteamMatchmakingServers();
}

__STEAMAPI ISteamRemoteStorage *
SteamRemoteStorage()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamRemoteStorage);
	return SteamAPI::SteamRemoteStorage();
}

__STEAMAPI ISteamScreenshots *
SteamScreenshots()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamScreenshots);
	return SteamAPI::SteamScreenshots();
}

__STEAMAPI ISteamHTTP *
SteamHTTP()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamHTTP);
	return SteamAPI::SteamHTTP();
}

__STEAMAPI ISteamUnifiedMessages *
SteamUnifiedMessages()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamUnifiedMessages);
	return SteamAPI::SteamUnifiedMessages();
}

__STEAMAPI ISteamController *
SteamController()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamController);
	return SteamAPI::SteamController();
}

__STEAMAPI ISteamUGC *
SteamUGC()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamUGC);
	return SteamAPI::SteamUGC();
}

__STEAMAPI ISteamAppList *
SteamAppList()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamAppList);
	return SteamAPI::SteamAppList();
}

__STEAMAPI ISteamMusic *
SteamMusic()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamMusic);
	return SteamAPI::SteamMusic();
}

__STEAMAPI ISteamMusicRemote *
SteamMusicRemote()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamMusicRemote);
	return SteamAPI::SteamMusicRemote();
}

__STEAMAPI ISteamHTMLSurface *
SteamHTMLSurface()
{
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamHTMLSurface);
	return SteamAPI::SteamHTMLSurface();
}


class CallbackBase *lastCallback = NULL;

__STEAMAPI void
SteamAPI_RunCallbacks()
{
	// STUB(); // This is annoying and gives no information
		   // it gets called every frame
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_RunCallbacks);
}

__STEAMAPI void
SteamAPI_RegisterCallback(class CallbackBase *callback, int iCallback)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_RegisterCallback,
					       callback, iCallback);
	if(!callback->IsRegistered())
		callback->ToggleRegistered();
}

__STEAMAPI void
SteamAPI_UnregisterCallback(class CallbackBase *callback)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_UnregisterCallback,
					       callback);
	if(callback->IsRegistered())
		callback->ToggleRegistered();
}

__STEAMAPI void
SteamAPI_RegisterCallResult(class CallbackBase *callback,
			    SteamAPICall apiCall)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_RegisterCallResult,
					       callback,
					       apiCall);
	lastCallback = callback;
}

__STEAMAPI void
SteamAPI_UnregisterCallResult(class CallbackBase *callback,
			      SteamAPICall apiCall)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_UnregisterCallResult,
					       callback,
					       apiCall);
}

__STEAMAPI void
Steam_RunCallbacks(SteamPipeId steamPipe, bool gameServerCallbacks)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(Steam_RunCallbacks,
					       steamPipe,
					       gameServerCallbacks);
}

__STEAMAPI void
Steam_RegisterInterfaceFuncs(void *module)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(Steam_RegisterInterfaceFuncs,
					       module);
}

__STEAMAPI SteamUserId
Steam_GetHSteamUserCurrent()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(Steam_GetHSteamUserCurrent);
	return 0;
}

__STEAMAPI const char *
SteamAPI_GetSteamInstallPath()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_GetSteamInstallPath);
	return NULL;
}

__STEAMAPI void
SteamAPI_SetTryCatchCallbacks(bool tryCatchCallbacks)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_SetTryCatchCallbacks,
					       tryCatchCallbacks);
}

__STEAMAPI SteamPipeId
SteamAPI_GetHSteamPipe()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_GetHSteamPipe);
	/* Apparently returns 1 for whatever reason */
	return 1;
}

__STEAMAPI SteamPipeId
GetHSteamPipe()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(GetHSteamPipe);
	/* Apparently returns 1 for whatever reason */
	return 1;
}

__STEAMAPI SteamUserId
GetHSteamUser()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(GetHSteamUser);
	/* Apparently returns 1 for whatever reason */
	return 1;
}

__STEAMAPI SteamUserId
SteamAPI_GetHSteamUser()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamAPI_GetHSteamUser);
	/* Apparently returns 1 for whatever reason */
	return 1;
}

#if GAMESERVER_API
__STEAMAPI bool
SteamGameServer_InitSafe(uint32 ip,
			 uint16 port,
			 uint16 gamePort,
			 uint16 spectatorPort,
			 uint16 queryPort,
			 ServerMode serverMode,
			 const char *gameDir,
			 const char *versionString)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer_InitSafe,
					       ip, port, gamePort,
					       spectatorPort, queryPort,
					       serverMode, gameDir,
					       versionString);
	return true;
}

__STEAMAPI bool
SteamGameServer_Init(uint32 ip,
		     uint16 port,
		     uint16 gamePort,
		     uint16 spectatorPort,
		     uint16 queryPort,
		     ServerMode serverMode,
		     const char *gameDir,
		     const char *versionString)
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer_Init,
					       ip, port, gamePort,
					       spectatorPort, queryPort,
					       serverMode, gameDir,
					       versionString);
	return true;
}

__STEAMAPI ISteamGameServer *
SteamGameServer() {
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamGameServer);
	return NULL;
}

__STEAMAPI ISteamUtils *
SteamGameServerUtils() {
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamUtils);
	return NULL;
}

__STEAMAPI ISteamMasterServerUpdater *
SteamMasterServerUpdater() {
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamMasterServerUpdater);
	return NULL;
}

__STEAMAPI ISteamNetworking *
SteamGameServerNetworking() {
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamNetworking);
	return NULL;
}

__STEAMAPI ISteamGameServerStats *
SteamGameServerStats() {
	STUB();
	REAL_CLASS_IF_IN_REAL_CALL(SteamGameServerStats);
	return NULL;
}

__STEAMAPI void
SteamGameServer_Shutdown() {
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer_Shutdown);
	STUB();
}

__STEAMAPI void
SteamGameServer_RunCallbacks()
{
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer_RunCallbacks);
	STUB();
}

__STEAMAPI bool
SteamGameServer_BSecure() {
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer_BSecure);
	return true;
}

__STEAMAPI uint64
SteamGameServer_GetSteamID()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer_GetSteamID);
	return 0;
}

__STEAMAPI SteamPipeId
SteamGameServer_GetHSteamPipe()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer_GetHSteamPipe);
	return 0;
}

__STEAMAPI SteamUserId
SteamGameServer_GetHSteamUser()
{
	STUB();
	FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer_GetHSteamUser);
	return 0;
}

__STEAMAPI ISteamClient *
g_pSteamClientGameServer; // FIXME
#endif

void
SteamAPI::hookInit()
{
	REGISTER_HOOK(SteamAPI_Init, bool (*)());
	REGISTER_HOOK(SteamAPI_Shutdown, void (*)());
	REGISTER_HOOK(SteamAPI_InitSafe, bool (*)());
	REGISTER_HOOK(SteamAPI_IsSteamRunning, bool (*)());
	REGISTER_HOOK(SteamAPI_RestartAppIfNecessary, bool (*)(uint32));
	REGISTER_HOOK(SteamAPI_WriteMiniDump, void (*)(uint32, void *, uint32 ));
	REGISTER_HOOK(SteamAPI_SetMiniDumpComment, void (*)(const char *));
	REGISTER_HOOK(SteamAPI_UseBreakpadCrashHandler, void (*)(char const *, char const *, char const *));
	REGISTER_HOOK(SteamClient, ISteamClient* (*)());
	REGISTER_HOOK(SteamUser, ISteamUser* (*)());
	REGISTER_HOOK(SteamFriends, ISteamFriends* (*)());
	REGISTER_HOOK(SteamUtils, ISteamUtils* (*)());
	REGISTER_HOOK(SteamMatchmaking, ISteamMatchmaking* (*)());
	REGISTER_HOOK(SteamUserStats, ISteamUserStats* (*)());
	REGISTER_HOOK(SteamApps, ISteamApps* (*)());
	REGISTER_HOOK(SteamNetworking, ISteamNetworking* (*)());
	REGISTER_HOOK(SteamMatchmakingServers, ISteamMatchmakingServers* (*)());
	REGISTER_HOOK(SteamRemoteStorage, ISteamRemoteStorage* (*)());
	REGISTER_HOOK(SteamScreenshots, ISteamScreenshots* (*)());
	REGISTER_HOOK(SteamHTTP, ISteamHTTP* (*)());
	REGISTER_HOOK(SteamUnifiedMessages, ISteamUnifiedMessages* (*)());
	REGISTER_HOOK(SteamController, ISteamController* (*)());
	REGISTER_HOOK(SteamUGC, ISteamUGC* (*)());
	REGISTER_HOOK(SteamAppList, ISteamAppList* (*)());
	REGISTER_HOOK(SteamMusic, ISteamMusic* (*)());
	REGISTER_HOOK(SteamMusicRemote, ISteamMusicRemote* (*)());
	REGISTER_HOOK(SteamHTMLSurface, ISteamHTMLSurface* (*)());
	REGISTER_HOOK(SteamAPI_RunCallbacks, void (*)());
	REGISTER_HOOK(SteamAPI_RegisterCallback, void (*)(class CallbackBase*, int));
	REGISTER_HOOK(SteamAPI_UnregisterCallback, void (*)(class CallbackBase*));
	REGISTER_HOOK(SteamAPI_RegisterCallResult, void (*)(class CallbackBase*, SteamAPICall));
	REGISTER_HOOK(SteamAPI_UnregisterCallResult, void (*)(class CallbackBase*, SteamAPICall));
	REGISTER_HOOK(Steam_RunCallbacks, void (*)(SteamPipeId, bool));
	REGISTER_HOOK(Steam_RegisterInterfaceFuncs, void (*)(void*));
	REGISTER_HOOK(Steam_GetHSteamUserCurrent, SteamUserId (*)());
	REGISTER_HOOK(SteamAPI_GetSteamInstallPath, const char* (*)());
	REGISTER_HOOK(SteamAPI_GetHSteamPipe, SteamPipeId (*)());
	REGISTER_HOOK(SteamAPI_SetTryCatchCallbacks, void (*)(bool));
	REGISTER_HOOK(GetHSteamPipe, SteamPipeId (*)());
	REGISTER_HOOK(GetHSteamUser, SteamUserId (*)());
	REGISTER_HOOK(SteamAPI_GetHSteamUser, SteamUserId (*)());
#if GAMESERVER_API
	REGISTER_HOOK(SteamGameServer_InitSafe, bool (*)(uint32, uint16, uint16, uint16, uint16, ServerMode, const char *, const char));
	REGISTER_HOOK(SteamGameServer_Init, bool (*)(uint32, uint16, uint16, uint16, uint16, ServerMode, const char *, const char));
	REGISTER_HOOK(SteamGameServer, ISteamGameServer* (*)());
	REGISTER_HOOK(SteamGameServerUtils, ISteamUtils* (*)());
	REGISTER_HOOK(SteamMasterServerUpdater, ISteamMasterServerUpdater* (*)());
	REGISTER_HOOK(SteamGameServerNetworking, ISteamNetworking* (*)());
	REGISTER_HOOK(SteamGameServerStats, ISteamGameServerStats* (*)());
	REGISTER_HOOK(SteamGameServer_Shutdown, void (*)());
	REGISTER_HOOK(SteamGameServer_RunCallbacks, void (*)());
	REGISTER_HOOK(SteamGameServer_BSecure, bool (*)());
	REGISTER_HOOK(SteamGameServer_GetSteamID, uint64 (*)());
	REGISTER_HOOK(SteamGameServer_GetHSteamPipe, SteamPipeId (*)());
	REGISTER_HOOK(SteamGameServer_GetHSteamUser, SteamUserId (*)());
#endif
}

void
SteamAPI::hookShutdown()
{
	/* nop */
}

bool
SteamAPI::Init()
{
	return true;
}

bool
SteamAPI::InitSafe()
{
	return true;
}

void
SteamAPI::Shutdown()
{
}

bool
SteamAPI::IsSteamRunning()
{
	return true;
}

ISteamClient *
SteamAPI::SteamClient()
{
	return static_cast<ISteamClient*>(&CSteamClient::getInstance());
}

ISteamUser *
SteamAPI::SteamUser()
{
	return static_cast<ISteamUser*>(&CSteamUser::getInstance());
}

ISteamFriends *
SteamAPI::SteamFriends()
{
	return static_cast<ISteamFriends*>(&CSteamFriends::getInstance());
}

ISteamUtils *
SteamAPI::SteamUtils()
{
	return static_cast<ISteamUtils*>(&CSteamUtils::getInstance());
}

ISteamMatchmaking *
SteamAPI::SteamMatchmaking()
{
	return static_cast<ISteamMatchmaking*>(
		&CSteamMatchmaking::getInstance());
}

ISteamUserStats *
SteamAPI::SteamUserStats()
{
	return static_cast<ISteamUserStats*>(&CSteamUserStats::getInstance());
}

ISteamApps *
SteamAPI::SteamApps()
{
	return static_cast<ISteamApps*>(&CSteamApps::getInstance());
}

ISteamNetworking *
SteamAPI::SteamNetworking()
{
	return static_cast<ISteamNetworking*>(&CSteamNetworking::getInstance());
}

ISteamMatchmakingServers *
SteamAPI::SteamMatchmakingServers()
{
	return static_cast<ISteamMatchmakingServers*>(
		&CSteamMatchmakingServers::getInstance());
}

ISteamRemoteStorage *
SteamAPI::SteamRemoteStorage()
{
	return static_cast<ISteamRemoteStorage*>(
		&CSteamRemoteStorage::getInstance());
}

ISteamScreenshots *
SteamAPI::SteamScreenshots()
{
	return static_cast<ISteamScreenshots*>(
		&CSteamScreenshots::getInstance());
}

ISteamHTTP *
SteamAPI::SteamHTTP()
{
	return static_cast<ISteamHTTP*>(
		&CSteamHTTP::getInstance());
}

ISteamUnifiedMessages *
SteamAPI::SteamUnifiedMessages()
{
	return static_cast<ISteamUnifiedMessages*>(
		&CSteamUnifiedMessages::getInstance());
}

ISteamController *
SteamAPI::SteamController()
{
	return static_cast<ISteamController*>(
		&CSteamController::getInstance());
}

ISteamUGC *
SteamAPI::SteamUGC()
{
	return static_cast<ISteamUGC*>(
		&CSteamUGC::getInstance());
}

ISteamAppList *
SteamAPI::SteamAppList()
{
	return static_cast<ISteamAppList*>(
		&CSteamAppList::getInstance());
}

ISteamMusic *
SteamAPI::SteamMusic()
{
	return static_cast<ISteamMusic*>(
		&CSteamMusic::getInstance());
}

ISteamMusicRemote *
SteamAPI::SteamMusicRemote()
{
	return static_cast<ISteamMusicRemote*>(
		&CSteamMusicRemote::getInstance());
}

ISteamHTMLSurface *
SteamAPI::SteamHTMLSurface()
{
	return static_cast<ISteamHTMLSurface*>(
		&CSteamHTMLSurface::getInstance());
}

SteamAPI::RealSteamAPI SteamAPI::real;

int SteamAPIRealCounter::mCounter = 0;
std::clock_t SteamAPI::start = std::clock();
