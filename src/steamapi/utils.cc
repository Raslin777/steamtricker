#include "api.h"
#include "utils.h"


uint32 CSteamUtils::GetSecondsSinceAppActive()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetSecondsSinceAppActive);
	return 0;
}

uint32 CSteamUtils::GetSecondsSinceComputerActive()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetSecondsSinceComputerActive);
	return 0;
}

Universe CSteamUtils::GetConnectedUniverse()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetConnectedUniverse);
	return UniversePublic;
}

uint32 CSteamUtils::GetServerRealTime()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetServerRealTime);
	return 0;
}

const char *CSteamUtils::GetIPCountry()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetIPCountry);
	return "DE";
}

bool CSteamUtils::GetImageSize(int image, uint32 *width, uint32 *height)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetImageSize,
					     image, width, height);
	*width = 0;
	*height = 0;
	return false;
}

bool CSteamUtils::GetImageRGBA(int image, uint8 *dest, int destBufferSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetImageRGBA,
					     image, dest, destBufferSize);
	*dest = 0;
	return false;
}

bool CSteamUtils::GetCSERIPPort(uint32 *ip, uint16 *port)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetCSERIPPort,
					     ip, port);
	*ip = 0;
	*port = 0;
	return false;
}

uint8 CSteamUtils::GetCurrentBatteryPower()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetCurrentBatteryPower);
	return -1;
}

uint32 CSteamUtils::GetAppID()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetAppID);
	return 0;
}

void CSteamUtils::SetOverlayNotificationPosition(NotificationPosition notificationPosition)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, SetOverlayNotificationPosition,
					     notificationPosition);
}

bool CSteamUtils::IsAPICallCompleted(SteamAPICall steamAPICall, bool *failed)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, IsAPICallCompleted,
					     steamAPICall, failed);
	*failed = false;
	return true;
}

SteamAPICallFailure CSteamUtils::GetAPICallFailureReason(SteamAPICall steamAPICall)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetAPICallFailureReason,
					     steamAPICall);
	return SteamAPICallFailureNone;
}

bool CSteamUtils::GetAPICallResult(SteamAPICall steamAPICall,
				   void *callback,
				   int iCallback,
				   int callbackExpected,
				   bool *failed)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetAPICallResult,
					     steamAPICall, callback,
					     iCallback, callbackExpected,
					     failed);
	*failed = false;
	return true;
}

void CSteamUtils::RunFrame()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, RunFrame);
}

uint32 CSteamUtils::GetIPCCallCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetIPCCallCount);
	return 0;
}

void CSteamUtils::SetWarningMessageHook(SteamAPIWarningMessageHook function)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, SetWarningMessageHook,
					     function);
}

bool CSteamUtils::IsOverlayEnabled()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, IsOverlayEnabled);
	return false;
}

bool CSteamUtils::BOverlayNeedsPresent()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, BOverlayNeedsPresent);
	return false;
}

bool CSteamUtils::ShowGamepadTextInput(
		GamepadTextInputMode inputMode,
		GamepadTextInputLineMode lineInputMode,
		const char *description,
		uint32 charMax,
		const char *existingText)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, ShowGamepadTextInput,
			inputMode, lineInputMode, description, charMax, existingText);
	return false;
}

uint32 CSteamUtils::GetEnteredGamepadTextLength()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetEnteredGamepadTextLength);
	return 0;
}

bool CSteamUtils::GetEnteredGamepadTextInput(
		char *text, uint32 texti)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetEnteredGamepadTextInput,
			text, texti);
	return false;
}

const char *CSteamUtils::GetSteamUILanguage()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, GetSteamUILanguage);
	return "Steam UI Language";
}

bool CSteamUtils::IsSteamRunningInVR()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUtils, IsSteamRunningInVR);
	return false;
}

