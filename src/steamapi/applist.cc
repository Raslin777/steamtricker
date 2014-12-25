#include "api.h"
#include "applist.h"

uint32 CSteamAppList::GetNumInstalledApps()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamAppList, GetNumInstalledApps);
	return 0;
}

uint32 CSteamAppList::GetInstalledApps(
		AppId *appID,
		uint32 maxAppIDs)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamAppList, GetInstalledApps,
			appID, maxAppIDs);
	return 0;
}

int CSteamAppList::GetAppName(
		AppId appID,
		char *name,
		int nameMax)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamAppList, GetAppName,
			appID, name, nameMax);
	return 0;
}

int CSteamAppList::GetAppInstallDir(
		AppId appID,
		char *directory,
		int nameMax)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamAppList, GetAppInstallDir,
			appID, directory, nameMax);

	return 0;
}

int CSteamAppList::GetAppBuildId(
		AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamAppList, GetAppBuildId,
			appID);
	return 0;
}

