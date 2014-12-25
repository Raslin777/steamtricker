#ifndef STEAMTRICKER_STEAMAPI_APPLIST_H_
#define STEAMTRICKER_STEAMAPI_APPLIST_H_

#include "types.h"

/**
 * Interface for SteamAppList version 001
 */
class ISteamAppList {
public:
	virtual uint32 GetNumInstalledApps() = 0;

	virtual uint32 GetInstalledApps(
			AppId *appID,
			uint32 maxAppIDs) = 0;

	virtual int GetAppName(
			AppId appID,
			char *name,
			int nameMax) = 0;

	virtual int GetAppInstallDir(
			AppId appID,
			char *directory,
			int nameMax) = 0;

	virtual int GetAppBuildId(
			AppId appID) = 0;
};

class CSteamAppList : public ISteamAppList {
public:
	static CSteamAppList& getInstance() {
		static CSteamAppList instance;
		return instance;
	}

	uint32 GetNumInstalledApps();

	uint32 GetInstalledApps(
			AppId *appID,
			uint32 maxAppIDs);

	int GetAppName(
			AppId appID,
			char *name,
			int nameMax);

	int GetAppInstallDir(
			AppId appID,
			char *directory,
			int nameMax);

	int GetAppBuildId(
			AppId appID);
};

#endif /* STEAMTRICKER_STEAMAPI_APPLIST_H_ */
