#ifndef STEAMTRICKER_STEAMAPI_APPS_H_
#define STEAMTRICKER_STEAMAPI_APPS_H_

#include "types.h"

/**
 * interface for SteamApps version 006
 */
class ISteamApps {
public:
	virtual bool BIsSubscribed() = 0;

	virtual bool BIsLowViolence() = 0;

	virtual bool BIsCybercafe() = 0;

	virtual bool BIsVACBanned() = 0;

	virtual const char *GetCurrentGameLanguage() = 0;

	virtual const char *GetAvailableGameLanguages() = 0;

	virtual bool BIsSubscribedApp(AppId appID) = 0;

	virtual bool BIsDlcInstalled(AppId appID) = 0;

	virtual uint32 GetEarliestPurchaseUnixTime(AppId appID) = 0;

	virtual bool BIsSubscribedFromFreeWeekend() = 0;

	virtual int GetDLCCount() = 0;

	virtual bool BGetDLCDataByIndex(int dlc,
									AppId *appID,
									bool *available,
									char *name,
									int nameBufferSize) = 0;

	virtual void InstallDLC(AppId appID) = 0;

	virtual void UninstallDLC(AppId appID) = 0;

	virtual void RequestAppProofOfPurchaseKey(AppId appID) = 0;

	virtual bool GetCurrentBetaName(char *name,
									int nameBufferSize) = 0;

	virtual bool MarkContentCorrupt(bool missingFilesOnly) = 0;

	virtual uint32 GetInstalledDepots(AppId appID,
									  DepotId *depots,
									  uint32 maxDepots) = 0;

	virtual uint32 GetAppInstallDir(AppId appID,
									char *folder,
									uint32 folderBufferSize) = 0;

	virtual bool BIsAppInstalled(AppId appID) = 0;

	virtual CSteamID GetAppOwner() = 0;

	virtual const char *GetLaunchQueryParam(const char *key) = 0;
};

class CSteamApps : public ISteamApps {
public:
	static CSteamApps& getInstance() {
		static CSteamApps instance;
		return instance;
	}

	bool BIsSubscribed();

	bool BIsLowViolence();

	bool BIsCybercafe();

	bool BIsVACBanned();

	const char *GetCurrentGameLanguage();

	const char *GetAvailableGameLanguages();

	bool BIsSubscribedApp(AppId appID);

	bool BIsDlcInstalled(AppId appID);

	uint32 GetEarliestPurchaseUnixTime(AppId appID);

	bool BIsSubscribedFromFreeWeekend();

	int GetDLCCount();

	bool BGetDLCDataByIndex(int dlc,
							AppId *appID,
							bool *available,
							char *name,
							int nameBufferSize);

	void InstallDLC(AppId appID);

	void UninstallDLC(AppId appID);

	void RequestAppProofOfPurchaseKey(AppId appID);

	bool GetCurrentBetaName(char *name,
							int nameBufferSize);

	bool MarkContentCorrupt(bool missingFilesOnly);

	uint32 GetInstalledDepots(AppId appID,
							  DepotId *depots,
							  uint32 maxDepots);

	uint32 GetAppInstallDir(AppId appID,
							char *folder,
							uint32 folderBufferSize);

	bool BIsAppInstalled(AppId appID);

	CSteamID GetAppOwner();

	const char *GetLaunchQueryParam(const char *key);
};

#endif /* STEAMTRICKER_STEAMAPI_APPS_H_ */
