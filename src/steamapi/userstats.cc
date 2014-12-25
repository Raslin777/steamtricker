#include "api.h"
#include "userstats.h"

bool CSteamUserStats::RequestCurrentStats()
{
	STUB();
	return true;
}

bool CSteamUserStats::GetStat(const char *name, int32 *data )
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetStat,
					     name, data);
	*data = 0;
	return true;
};

bool CSteamUserStats::GetStat(const char *name, float *data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetStat,
					     name, data);
	*data = 0;
	return true;
}

bool CSteamUserStats::SetStat(const char *name, int32 data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, SetStat,
					     name, data);
	return true;
}

bool CSteamUserStats::SetStat(const char *name, float data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, SetStat,
					     name, data);
	return true;
}

bool CSteamUserStats::UpdateAvgRateStat(const char *name,
					float countThisSession,
					double sessionLength)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, UpdateAvgRateStat,
					     name, countThisSession,
					     sessionLength);
	return true;
}

bool CSteamUserStats::GetAchievement(const char *name, bool *achieved)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetAchievement,
					     name, achieved);
	*achieved = true;
	return true;
}

bool CSteamUserStats::SetAchievement(const char *name)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, SetAchievement,
					     name);
	return true;
}

bool CSteamUserStats::ClearAchievement(const char *name)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, ClearAchievement,
					     name);
	return true;
}

bool CSteamUserStats::GetAchievementAndUnlockTime(const char *name,
						  bool *achieved,
						  uint32 *unlockTime)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetAchievementAndUnlockTime,
					     name, achieved, unlockTime);
	*achieved = true;
	*unlockTime = 0;
	return true;
}

bool CSteamUserStats::StoreStats()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, StoreStats);
	return true;
}

int CSteamUserStats::GetAchievementIcon(const char *name)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetAchievementIcon,
					     name);
	return 0;
}

const char *CSteamUserStats::GetAchievementDisplayAttribute(const char *name,
							    const char *key)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetAchievementDisplayAttribute,
					     name, key);
	return "AchievementDisplayAttribute";
}

bool CSteamUserStats::IndicateAchievementProgress(const char *name,
						  uint32 curProgress,
						  uint32 maxProgress)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, IndicateAchievementProgress,
					     name, curProgress, maxProgress);
	return true;
}

uint32 CSteamUserStats::GetNumAchievements()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetNumAchievements);
    return 0;
}

const char *CSteamUserStats::GetAchievementName(uint32 achievement)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetAchievementName,
					     achievement);
    return "Achievement Name";
}

SteamAPICall CSteamUserStats::RequestUserStats(CSteamID steamIDUser)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, RequestUserStats,
					     steamIDUser);
	return SteamAPICallInvalid;
}

bool CSteamUserStats::GetUserStat(CSteamID steamIDUser,
				  const char *name,
				  int32 *data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetUserStat,
					     steamIDUser, name, data);
	*data = 0;
	return true;
}

bool CSteamUserStats::GetUserStat(CSteamID steamIDUser,
				  const char *name,
				  float *data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetUserStat,
					     steamIDUser, name, data);
	*data = 0;
	return true;
}

bool CSteamUserStats::GetUserAchievement(CSteamID steamIDUser,
					 const char *name,
					 bool *achieved)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetUserAchievement,
					     steamIDUser, name, achieved);
	*achieved = true;
	return true;
}

bool CSteamUserStats::GetUserAchievementAndUnlockTime(CSteamID steamIDUser,
						      const char *name,
						      bool *achieved,
						      uint32 *unlockTime)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetUserAchievementAndUnlockTime,
					     steamIDUser, name, achieved,
					     unlockTime);
	*achieved = true;
	*unlockTime = 0;
	return true;
}

bool CSteamUserStats::ResetAllStats(bool achievementsToo)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, ResetAllStats,
					     achievementsToo);
	return true;
}

SteamAPICall CSteamUserStats::FindOrCreateLeaderboard(
		const char *leaderboardName,
		LeaderboardSortMethod leaderboardSortMethod,
		LeaderboardDisplayType leaderboardDisplayType)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, FindOrCreateLeaderboard,
					     leaderboardName,
					     leaderboardSortMethod,
					     leaderboardDisplayType);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamUserStats::FindLeaderboard(const char *leaderboardName)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, FindLeaderboard,
					     leaderboardName);
	return SteamAPICallInvalid;
}

const char *CSteamUserStats::GetLeaderboardName(SteamLeaderboard steamLeaderboard)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetLeaderboardName,
					     steamLeaderboard);
	return "LeaderboardName";
}

