#ifndef STEAMTRICKER_STEAMAPI_API_H_
#define STEAMTRICKER_STEAMAPI_API_H_

#include <stdio.h>
#include <ctime>

#include "types.h"

#include "client.h"
#include "user.h"
#include "utils.h"
#include "apps.h"
#include "remotestorage.h"
#include "friends.h"
#include "matchmaking.h"
#include "networking.h"
#include "userstats.h"

#define STRINGIFY(x) #x
#define REGISTER_HOOK(FUNC, TYPE) { \
		struct hook h = { \
			.lib_name = "libsteam_api.so", \
			.symbol_name = STRINGIFY(FUNC), \
			.hook_handle = (void*) FUNC, \
			.version = -1 \
		}; \
		struct hooked_symbol * sym = register_hook(&h); \
		if (sym) \
			SteamAPI::real.FUNC = reinterpret_cast< TYPE >(sym->symbol_handle); \
	}

#define STEAMAPI_TIME ((int)((std::clock() - SteamAPI::start) / (double)(CLOCKS_PER_SEC / 1000)))

#define STUB() \
	if(!SteamAPIRealCounter::isInReal()) { \
		fprintf(stderr, "[SteamAPI][%d][STUB] %s\n", STEAMAPI_TIME, __PRETTY_FUNCTION__); \
	}
#define LOG(FORMAT, ...) { fprintf(stderr, "[SteamAPI][%d] " FORMAT "\n", STEAMAPI_TIME, __VA_ARGS__); }

#ifdef USE_STEAM_LIB
#define FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(FUNC, ...) { \
	SteamAPIRealCounter ___steamAPIRealCounter; \
	return SteamAPI::real.FUNC(__VA_ARGS__); }
#define METHOD_FORWARD_AND_FINISH_IF_ENABLED(CLASS, METHOD, ...) { \
	SteamAPIRealCounter __steamAPIRealCounter; \
	return SteamAPI::real.CLASS()->METHOD(__VA_ARGS__); }
#define REAL_CLASS_IF_IN_REAL_CALL(CLASS) \
	if(SteamAPIRealCounter::isInReal()) { \
		return SteamAPI::real.CLASS(); \
	}
#else
#define FUNCTION_FORWARD_AND_FINISH_IF_ENABLED(FUNC, ...)
#define METHOD_FORWARD_AND_FINISH_IF_ENABLED(CLASS, METHOD, ...) 
#define REAL_CLASS_IF_IN_REAL_CALL(CLASS) 
#endif

class SteamAPIRealCounter {
public:
	SteamAPIRealCounter() {
		mCounter++;
	}
	~SteamAPIRealCounter() {
		mCounter--;
	}
	static bool isInReal() {
		return mCounter > 0;
	}

private:
	static int mCounter;
};

class SteamAPI {
public:
	static void hookInit();
	static void hookShutdown();

	static bool Init();

	static bool InitSafe();

	static void Shutdown();

	static bool IsSteamRunning();

	static ISteamClient * SteamClient();

	static ISteamUser * SteamUser();

	static ISteamFriends * SteamFriends();

	static ISteamUtils * SteamUtils();

	static ISteamMatchmaking * SteamMatchmaking();

	static ISteamUserStats * SteamUserStats();

	static ISteamApps * SteamApps();

	static ISteamNetworking * SteamNetworking();

	static ISteamMatchmakingServers * SteamMatchmakingServers();

	static ISteamRemoteStorage * SteamRemoteStorage();

	static ISteamScreenshots* SteamScreenshots();

	static ISteamHTTP* SteamHTTP();

	static ISteamUnifiedMessages* SteamUnifiedMessages();

	static ISteamController* SteamController();

	static ISteamUGC* SteamUGC();

	static ISteamAppList* SteamAppList();

	static ISteamMusic* SteamMusic();

	static ISteamMusicRemote* SteamMusicRemote();

	static ISteamHTMLSurface* SteamHTMLSurface();

	struct RealSteamAPI {
		bool (*SteamAPI_Init)();
		void (*SteamAPI_Shutdown)();
		bool (*SteamAPI_InitSafe)();
		bool (*SteamAPI_IsSteamRunning)();
		bool (*SteamAPI_RestartAppIfNecessary)(uint32);
		void (*SteamAPI_WriteMiniDump)(uint32, void *, uint32);
		void (*SteamAPI_SetMiniDumpComment)(const char *);
		void (*SteamAPI_UseBreakpadCrashHandler)(char const *, char const *, char const *);
		ISteamClient* (*SteamClient)();
		ISteamUser* (*SteamUser)();
		ISteamFriends* (*SteamFriends)();
		ISteamUtils* (*SteamUtils)();
		ISteamMatchmaking* (*SteamMatchmaking)();
		ISteamUserStats* (*SteamUserStats)();
		ISteamApps* (*SteamApps)();
		ISteamNetworking* (*SteamNetworking)();
		ISteamMatchmakingServers* (*SteamMatchmakingServers)();
		ISteamRemoteStorage* (*SteamRemoteStorage)();
		ISteamScreenshots* (*SteamScreenshots)();
		ISteamHTTP* (*SteamHTTP)();
		ISteamUnifiedMessages* (*SteamUnifiedMessages)();
		ISteamController* (*SteamController)();
		ISteamUGC* (*SteamUGC)();
		ISteamAppList* (*SteamAppList)();
		ISteamMusic* (*SteamMusic)();
		ISteamMusicRemote* (*SteamMusicRemote)();
		ISteamHTMLSurface* (*SteamHTMLSurface)();
		void (*SteamAPI_RunCallbacks)();
		void (*SteamAPI_RegisterCallback)(class CallbackBase*, int);
		void (*SteamAPI_UnregisterCallback)(class CallbackBase*);
		void (*SteamAPI_RegisterCallResult)(class CallbackBase*, SteamAPICall);
		void (*SteamAPI_UnregisterCallResult)(class CallbackBase*, SteamAPICall);
		void (*Steam_RunCallbacks)(SteamPipeId, bool);
		void (*Steam_RegisterInterfaceFuncs)(void*);
		SteamUserId (*Steam_GetHSteamUserCurrent)();
		const char* (*SteamAPI_GetSteamInstallPath)();
		SteamPipeId (*SteamAPI_GetHSteamPipe)();
		void (*SteamAPI_SetTryCatchCallbacks)(bool);
		SteamPipeId (*GetHSteamPipe)();
		SteamUserId (*GetHSteamUser)();
		SteamUserId (*SteamAPI_GetHSteamUser)();
		bool (*SteamGameServer_InitSafe)(uint32, uint16, uint16, uint16, uint16, ServerMode, const char *, const char);
		bool (*SteamGameServer_Init)(uint32, uint16, uint16, uint16, uint16, ServerMode, const char *, const char);
		ISteamGameServer* (*SteamGameServer)();
		ISteamUtils* (*SteamGameServerUtils)();
		ISteamMasterServerUpdater* (*SteamMasterServerUpdater)();
		ISteamNetworking* (*SteamGameServerNetworking)();
		ISteamGameServerStats* (*SteamGameServerStats)();
		void (*SteamGameServer_Shutdown)();
		void (*SteamGameServer_RunCallbacks)();
		bool (*SteamGameServer_BSecure)();
		uint64 (*SteamGameServer_GetSteamID)();
		SteamPipeId (*SteamGameServer_GetHSteamPipe)();
		SteamUserId (*SteamGameServer_GetHSteamUser)();
	};

	static RealSteamAPI real;

	static std::clock_t start;
};

#endif /* STEAMTRICKER_STEAMAPI_API_H_ */
