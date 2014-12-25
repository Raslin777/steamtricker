#include "api.h"
#include "gamecoordinator.h"

GameCoordResult CSteamGameCoordinator::SendMessage(uint32 msgType,
						   const void *data,
						   uint32 dataSize)
{
	STUB();
	return GameCoordResultOK;
}

bool CSteamGameCoordinator::IsMessageAvailable(uint32 *msgSize)
{
	STUB();
	return false;
}

GameCoordResult CSteamGameCoordinator::RetrieveMessage(uint32 *msgType,
						       void *dest,
						       uint32 destSize,
						       uint32 *msgSize)
{
	STUB();
	return GameCoordResultNoMessage;
}
