#ifndef STEAMTRICKER_STEAMAPI_USER_H_
#define STEAMTRICKER_STEAMAPI_USER_H_

#include "types.h"

/**
 * interface for SteamUser version 017
 */
class ISteamUser {
public:
	virtual SteamUserId GetHSteamUser() = 0;

	virtual bool BLoggedOn() = 0;

	virtual CSteamID GetSteamID() = 0;

	virtual int InitiateGameConnection(
			void *authBlob,
			int maxAuthBlob,
			CSteamID steamIDGameServer,
			uint32 ipServer,
			uint16 portServer,
			bool secure) = 0;

	virtual void TerminateGameConnection(
			uint32 ipServer,
			uint16 portServer) = 0;

	virtual void TrackAppUsageEvent(
			CGameID gameID,
			int appUsageEvent,
			const char *extraInfo = "" ) = 0;

	virtual bool GetUserDataFolder(char *buffer, int bufferSize) = 0;

	virtual void StartVoiceRecording() = 0;

	virtual void StopVoiceRecording() = 0;

	virtual VoiceResult GetAvailableVoice(
			uint32 *compressed,
			uint32 *uncompressed) = 0;

	virtual VoiceResult GetVoice(
			bool wantCompressed,
			void *destBuffer,
			uint32 destBufferSize,
			uint32 *bytesWritten,
			bool wantUncompressed,
			void *uncompressedDestBuffer,
			uint32 uncompressedDestBufferSize,
			uint32 *uncompressBytesWritten) = 0;

	virtual VoiceResult DecompressVoice(
			const void *compressed,
			uint32 compressedSize,
			void *destBuffer,
			uint32 destBufferSize,
			uint32 *bytesWritten) = 0;

	virtual uint32 GetVoiceOptimalSampleRate() = 0;

	virtual AuthTicket GetAuthSessionTicket(
			void *ticket,
			int maxTicket,
			uint32 *ticketCount) = 0;

	virtual BeginAuthSessionResult BeginAuthSession(
			const void *authTicket,
			int authTicketCount,
			CSteamID steamID) = 0;

	virtual void EndAuthSession(CSteamID steamID) = 0;

	virtual void CancelAuthTicket(AuthTicket authTicket) = 0;

	virtual UserHasLicenseForAppResult UserHasLicenseForApp(
			CSteamID steamID,
			AppId appID) = 0;

	virtual bool BIsBehindNAT() = 0;

	virtual void AdvertiseGame(
			CSteamID steamIDGameServer,
			uint32 IPServer,
			uint16 portServer) = 0;

	virtual SteamAPICall RequestEncryptedAppTicket(
			void *dataToInclude,
			int dataToIncludei) = 0;

	virtual bool GetEncryptedAppTicket(
			void *ticket,
			int maxTicket,
			uint32 *ticketi) = 0;

	virtual int GetGameBadgeLevel(
			int series,
			bool foil) = 0;

	virtual int GetPlayerSteamLevel() = 0;
};

class CSteamUser : public ISteamUser {
public:
	static CSteamUser& getInstance() {
		static CSteamUser instance;
		return instance;
	}

	SteamUserId GetHSteamUser();

	bool BLoggedOn();

	CSteamID GetSteamID();

	int InitiateGameConnection(
			void *authBlob,
			int maxAuthBlob,
			CSteamID steamIDGameServer,
			uint32 ipServer,
			uint16 portServer,
			bool secure);

	void TerminateGameConnection(uint32 ipServer, uint16 portServer);

	void TrackAppUsageEvent(
			CGameID gameID,
			int appUsageEvent,
			const char *extraInfo = "");

	bool GetUserDataFolder(char *buffer, int bufferSize);

	void StartVoiceRecording();

	void StopVoiceRecording();

	VoiceResult GetAvailableVoice(uint32 *compressed, uint32 *uncompressed);

	VoiceResult GetVoice(
			bool wantCompressed,
			void *destBuffer,
			uint32 destBufferSize,
			uint32 *bytesWritten,
			bool wantUncompressed,
			void *uncompressedDestBuffer,
			uint32 uncompressedDestBufferSize,
			uint32 *uncompressBytesWritten);

	VoiceResult DecompressVoice(
			const void *compressed,
			uint32 compressedSize,
			void *destBuffer,
			uint32 destBufferSize,
			uint32 *bytesWritten);

	uint32 GetVoiceOptimalSampleRate();

	AuthTicket GetAuthSessionTicket(
			void *ticket,
			int maxTicket,
			uint32 *ticketCount);

	BeginAuthSessionResult BeginAuthSession(
			const void *authTicket,
			int authTicketCount,
			CSteamID steamID);

	void EndAuthSession(CSteamID steamID);

	void CancelAuthTicket(AuthTicket authTicket);

	UserHasLicenseForAppResult UserHasLicenseForApp(
			CSteamID steamID,
			AppId appID);

//FIXME
	bool BIsBehindNAT();

	void AdvertiseGame(
			CSteamID steamIDGameServer,
			uint32 IPServer,
			uint16 portServer);

	SteamAPICall RequestEncryptedAppTicket(
			void *dataToInclude,
			int dataToIncludei);

	bool GetEncryptedAppTicket(
			void *ticket,
			int maxTicket,
			uint32 *ticketi);

	int GetGameBadgeLevel(
			int series,
			bool foil);

	int GetPlayerSteamLevel();
};

#endif /* STEAMTRICKER_STEAMAPI_USER_H_ */