#include <byteswap.h>
int CSteamUserStats::GetLeaderboardEntryCount(SteamLeaderboard steamLeaderboard)
{
	mLastLeaderboard = steamLeaderboard;
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetLeaderboardEntryCount,
					     steamLeaderboard);
	return 0;
}

LeaderboardSortMethod CSteamUserStats::GetLeaderboardSortMethod(
		SteamLeaderboard steamLeaderboard)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetLeaderboardSortMethod,
					     steamLeaderboard);
	return LeaderboardSortMethodDescending;
}

LeaderboardDisplayType CSteamUserStats::GetLeaderboardDisplayType(
		SteamLeaderboard steamLeaderboard)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetLeaderboardDisplayType,
					     steamLeaderboard);
	return LeaderboardDisplayTypeNumeric;
}

SteamAPICall CSteamUserStats::DownloadLeaderboardEntries(
		SteamLeaderboard steamLeaderboard,
		LeaderboardDataRequest leaderboardDataRequest,
		int rangeStart,
		int rangeEnd)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, DownloadLeaderboardEntries,
					     steamLeaderboard,
					     leaderboardDataRequest,
					     rangeStart, rangeEnd);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamUserStats::DownloadLeaderboardEntriesForUsers(
		SteamLeaderboard steamLeaderboard,
		CSteamID *users,
		int cUsers)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats,
					     DownloadLeaderboardEntriesForUsers,
					     steamLeaderboard,
					     users,
					     cUsers);
	return SteamAPICallInvalid;
}

bool CSteamUserStats::GetDownloadedLeaderboardEntry(
		SteamLeaderboardEntries steamLeaderboardEntries,
		int index,
		LeaderboardEntry *leaderboardEntry,
		int32 *details,
		int detailsMax)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetDownloadedLeaderboardEntry,
					     steamLeaderboardEntries, index,
					     leaderboardEntry, details,
					     detailsMax);
	*details = 0;
	return false;
}

SteamAPICall CSteamUserStats::UploadLeaderboardScore(
		SteamLeaderboard steamLeaderboard,
		LeaderboardUploadScoreMethod leaderboardUploadScoreMethod,
		int32 score,
		const int32 *scoreDetails,
		int scoreDetailsCount)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, UploadLeaderboardScore,
					     steamLeaderboard,
					     leaderboardUploadScoreMethod,
					     score, scoreDetails,
					     scoreDetailsCount);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamUserStats::AttachLeaderboardUGC(
	SteamLeaderboard steamLeaderboard,
	UGCHandle UGC)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, AttachLeaderboardUGC,
					     steamLeaderboard,
					     UGC);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamUserStats::GetNumberOfCurrentPlayers()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats,
	        GetNumberOfCurrentPlayers);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamUserStats::RequestGlobalAchievementPercentages()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats,
						RequestGlobalAchievementPercentages);
	return SteamAPICallInvalid;
}

int CSteamUserStats::GetMostAchievedAchievementInfo(
	char *name,
	uint32 nameBufLen,
	float *percent,
	bool *achieved)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats,
					     GetMostAchievedAchievementInfo,
					     name,
					     nameBugLen,
					     percent,
					     achieved);
	return 0;
}

int CSteamUserStats::GetNextMostAchievedAchievementInfo(
	int iteratorPrevious,
	char *name,
	uint32 nameBufLen,
	float *percent,
	bool *achieved)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats,
					     GetNextMostAchievedAchievementInfo,
					     iteratorPrevious,
					     name,
					     nameBufLen,
					     percent,
					     achieved);
	return 0;
}

bool CSteamUserStats::GetAchievementAchievedPercent(
	const char *name,
	float *percent)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats,
					     GetAchievementAchievedPercent,
					     name,
					     percent);
	*percent = 0;
	return true;
}

SteamAPICall CSteamUserStats::RequestGlobalStats(
	int historyDays)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, RequestGlobalStats,
					     historyDays);
	return SteamAPICallInvalid;
}

bool CSteamUserStats::GetGlobalStat(
	const char *statName,
	int64 *data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetGlobalStat,
					     statName,
					     data);
    *data = 0;
	return true;
}

bool CSteamUserStats::GetGlobalStat(
	const char *statName,
	double *data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetGlobalStat,
					     statName,
					     data);
	return false;
}

int32 CSteamUserStats::GetGlobalStatHistory(
	const char *statName,
	int64 *data,
	uint32 datai)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetGlobalStatHistory,
					     statName,
					     data,
					     datai);
	return 0;
}

int32 CSteamUserStats::GetGlobalStatHistory(
	const char *statName,
	double *data,
	uint32 datai)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamUserStats, GetGlobalStatHistory,
					     statName,
					     data,
					     datai);
	return 0;
}

SteamLeaderboard CSteamUserStats::mLastLeaderboard;

