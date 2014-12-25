#include "api.h"
#include "apps.h"

bool CSteamApps::BIsSubscribed()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsSubscribed);
	return true;
}

bool CSteamApps::BIsLowViolence()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsLowViolence);
	return false;
}

bool CSteamApps::BIsCybercafe()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsCybercafe);
	return false;
}

bool CSteamApps::BIsVACBanned()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsVACBanned);
	return false;
}

const char *CSteamApps::GetCurrentGameLanguage()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetCurrentGameLanguage);
	return "German";
}

const char *CSteamApps::GetAvailableGameLanguages()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetAvailableGameLanguages);
	return "German";
}

bool CSteamApps::BIsSubscribedApp(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsSubscribedApp, appID);
	return true;
}

bool CSteamApps::BIsDlcInstalled(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsDlcInstalled, appID);
	return true;
}

uint32 CSteamApps::GetEarliestPurchaseUnixTime(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetEarliestPurchaseUnixTime, appID);
	return 0;
}

bool CSteamApps::BIsSubscribedFromFreeWeekend()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsSubscribedFromFreeWeekend);
	return true;
}

int CSteamApps::GetDLCCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetDLCCount);
	return 0;
}

bool CSteamApps::BGetDLCDataByIndex(int dlc,
						AppId *appID,
						bool *available,
						char *name,
						int nameBufferSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BGetDLCDataByIndex
										 dlc, appId, available,
										 name, nameBufferSize);
	return false;
}

void CSteamApps::InstallDLC(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, InstallDLC, appID);
}

void CSteamApps::UninstallDLC(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, UninstallDLC, appID);
}

void CSteamApps::RequestAppProofOfPurchaseKey(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, RequestAppProofOfPurchaseKey, appID);
}

bool CSteamApps::GetCurrentBetaName(char *name,
						int nameBufferSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetCurrentBetaName,
										 name, nameBufferSize);
	return false;
}

bool CSteamApps::MarkContentCorrupt(bool missingFilesOnly)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, MarkContentCorrupt,
										 missingFilesOnly);
	return true;
}

uint32 CSteamApps::GetInstalledDepots(AppId appID,
						  DepotId *depots,
						  uint32 maxDepots)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetInstalledDepots,
										 appID, depots, maxDepots);
	return 0;
}

uint32 CSteamApps::GetAppInstallDir(AppId appID,
						char *folder,
						uint32 folderBufferSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetAppInstallDir,
										 appID, folder, folderBufferSize);
	return 0;
}

bool CSteamApps::BIsAppInstalled(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsAppInstalled, appID);
	return true;
}

CSteamID CSteamApps::GetAppOwner()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetAppOwner);
	return CSteamID();
}

const char *CSteamApps::GetLaunchQueryParam(const char *key)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetLaunchQueryParam, key);
	return NULL;
}

