#ifndef STEAMTRICKER_STEAMAPI_FRIENDS_H_
#define STEAMTRICKER_STEAMAPI_FRIENDS_H_

#include "types.h"

/**
 * interface for SteamFriends version 014
 */
class ISteamFriends {
public:
	virtual const char *GetPersonaName() = 0;

	virtual void SetPersonaName(const char *personaName) = 0;

	virtual PersonaState GetPersonaState() = 0;

	virtual int GetFriendCount(int friendFlags) = 0;

	virtual CSteamID GetFriendByIndex(int iFriend, int friendFlags) = 0;

	virtual FriendRelationship GetFriendRelationship(CSteamID steamIDFriend) = 0;

	virtual PersonaState GetFriendPersonaState(CSteamID steamIDFriend) = 0;

	virtual const char *GetFriendPersonaName(CSteamID steamIDFriend) = 0;

	virtual int GetFriendAvatar(CSteamID steamIDFriend, int avatarSize) = 0;

	virtual bool GetFriendGamePlayed(CSteamID steamIDFriend,
				 FriendGameInfo *friendGameInfo) = 0;

	virtual const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend,
						int personaName) = 0;

	virtual bool HasFriend(CSteamID steamIDFriend, int friendFlags) = 0;

	virtual int GetClanCount() = 0;

	virtual CSteamID GetClanByIndex(int clan) = 0;

	virtual const char *GetClanName(CSteamID steamIDClan) = 0;

	virtual int GetFriendCountFromSource(CSteamID steamIDSource) = 0;

	virtual CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) = 0;

	virtual bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) = 0;

	virtual void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool speaking) = 0;

	virtual void ActivateGameOverlay(const char *dialog) = 0;

	virtual void ActivateGameOverlayToUser(const char *dialog, CSteamID steamID) = 0;

	virtual void ActivateGameOverlayToWebPage(const char *url) = 0;

	virtual void ActivateGameOverlayToStore(AppId appID) = 0;

	virtual void SetPlayedWith(CSteamID steamIDUserPlayedWith) = 0;

	virtual const char *GetPlayerNickname(CSteamID steamIDPlayer) = 0;

	virtual const char *GetClanTag(CSteamID steamIDClan) = 0;

	virtual bool GetClanActivityCounts(CSteamID steamIDClan,
									   int *online,
									   int *inGame,
									   int *chatting) = 0;

	virtual SteamAPICall DownloadClanActivityCounts(CSteamID *steamIDClans,
													int clansToRequest) = 0;

	virtual void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) = 0;

	virtual int GetSmallFriendAvatar(CSteamID steamIDFriend) = 0;

	virtual int GetMediumFriendAvatar(CSteamID steamIDFriend) = 0;

	virtual int GetLargeFriendAvatar(CSteamID steamIDFriend) = 0;

	virtual bool RequestUserInformation(CSteamID steamIDUser,
										bool requireNameOnly) = 0;

	virtual SteamAPICall RequestClanOfficerList(CSteamID steamIDClan) = 0;

	virtual CSteamID GetClanOwner(CSteamID steamIDClan) = 0;

	virtual int GetClanOfficerCount(CSteamID steamIDClan) = 0;

	virtual CSteamID GetClanOfficerByIndex(CSteamID steamIDClan,
										   int officer) = 0;

	virtual uint32 GetUserRestrictions() = 0;

	virtual bool SetRichPresence(const char *key, const char *value) = 0;

	virtual void ClearRichPresence() = 0;

	virtual const char *GetFriendRichPresence(CSteamID steamIDFriend,
											  const char *key) = 0;

	virtual int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) = 0;

	virtual const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend,
														int key) = 0;

	virtual void RequestFriendRichPresence(CSteamID steamIDFriend) = 0;

	virtual bool InviteUserToGame(CSteamID steamIDFriend,
								  const char *connectString) = 0;

	virtual int GetCoplayFriendCount() = 0;

	virtual CSteamID GetCoplayFriend(int coplayFriend) = 0;

	virtual int GetFriendCoplayTime(CSteamID steamIDFriend) = 0;

	virtual AppId GetFriendCoplayGame(CSteamID steamIDFriend) = 0;

	virtual SteamAPICall JoinClanChatRoom(CSteamID steamIDClan) = 0;

	virtual bool LeaveClanChatRoom(CSteamID steamIDClan) = 0;

	virtual int GetClanChatMemberCount(CSteamID steamIDClan) = 0;

	virtual CSteamID GetChatMemberByIndex(CSteamID steamIDClan,
										  int user) = 0;

	virtual bool SendClanChatMessage(CSteamID steamIDClanChat,
									 const char *text) = 0;

	virtual int GetClanChatMessage(CSteamID steamIDClanChat,
								   int message,
								   void *text,
								   int textMax,
								   ChatEntryType *chatEntryType,
								   CSteamID *steamIdChatter) = 0;

	virtual bool IsClanChatAdmin(CSteamID steamIDClanChat,
								 CSteamID steamIDUser) = 0;

	virtual bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) = 0;

	virtual bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat) = 0;

	virtual bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat) = 0;

	virtual bool SetListenForFriendsMessages(bool bInterceptEnabled) = 0;

	virtual bool ReplyToFriendMessage(CSteamID steamIDFriend,
									  const char *msgToSend) = 0;

	virtual int GetFriendMessage(CSteamID steamIDFriend,
								 int messageID,
								 void *data,
								 int datai,
								 ChatEntryType *chatEntryType) = 0;

	virtual SteamAPICall GetFollowerCount(CSteamID steamID) = 0;

	virtual SteamAPICall IsFollowing(CSteamID steamID) = 0;

	virtual SteamAPICall EnumerateFollowingList(uint32 startIndex) = 0;
};

