#ifndef STEAMTRICKER_STEAMAPI_UNIFIEDMESSAGES_H_
#define STEAMTRICKER_STEAMAPI_UNIFIEDMESSAGES_H_

#include "types.h"

/**
 * Interface for SteamUnifiedMessages version 001
 */
class ISteamUnifiedMessages {
public:
	virtual ClientUnifiedMessageHandle SendMethod(
			const char *serviceMethod,
			const void *requestBuffer,
			uint32 requestBufferSize,
			uint64 context) = 0;

	virtual bool GetMethodResponseInfo(
			ClientUnifiedMessageHandle handle,
			uint32 *responseSize,
			Result *result) = 0;

	virtual bool GetMethodResponseData(
			ClientUnifiedMessageHandle handle,
			void *responseBuffer,
			uint32 responseBufferSize,
			bool autoRelease) = 0;

	virtual bool ReleaseMethod(
			ClientUnifiedMessageHandle handle) = 0;

	virtual bool SendNotification(
			const char *serviceNotification,
			const void *notificationBuffer,
			uint32 notificationBufferSize) = 0;
};

class CSteamUnifiedMessages : public ISteamUnifiedMessages {
public:
	static CSteamUnifiedMessages& getInstance() {
		static CSteamUnifiedMessages instance;
		return instance;
	}

	ClientUnifiedMessageHandle SendMethod(
			const char *serviceMethod,
			const void *requestBuffer,
			uint32 requestBufferSize,
			uint64 context);

	bool GetMethodResponseInfo(
			ClientUnifiedMessageHandle handle,
			uint32 *responseSize,
			Result *result);

	bool GetMethodResponseData(
			ClientUnifiedMessageHandle handle,
			void *responseBuffer,
			uint32 responseBufferSize,
			bool autoRelease);

	bool ReleaseMethod(
			ClientUnifiedMessageHandle handle);

	bool SendNotification(
			const char *serviceNotification,
			const void *notificationBuffer,
			uint32 notificationBufferSize);
};

#endif /* STEAMTRICKER_STEAMAPI_UNIFIEDMESSAGES_H_ */
