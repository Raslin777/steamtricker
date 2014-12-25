#ifndef STEAMTRICKER_STEAMAPI_CONTROLLER_H_
#define STEAMTRICKER_STEAMAPI_CONTROLLER_H_

#include "types.h"

/**
 * Interface for SteamController version 000
 */
class ISteamController {
public:
	virtual bool Init(
			const char *absolutePathToControllerConfigVDF) = 0;

	virtual bool Shutdown() = 0;

	virtual void RunFrame() = 0;

	virtual bool GetControllerState(
			uint32 controllerIndex,
			SteamControllerState *state) = 0;

	virtual void TriggerHapticPulse(
			uint32 controllerIndex,
			SteamControllerPad targetPad,
			unsigned short durationMicroSec) = 0;

	virtual void SetOverrideMode(const char *mode) = 0;
};

class CSteamController : public ISteamController {
public:
	static CSteamController& getInstance() {
		static CSteamController instance;
		return instance;
	}

	bool Init(
			const char *absolutePathToControllerConfigVDF);

	bool Shutdown();

	void RunFrame();

	bool GetControllerState(
			uint32 controllerIndex,
			SteamControllerState *state);

	void TriggerHapticPulse(
			uint32 controllerIndex,
			SteamControllerPad targetPad,
			unsigned short durationMicroSec);

	void SetOverrideMode(const char *mode);

};

#endif /* STEAMTRICKER_STEAMAPI_CONTROLLER_H_ */