class CSteamFriends : public ISteamFriends {
public:
	static CSteamFriends& getInstance() {
		static CSteamFriends instance;
		return instance;
	}

	const char *GetPersonaName();

	void SetPersonaName(const char *personaName);

	PersonaState GetPersonaState();

	int GetFriendCount(int friendFlags);

	CSteamID GetFriendByIndex(int iFriend, int friendFlags);

	FriendRelationship GetFriendRelationship(CSteamID steamIDFriend);

	PersonaState GetFriendPersonaState(CSteamID steamIDFriend);

	const char *GetFriendPersonaName(CSteamID steamIDFriend);

	int GetFriendAvatar(CSteamID steamIDFriend, int avatarSize);

	bool GetFriendGamePlayed(CSteamID steamIDFriend,
				 FriendGameInfo *friendGameInfo);

	const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend,
						int personaName);

	bool HasFriend(CSteamID steamIDFriend, int friendFlags);

	int GetClanCount();

	CSteamID GetClanByIndex(int clan);

	const char *GetClanName(CSteamID steamIDClan);

	int GetFriendCountFromSource(CSteamID steamIDSource);

	CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend);

	bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource);

	void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool speaking);

	void ActivateGameOverlay(const char *dialog);

	void ActivateGameOverlayToUser(const char *dialog, CSteamID steamID);

	void ActivateGameOverlayToWebPage(const char *url);

	void ActivateGameOverlayToStore(AppId appID);

	void SetPlayedWith(CSteamID steamIDUserPlayedWith);

	const char *GetPlayerNickname(CSteamID steamIDPlayer);

	const char *GetClanTag(CSteamID steamIDClan);

	bool GetClanActivityCounts(CSteamID steamIDClan,
							   int *online,
							   int *inGame,
							   int *chatting);

	SteamAPICall DownloadClanActivityCounts(CSteamID *steamIDClans,
											int clansToRequest);

	void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby);

	int GetSmallFriendAvatar(CSteamID steamIDFriend);

	int GetMediumFriendAvatar(CSteamID steamIDFriend);

	int GetLargeFriendAvatar(CSteamID steamIDFriend);

	bool RequestUserInformation(CSteamID steamIDUser,
								bool requireNameOnly);

	SteamAPICall RequestClanOfficerList(CSteamID steamIDClan);

	CSteamID GetClanOwner(CSteamID steamIDClan);

	int GetClanOfficerCount(CSteamID steamIDClan);

	CSteamID GetClanOfficerByIndex(CSteamID steamIDClan,
								   int officer);

	uint32 GetUserRestrictions();

	bool SetRichPresence(const char *key, const char *value);

	void ClearRichPresence();

	const char *GetFriendRichPresence(CSteamID steamIDFriend,
									  const char *key);

	int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend);

	const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend,
												int key);

	void RequestFriendRichPresence(CSteamID steamIDFriend);

	bool InviteUserToGame(CSteamID steamIDFriend,
						  const char *connectString);

	int GetCoplayFriendCount();

	CSteamID GetCoplayFriend(int coplayFriend);

	int GetFriendCoplayTime(CSteamID steamIDFriend);

	AppId GetFriendCoplayGame(CSteamID steamIDFriend);

	SteamAPICall JoinClanChatRoom(CSteamID steamIDClan);

	bool LeaveClanChatRoom(CSteamID steamIDClan);

	int GetClanChatMemberCount(CSteamID steamIDClan);

	CSteamID GetChatMemberByIndex(CSteamID steamIDClan,
								  int user);

	bool SendClanChatMessage(CSteamID steamIDClanChat,
							 const char *text);

	int GetClanChatMessage(CSteamID steamIDClanChat,
						   int message,
						   void *text,
						   int textMax,
						   ChatEntryType *chatEntryType,
						   CSteamID *steamIdChatter);

	bool IsClanChatAdmin(CSteamID steamIDClanChat,
						 CSteamID steamIDUser);

	bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat);

	bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat);

	bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat);

	bool SetListenForFriendsMessages(bool bInterceptEnabled);

	bool ReplyToFriendMessage(CSteamID steamIDFriend,
							  const char *msgToSend);

	int GetFriendMessage(CSteamID steamIDFriend,
						 int messageID,
						 void *data,
						 int datai,
						 ChatEntryType *chatEntryType);

	SteamAPICall GetFollowerCount(CSteamID steamID);

	SteamAPICall IsFollowing(CSteamID steamID);

	SteamAPICall EnumerateFollowingList(uint32 startIndex);
};

#endif /* STEAMTRICKER_STEAMAPI_FRIENDS_H_ */
