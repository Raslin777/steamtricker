#include "api.h"
#include "unifiedmessages.h"

ClientUnifiedMessageHandle CSteamUnifiedMessages::SendMethod(
		const char *serviceMethod,
		const void *requestBuffer,
		uint32 requestBufferSize,
		uint64 context)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUnifiedMessages, SendMethod,
			serviceMethod, requestBuffer, requestBufferSize, context);
	return UnifiedMessageHandleInvalid;
}

bool CSteamUnifiedMessages::GetMethodResponseInfo(
		ClientUnifiedMessageHandle handle,
		uint32 *responseSize,
		Result *result)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUnifiedMessages, GetMethodResponseInfo,
			handle, responseSize, result);
	return false;
}

bool CSteamUnifiedMessages::GetMethodResponseData(
		ClientUnifiedMessageHandle handle,
		void *responseBuffer,
		uint32 responseBufferSize,
		bool autoRelease)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUnifiedMessages, GetMethodResponseData,
			handle, responseBuffer, responseBufferSize, autoRelease);
	return false;
}

bool CSteamUnifiedMessages::ReleaseMethod(
		ClientUnifiedMessageHandle handle)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUnifiedMessages, ReleaseMethod,
			handle);
	return true;
}

bool CSteamUnifiedMessages::SendNotification(
		const char *serviceNotification,
		const void *notificationBuffer,
		uint32 notificationBufferSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUnifiedMessages, SendNotification,
			serviceNotification, notificationBuffer, notificationBufferSize);
	return true;
}

