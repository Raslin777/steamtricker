#ifndef STEAMTRICKER_STEAMAPI_GAMECOORDINATOR_H_
#define STEAMTRICKER_STEAMAPI_GAMECOORDINATOR_H_

#include "types.h"

/*
FIXME: this doesn't seem to get used anywhere
*/

class ISteamGameCoordinator {
public:
	virtual GameCoordResult SendMessage(uint32 msgType,
				    const void *data,
				    uint32 dataSize) = 0;

	virtual bool IsMessageAvailable(uint32 *msgSize) = 0;

	virtual GameCoordResult RetrieveMessage(uint32 *msgType,
					void *dest,
					uint32 destSize,
					uint32 *msgSize) = 0;
};

class CSteamGameCoordinator : public ISteamGameCoordinator {
public:
	static CSteamGameCoordinator& getInstance() {
		static CSteamGameCoordinator instance;
		return instance;
	}

	GameCoordResult SendMessage(uint32 msgType,
				    const void *data,
				    uint32 dataSize);

	bool IsMessageAvailable(uint32 *msgSize);

	GameCoordResult RetrieveMessage(uint32 *msgType,
					void *dest,
					uint32 destSize,
					uint32 *msgSize);
};

#endif /* STEAMTRICKER_STEAMAPI_GAMECOORDINATOR_H_ */
