#include <string>

#include "api.h"
#include "friends.h"


const char *CSteamFriends::GetPersonaName()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetPersonaName);
	return "UserName";
}

void CSteamFriends::SetPersonaName(const char *personaName)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, SetPersonaName,
					     personaName);
}

PersonaState CSteamFriends::GetPersonaState()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetPersonaState);
	return PersonaStateOnline;
}

int CSteamFriends::GetFriendCount(int friendFlags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendCount,
					     friendFlags);
	return 0;
}

CSteamID CSteamFriends::GetFriendByIndex(int iFriend, int friendFlags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendByIndex,
					     iFriend, friendFlags);
	return CSteamID(static_cast<uint64>(0));
}

FriendRelationship CSteamFriends::GetFriendRelationship(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendRelationship,
					     steamIDFriend);
	return FriendRelationshipNone;
}

PersonaState CSteamFriends::GetFriendPersonaState(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendPersonaState,
					     steamIDFriend);
	return PersonaStateOnline;
}

const char *CSteamFriends::GetFriendPersonaName(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendPersonaName,
					     steamIDFriend);
	std::string friendName("FriendName ");
	friendName += steamIDFriend.GetAccountID();
	return friendName.c_str();
}

int CSteamFriends::GetFriendAvatar(CSteamID steamIDFriend, int avatarSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendAvatar,
					     steamIDFriend, avatarSize);
	return 0;
}

bool CSteamFriends::GetFriendGamePlayed(CSteamID steamIDFriend,
					FriendGameInfo *friendGameInfo)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendGamePlayed,
					     steamIDFriend, friendGameInfo);
	return true;
}

const char *CSteamFriends::GetFriendPersonaNameHistory(CSteamID steamIDFriend,
						       int personaName)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendPersonaNameHistory,
					     steamIDFriend, personaName);
	return "HistoryOfFriendPersonaName";
}

bool CSteamFriends::HasFriend(CSteamID steamIDFriend, int friendFlags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, HasFriend,
					     steamIDFriend, friendFlags);
	return false;
}

int CSteamFriends::GetClanCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanCount);
	return 0;
}

CSteamID CSteamFriends::GetClanByIndex(int clan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanByIndex,
					     clan);
	return CSteamID(static_cast<uint64>(0));
}

const char *CSteamFriends::GetClanName(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanName,
					     steamIDClan);
	return "ClanName";
}

int CSteamFriends::GetFriendCountFromSource(CSteamID steamIDSource)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendCountFromSource,
					     steamIDSource);
	return 0;
}

CSteamID CSteamFriends::GetFriendFromSourceByIndex(CSteamID steamIDSource,
						   int iFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendFromSourceByIndex,
					     steamIDSource, iFriend);
	return CSteamID();
}

bool CSteamFriends::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, IsUserInSource,
					     steamIDUser, steamIDSource);
	return true;
}

void CSteamFriends::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool speaking)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, SetInGameVoiceSpeaking,
					     steamIDUser, speaking);
}

void CSteamFriends::ActivateGameOverlay(const char *dialog)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ActivateGameOverlay,
					     dialog);
}

void CSteamFriends::ActivateGameOverlayToUser(const char *dialog,
					      CSteamID steamID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ActivateGameOverlayToUser,
					     dialog, steamID);
}

void CSteamFriends::ActivateGameOverlayToWebPage(const char *url)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ActivateGameOverlayToWebPage,
					     url);
}

void CSteamFriends::ActivateGameOverlayToStore(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ActivateGameOverlayToStore,
					     appID);
}

void CSteamFriends::SetPlayedWith(CSteamID steamIDUserPlayedWith)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, SetPlayedWith,
					     steamIDUserPlayedWith);
}

const char *CSteamFriends::GetPlayerNickname(CSteamID steamIDPlayer)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetPlayerNickname,
					     steamIDPlayer);
	return "Player Nickname";
}

const char *CSteamFriends::GetClanTag(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanTag,
										 steamIDClan);
	return "ClanTag";
}

bool CSteamFriends::GetClanActivityCounts(
		CSteamID steamIDClan,
		int *online,
		int *inGame,
		int *chatting)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanActivityCounts,
										 steamIDClan, online, inGame, chatting);
	return false;
}

SteamAPICall CSteamFriends::DownloadClanActivityCounts(
		CSteamID *steamIDClans,
		int clansToRequest)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, DownloadClanActivityCounts,
										 steamIDClan, clansToRequest);
	return SteamAPICallInvalid;
}

void CSteamFriends::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ActivateGameOverlayInviteDialog,
										 steamIDLobby);
}

int CSteamFriends::GetSmallFriendAvatar(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetSmallFriendAvatar,
										 steamIDFriend);
	return 0;
}

int CSteamFriends::GetMediumFriendAvatar(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetMediumFriendAvatar,
										 steamIDFriend);
	return 0;
}

int CSteamFriends::GetLargeFriendAvatar(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetLargeFriendAvatar,
										 steamIDFriend);
	return 0;
}

bool CSteamFriends::RequestUserInformation(
		CSteamID steamIDUser,
		bool requireNameOnly)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, RequestUserInformation,
										 steamIDFriend, requireNameOnly);
	return false;
}

