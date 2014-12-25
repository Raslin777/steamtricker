#ifndef STEAMTRICKER_STEAMAPI_GAMESTATS_H_
#define STEAMTRICKER_STEAMAPI_GAMESTATS_H_

#include "types.h"

/*
FIXME: this doesn't seem to be used anywhere
*/

class ISteamGameStats {
public:
	virtual SteamAPICall GetNewSession(int8 accountType,
				   uint64 accountID,
				   int32 appID,
				   Time32 timeStarted) = 0;

	virtual SteamAPICall EndSession(uint64 sessionID,
				Time32 timeEnded,
				int reasonCode) = 0;

	virtual Result AddSessionAttributeInt(uint64 sessionID,
				      const char* name,
				      int32 data) = 0;

	virtual Result AddSessionAttributeString(uint64 sessionID,
					 const char* name,
					 const char *data) = 0;

	virtual Result AddSessionAttributeFloat(uint64 sessionID,
					const char* name,
					float data) = 0;

	virtual Result AddNewRow(uint64 *rowID,
			 uint64 sessionID,
			 const char *tableName) = 0;

	virtual Result CommitRow(uint64 rowID) = 0;

	virtual Result CommitOutstandingRows(uint64 sessionID) = 0;

	virtual Result AddRowAttributeInt(uint64 rowID, const char *name, int32 data) = 0;

	virtual Result AddRowAtributeString(uint64 rowID,
				    const char *name,
				    const char *data) = 0;

	virtual Result AddRowAttributeFloat(uint64 rowID, const char *name, float data) = 0;

	virtual Result AddSessionAttributeInt64(uint64 sessionID,
					const char *name,
					int64 data) = 0;

	virtual Result AddRowAttributeInt64(uint64 rowID, const char *name, int64 data) = 0;
};

class CSteamGameStats : public ISteamGameStats {
public:
	static CSteamGameStats& getInstance() {
		static CSteamGameStats instance;
		return instance;
	}

	SteamAPICall GetNewSession(int8 accountType,
				   uint64 accountID,
				   int32 appID,
				   Time32 timeStarted);

	SteamAPICall EndSession(uint64 sessionID,
				Time32 timeEnded,
				int reasonCode);

	Result AddSessionAttributeInt(uint64 sessionID,
				      const char* name,
				      int32 data);

	Result AddSessionAttributeString(uint64 sessionID,
					 const char* name,
					 const char *data);

	Result AddSessionAttributeFloat(uint64 sessionID,
					const char* name,
					float data);

	Result AddNewRow(uint64 *rowID,
			 uint64 sessionID,
			 const char *tableName);

	Result CommitRow(uint64 rowID);

	Result CommitOutstandingRows(uint64 sessionID);

	Result AddRowAttributeInt(uint64 rowID, const char *name, int32 data);

	Result AddRowAtributeString(uint64 rowID,
				    const char *name,
				    const char *data);

	Result AddRowAttributeFloat(uint64 rowID, const char *name, float data);

	Result AddSessionAttributeInt64(uint64 sessionID,
					const char *name,
					int64 data);

	Result AddRowAttributeInt64(uint64 rowID, const char *name, int64 data);
};

#endif /* STEAMTRICKER_STEAMAPI_GAMESTATS_H_ */
