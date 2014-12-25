#include "api.h"
#include "user.h"


SteamUserId CSteamUser::GetHSteamUser()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetHSteamUser);
	return 0;
}

bool CSteamUser::BLoggedOn()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, BLoggedOn);
	return true;
}

CSteamID CSteamUser::GetSteamID() {
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetSteamID);
	return CSteamID(static_cast<uint64>(0));
}

int CSteamUser::InitiateGameConnection(void *authBlob,
				       int maxAuthBlob,
				       CSteamID steamIDGameServer,
				       uint32 ipServer,
				       uint16 portServer,
				       bool secure)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, InitiateGameConnection,
					     authBlob, maxAuthBlob,
					     steamIDGameServer, ipServer,
					     portServer, secure);
	return 0;
}

void CSteamUser::TerminateGameConnection(uint32 ipServer, uint16 portServer)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, TerminateGameConnection,
					     ipServer, portServer);
}

void CSteamUser::TrackAppUsageEvent(CGameID gameID,
				    int appUsageEvent,
				    const char *extraInfo)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, TrackAppUsageEvent,
					     gameID, appUsageEvent,
					     extraInfo);
}

bool CSteamUser::GetUserDataFolder(char *buffer, int bufferSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetUserDataFolder,
					     buffer, bufferSize);
	*buffer = 0;
	return false;
}

void CSteamUser::StartVoiceRecording()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, StartVoiceRecording);
}

void CSteamUser::StopVoiceRecording()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, StopVoiceRecording);
}

VoiceResult CSteamUser::GetAvailableVoice(uint32 *compressed,
					  uint32 *uncompressed)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetAvailableVoice,
					     compressed, uncompressed);
	return VoiceResultNoData;
}

VoiceResult CSteamUser::GetVoice(bool wantCompressed,
				 void *destBuffer,
				 uint32 destBufferSize,
				 uint32 *bytesWritten,
				 bool wantUncompressed,
				 void *uncompressedDestBuffer,
				 uint32 uncompressedDestBufferSize,
				 uint32 *uncompressBytesWritten)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetVoice,
					     wantCompressed, destBuffer,
					     destBufferSize, bytesWritten,
					     wantUncompressed,
					     uncompressedDestBuffer,
					     uncompressedDestBufferSize,
					     uncompressBytesWritten);
	return VoiceResultNoData;
}

VoiceResult CSteamUser::DecompressVoice(const void *compressed,
					uint32 compressedSize,
					void *destBuffer,
					uint32 destBufferSize,
					uint32 *bytesWritten)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, DecompressVoice,
					     compressed, compressedSize,
					     destBuffer, destBufferSize,
					     bytesWritten);
	return VoiceResultNoData;
}

uint32 CSteamUser::GetVoiceOptimalSampleRate()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetVoiceOptimalSampleRate);
	return 0;
}

AuthTicket CSteamUser::GetAuthSessionTicket(void *ticket,
					    int maxTicket,
					    uint32 *ticketCount)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetAuthSessionTicket,
					     ticket, maxTicket, ticketCount);
	return 0;
}

BeginAuthSessionResult CSteamUser::BeginAuthSession(const void *authTicket,
						    int authTicketCount,
						    CSteamID steamID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, BeginAuthSession,
					     authTicket, authTicketCount,
					     steamID);
	return BeginAuthSessionResultOK;
}

void CSteamUser::EndAuthSession(CSteamID steamID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, EndAuthSession,
					     steamID);
}

void CSteamUser::CancelAuthTicket(AuthTicket authTicket)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, CancelAuthTicket,
					     authTicket);
}

UserHasLicenseForAppResult CSteamUser::UserHasLicenseForApp(CSteamID steamID,
							    AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, UserHasLicenseForApp,
					     steamID, appID);
	return UserHasLicenseResultHasLicense;
}

bool CSteamUser::BIsBehindNAT()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, BIsBehindNAT);
	return true;
}

void CSteamUser::AdvertiseGame(
		CSteamID steamIDGameServer,
		uint32 IPServer,
		uint16 portServer)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, AdvertiseGame,
			steamIDGameServer, IPServer, portServer);
}

SteamAPICall CSteamUser::RequestEncryptedAppTicket(
		void *dataToInclude,
		int dataToIncludei)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, RequestEncryptedAppTicket,
			dataToInclude, dataToIncludei);
	return SteamAPICallInvalid;
}

bool CSteamUser::GetEncryptedAppTicket(
		void *ticket,
		int maxTicket,
		uint32 *ticketi)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetEncryptedAppTicket,
			ticket, maxTicket, ticketi);
	return false;
}

int CSteamUser::GetGameBadgeLevel(
		int series,
		bool foil)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetGameBadgeLevel,
			series, foil);
	return 0;
}

int CSteamUser::GetPlayerSteamLevel()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUser, GetPlayerSteamLevel);
	return 1;
}