SteamAPICall CSteamFriends::RequestClanOfficerList(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, RequestClanOfficerList,
										 steamIDClan);
	return SteamAPICallInvalid;
}

CSteamID CSteamFriends::GetClanOwner(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanOwner,
										 steamIDClan);
	return CSteamID();
}

int CSteamFriends::GetClanOfficerCount(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanOfficerCount,
										 steamIDClan);
	return 0;
}

CSteamID CSteamFriends::GetClanOfficerByIndex(
		CSteamID steamIDClan,
		int officer)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanOfficerByIndex,
										 steamIDClan, officer);
	return CSteamID();
}

uint32 CSteamFriends::GetUserRestrictions()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetUserRestrictions);
	return 0;
}

bool CSteamFriends::SetRichPresence(const char *key, const char *value)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, SetRichPresence,
										 key, value);
	return false;
}

void CSteamFriends::ClearRichPresence()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ClearRichPresence);
}

const char *CSteamFriends::GetFriendRichPresence(
		CSteamID steamIDFriend,
		const char *key)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendRichPresence,
										 steamIDFriend, key);
	return "FriendRichPresence";
}

int CSteamFriends::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendRichPresenceKeyCount,
										 steamIDFriend);
	return 0;
}

const char *CSteamFriends::GetFriendRichPresenceKeyByIndex(
		CSteamID steamIDFriend,
		int key)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendRichPresenceKeyByIndex,
										 steamIDFriend, key);
	return "FriendRichPresence by index";
}

void CSteamFriends::RequestFriendRichPresence(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, RequestFriendRichPresence,
										 steamIDFriend);
}

bool CSteamFriends::InviteUserToGame(
		CSteamID steamIDFriend,
		const char *connectString)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, InviteUserToGame,
										 steamIDFriend, connectString);
	return false;
}

int CSteamFriends::GetCoplayFriendCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetCoplayFriendCount);
	return 0;
}

CSteamID CSteamFriends::GetCoplayFriend(int coplayFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetCoplayFriend,
										 coplayFriend);
	return CSteamID();
}

int CSteamFriends::GetFriendCoplayTime(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendCoplayTime,
										 steamIDFriend);
	return 0;
}

AppId CSteamFriends::GetFriendCoplayGame(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendCoplayGame,
										 steamIDFriend);
	return AppId(0);
}

SteamAPICall CSteamFriends::JoinClanChatRoom(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, JoinClanChatRoom,
										 steamIDClan);
	return SteamAPICallInvalid;
}

bool CSteamFriends::LeaveClanChatRoom(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, LeaveClanChatRoom,
										 steamIDClan);
	return true;
}

int CSteamFriends::GetClanChatMemberCount(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanChatMemberCount,
										 steamIDClan);
	return 0;
}

CSteamID CSteamFriends::GetChatMemberByIndex(
		CSteamID steamIDClan,
		int user)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetChatMemberByIndex,
										 steamIDClan, user);
	return CSteamID();
}

bool CSteamFriends::SendClanChatMessage(
		CSteamID steamIDClanChat,
		const char *text)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, SendClanChatMessage,
										 steamIDClanChat, text);
	return false;
}

int CSteamFriends::GetClanChatMessage(
		CSteamID steamIDClanChat,
		int message,
		void *text,
		int textMax,
		ChatEntryType *chatEntryType,
		CSteamID *steamIdChatter)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanChatMessage,
										 steamIDClanChat, message,
										 text, textMax,
										 chatEntryType, steamIdChatter);
	return 0;
}

bool CSteamFriends::IsClanChatAdmin(
		CSteamID steamIDClanChat,
		CSteamID steamIDUser)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, IsClanChatAdmin,
										 steamIDClanChat, steamIDUser);
	return false;
}

bool CSteamFriends::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, IsClanChatWindowOpenInSteam,
										 steamIDClanChat);
	return false;
}

bool CSteamFriends::OpenClanChatWindowInSteam(CSteamID steamIDClanChat)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, OpenClanChatWindowInSteam,
										 steamIDClanChat);
	return false;
}

bool CSteamFriends::CloseClanChatWindowInSteam(CSteamID steamIDClanChat)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, CloseClanChatWindowInSteam,
										 steamIDClanChat);
	return true;
}

bool CSteamFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, SetListenForFriendsMessages,
										 bInterceptEnabled);
	return false;
}

bool CSteamFriends::ReplyToFriendMessage(
		CSteamID steamIDFriend,
		const char *msgToSend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ReplyToFriendMessage,
										 steamIDFriend, steamIDFriend);
	return false;
}

int CSteamFriends::GetFriendMessage(
		CSteamID steamIDFriend,
		int messageID,
		void *data,
		int datai,
		ChatEntryType *chatEntryType)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendMessage,
										 steamIDFriend, messageID,
										 data, datai,
										 chatEntryType);
	return 0;
}

SteamAPICall CSteamFriends::GetFollowerCount(CSteamID steamID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFollowerCount,
										 steamID);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamFriends::IsFollowing(CSteamID steamID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, IsFollowing,
										 steamID);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamFriends::EnumerateFollowingList(uint32 startIndex)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, EnumerateFollowingList,
										 startIndex);
	return SteamAPICallInvalid;
}


