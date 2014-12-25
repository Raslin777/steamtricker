#include "api.h"
#include "gamestats.h"

SteamAPICall CSteamGameStats::GetNewSession(int8 accountType,
					    uint64 accountID,
					    int32 appID,
					    Time32 timeStarted)
{
	STUB();
	return SteamAPICallInvalid;
}

SteamAPICall EndSession(uint64 sessionID, Time32 timeEnded, int reasonCode)
{
	STUB();
	return SteamAPICallInvalid;
}

Result CSteamGameStats::AddSessionAttributeInt(uint64 sSessionID,
						const char* name,
						int32 data)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::AddSessionAttributeString(uint64 sessionID,
						  const char* name,
						  const char *data)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::AddSessionAttributeFloat(uint64 sessionID,
						 const char* name,
						 float data)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::AddNewRow(uint64 *rowID,
				  uint64 sessionID,
				  const char *tableName)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::CommitRow(uint64 rowID)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::CommitOutstandingRows(uint64 sessionID)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::AddRowAttributeInt(uint64 rowID,
					   const char *name,
					   int32 data)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::AddRowAtributeString(uint64 rowID,
					     const char *name, 
					     const char *data)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::AddRowAttributeFloat(uint64 rowID,
					     const char *name,
					     float data)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::AddSessionAttributeInt64(uint64 sessionID, 
						 const char *name,
						 int64 data)
{
	STUB();
	return ResultOK;
}

Result CSteamGameStats::AddRowAttributeInt64(uint64 rowID,
					     const char *name,
					     int64 data)
{
	STUB();
	return ResultOK;
}

