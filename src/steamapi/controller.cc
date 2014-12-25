#include "api.h"
#include "controller.h"

bool CSteamController::Init(
		const char *absolutePathToControllerConfigVDF)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamController, Init,
			absolutePathToControllerConfigVDF);
	return false;
}

bool CSteamController::Shutdown()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamController, Shutdown);
	return true;
}

void CSteamController::RunFrame()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamController, RunFrame);
}

bool CSteamController::GetControllerState(
		uint32 controllerIndex,
		SteamControllerState *state)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamController, GetControllerState,
			controllerIndex, state);
	return false;
}

void CSteamController::TriggerHapticPulse(
		uint32 controllerIndex,
		SteamControllerPad targetPad,
		unsigned short durationMicroSec)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamController, TriggerHapticPulse,
			controllerIndex, targetPad, durationMicroSec);
}

void CSteamController::SetOverrideMode(const char *mode)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamController, SetOverrideMode,
			mode);
}

