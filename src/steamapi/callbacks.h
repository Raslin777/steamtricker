
#pragma pack(push, 8)

enum {
	SteamUserCallbacks = 100,
	SteamGameServerCallbacks = 200,
	SteamFriendsCallbacks = 300,
	SteamBillingCallbacks = 400,
	SteamMatchmakingCallbacks = 500,
	SteamContentServerCallbacks = 600,
	SteamUtilsCallbacks = 700,
	ClientFriendsCallbacks = 800,
	ClientUserCallbacks = 900,
	SteamAppsCallbacks = 1000,
	SteamUserStatsCallbacks = 1100,
	SteamNetworkingCallbacks = 1200,
	ClientRemoteStorageCallbacks = 1300,
	SteamUserItemsCallbacks = 1400,
	SteamGameServerItemsCallbacks = 1500,
	ClientUtilsCallbacks = 1600,
	SteamGameCoordinatorCallbacks = 1700,
	SteamGameServerStatsCallbacks = 1800,
	Steam2AsyncCallbacks = 1900,
	SteamGameStatsCallbacks = 2000,
	ClientHTTPCallbacks = 2100,
	ClientScreenshotsCallbacks = 2200,
	SteamScreenshotsCallbacks = 2300,
	ClientAudioCallbacks = 2400,
	ClientUnifiedMessagesCallbacks = 2500,
	SteamStreamLauncherCallbacks = 2600,
	ClientControllerCallbacks = 2700,
	SteamControllerCallbacks = 2800,
	ClientParentalSettingsCallbacks = 2900,
	ClientDeviceAuthCallbacks = 3000,
	ClientNetworkDeviceManagerCallbacks = 3100,
	ClientMusicCallbacks = 3200,
	ClientRemoteClientManagerCallbacks = 3300,
	ClientUGCCallbacks = 3400,
	SteamStreamClientCallbacks = 3500,
	ClientProductBuilderCallbacks = 3600,
	ClientShortcutsCallbacks = 3700,
	ClientRemoteControlManagerCallbacks = 3800,
	SteamAppListCallbacks = 3900,
	SteamMusicCallbacks = 4000,
	SteamMusicRemoteCallbacks = 4100,
	ClientVRCallbacks = 4200,
	ClientReservedCallbacks = 4300,
	SteamReservedCallbacks = 4400,
	SteamHTMLSurfaceCallbacks = 4500,
	ClientVideoCallbacks = 4600
};

struct SteamServersConnected {
	enum {
		mCallback = SteamUserCallbacks + 1
	};
};

struct SteamServerConnectFailure {
	enum {
		mCallback = SteamUserCallbacks + 2
	};

	Result mResult;
};

struct SteamServersDisconnected {
	enum {
		mCallback = SteamUserCallbacks + 3
	};

	Result mResult;
};

struct ClientGameServerDeny {
	enum {
		mCallback = SteamUserCallbacks + 13
	};

	uint32 mAppID;
	uint32 mGameServerIP;
	uint16 mGameServerPort;
	uint16 mSecure;
	uint32 mReason;
};

struct IPCFailure {
	enum {
		mCallback = SteamUserCallbacks + 17
	};

	enum FailureType {
		FailureFlushedCallbackQueue,
		FailurePipeFail,
	};
	uint8 mFailureType;
};

struct ValidateAuthTicketResponse {
	enum {
		mCallback = SteamUserCallbacks + 43
	};

	CSteamID mSteamID;
	AuthSessionResponse mAuthSessionResponse;
};

struct MicroTxnAuthorizationResponse {
	enum {
		mCallback = SteamUserCallbacks + 52
	};

	uint32 mAppID;
	uint64 mOrderID;
	uint8 mAuthorized;
};

struct GSClientApprove {
	enum {
		mCallback = SteamGameServerCallbacks + 1
	};

	CSteamID mSteamID;
};

struct GSClientDeny {
	enum {
		mCallback = SteamGameServerCallbacks + 2
	};

	CSteamID mSteamID;
	DenyReason mDenyReason;
	char mOptionalText[128];
};

struct GSClientKick {
	enum {
		mCallback = SteamGameServerCallbacks + 3
	};

	CSteamID mSteamID;
	DenyReason mDenyReason;
};

struct GSClientAchievementStatus {
	enum {
		mCallback = SteamGameServerCallbacks + 6
	};

	uint64 mSteamID;
	char mAchievement[128];
	bool mUnlocked;
};

struct GSPolicyResponse {
	enum {
		mCallback = SteamUserCallbacks + 15
	};

	uint8 mSecure;
};

struct GSGameplayStats {
	enum {
		mCallback = SteamGameServerCallbacks + 7
	};

	Result mResult;
	int32	mRank;
	uint32	mTotalConnects;
	uint32	mTotalMinutesPlayed;
};

struct GSClientGroupStatus {
	enum {
		mCallback = SteamGameServerCallbacks + 8
	};

	CSteamID mSteamIDUser;
	CSteamID mSteamIDGroup;
	bool mMember;
	bool mOfficer;
};

struct GSReputation {
	enum {
		mCallback = SteamGameServerCallbacks + 9
	};

	Result mResult;
	uint32 mReputationScore;
	bool mBanned;
	uint32 mBannedIP;
	uint16 mBannedPort;
	uint64 mBannedGameID;
	uint32 mBanExpires;
};

struct PersonaStateChange {
	enum {
		mCallback = SteamFriendsCallbacks + 4
	};

	uint64 mSteamID;
	int mChangeFlags;
};

struct GameOverlayActivated {
	enum {
		mCallback = SteamFriendsCallbacks + 31
	};

	uint8 mActive;
};

struct GameServerChangeRequested {
	enum {
		mCallback = SteamFriendsCallbacks + 32
	};

	char mServer[64];
	char mPassword[64];
};

struct GameLobbyJoinRequested {
	enum {
		mCallback = SteamFriendsCallbacks + 33
	};

	CSteamID mSteamIDLobby;
	CSteamID mSteamIDFriend;
};

struct AvatarImageLoaded {
	enum {
		mCallback = SteamFriendsCallbacks + 34
	};

	CSteamID mSteamID;
	int mImage;
	int mWide;
	int mTall;
};

struct ClanOfficerListResponse {
	enum {
		mCallback = SteamFriendsCallbacks + 35
	};

	CSteamID mSteamIDClan;
	int mOfficers;
	uint8 mSuccess;
};

struct FriendRichPresenceUpdate {
	enum {
		mCallback = SteamFriendsCallbacks + 36
	};

	CSteamID mSteamIDFriend;
	AppId mAppID;
};

struct GameRichPresenceJoinRequested {
	enum {
		mCallback = SteamFriendsCallbacks + 37
	};

	CSteamID mSteamIDFriend;
	char mConnect[256];
};

struct GameConnectedClanChatMsg {
	enum {
		mCallback = SteamFriendsCallbacks + 38
	};

	CSteamID mSteamIDClanChat;
	CSteamID mSteamIDUser;
	int mMessageID;
};

struct GameConnectedChatJoin {
	enum {
		mCallback = SteamFriendsCallbacks + 39
	};

	CSteamID mSteamIDClanChat;
	CSteamID mSteamIDUser;
};

struct GameConnectedChatLeave {
	enum {
		mCallback = SteamFriendsCallbacks + 40
	};

	CSteamID mSteamIDClanChat;
	CSteamID mSteamIDUser;
	bool mKicked;
	bool mDropped;
};

struct DownloadClanActivityCountsResult {
	enum {
		mCallback = SteamFriendsCallbacks + 41
	};

	bool mSuccess;
};

struct JoinClanChatRoomCompletionResult {
	enum {
		mCallback = SteamFriendsCallbacks + 42
	};

	CSteamID mSteamIDClanChat;
	ChatRoomEnterResponse mChatRoomEnterResponse;
};

struct GameConnectedFriendChatMsg {
	enum {
		mCallback = SteamFriendsCallbacks + 43
	};

	CSteamID mSteamIDUser;
	int mMessageID;
};

struct FriendsGetFollowerCount {
	enum {
		mCallback = SteamFriendsCallbacks + 44
	};

	Result mResult;
	CSteamID mSteamID;
	int mCount;
};

struct FriendsIsFollowing {
	enum {
		mCallback = SteamFriendsCallbacks + 45
	};

	Result mResult;
	CSteamID mSteamID;
	bool mIsFollowing;
};

struct FriendsEnumerateFollowingList {
	enum {
		mCallback = SteamFriendsCallbacks + 46
	};

	Result mResult;
	CSteamID mSteamID[50];
	int32 mResultsReturned;
	int32 mTotalResultCount;
};

struct SetPersonaNameResponse {
	enum {
		mCallback = SteamFriendsCallbacks + 47
	};

	bool mSuccess;
	bool mLocalSuccess;
	Result mResult;
};

struct FavoritesListChanged {
	enum {
		mCallback = SteamMatchmakingCallbacks + 2
	};

	uint32 mIP;
	uint32 mQueryPort;
	uint32 mConnPort;
	uint32 mAppID;
	uint32 mFlags;
	bool mAdd;
};

struct LobbyInvite {
	enum {
		mCallback = SteamMatchmakingCallbacks + 3
	};

	uint64 mSteamIDUser;
	uint64 mSteamIDLobby;
};

struct LobbyEnter {
	enum {
		mCallback = SteamMatchmakingCallbacks + 4
	};

	uint64 mSteamIDLobby;
	uint32 mChatPermissions;
	bool mLocked;
	uint32 mEChatRoomEnterResponse;
};


struct LobbyDataUpdate {
	enum {
		mCallback = SteamMatchmakingCallbacks + 5
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDMember;
};

struct LobbyChatUpdate {
	enum {
		mCallback = SteamMatchmakingCallbacks + 6
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDUserChanged;
	uint64 mSteamIDMakingChange;
	uint32 mChatMemberStateChange;
};

struct LobbyChatMsg {
	enum {
		mCallback = SteamMatchmakingCallbacks + 7
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDUser;
	uint8 mChatEntryType;
	uint32 mChatID;
};

struct LobbyGameCreated {
	enum {
		mCallback = SteamMatchmakingCallbacks + 9
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDGameServer;
	uint32 mIP;
	uint16 mPort;
};


struct LobbyMatchList {
	enum {
		mCallback = SteamMatchmakingCallbacks + 10
	};

	uint32 mLobbiesMatching;
};

struct LobbyKicked {
	enum {
		mCallback = SteamMatchmakingCallbacks + 12
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDAdmin;
	uint8 mKickedDueToDisconnect;
};


struct LobbyCreated {
	enum {
		mCallback = SteamMatchmakingCallbacks + 13
	};

	Result mResult;
	uint64 mSteamIDLobby;
};

struct PSNGameBootInviteResult {
	enum {
		mCallback = SteamMatchmakingCallbacks + 15
	};

	bool mGameBootInviteExists;
	CSteamID mSteamIDLobby;
};

struct FavoritesListAccountsUpdated {
	enum {
		mCallback = SteamMatchmakingCallbacks + 16
	};

	Result mResult;
};

struct IPCountry {
	enum {
		mCallback = SteamUtilsCallbacks + 1
	};
};

struct LowBatteryPower {
	enum {
		mCallback = SteamUtilsCallbacks + 2
	};

	uint8 mMinutesBatteryLeft;
};

struct SteamAPICallCompleted {
	enum {
		mCallback = SteamUtilsCallbacks + 3
	};

	SteamAPICall mAsyncCall;
};

struct SteamShutdown {
	enum {
		mCallback = SteamUtilsCallbacks + 4
	};
};

struct CheckFileSignature {
	enum {
		mCallback = SteamUtilsCallbacks + 5
	};

	CheckFileSignatureEnum mCheckFileSignature;
};

struct GamepadTextInputDismissed {
	enum {
		mCallback = SteamUtilsCallbacks + 14
	};

	bool mSubmitted;
	uint32 mSubmittedText;
};

struct DlcInstalled {
	enum {
		mCallback = SteamAppsCallbacks + 5
	};
	AppId mAppID;
};

struct RegisterActivationCodeResponse {
	enum {
		mCallback = SteamAppsCallbacks + 8
	};

	RegisterActivationCodeResult mResult;
	uint32 mPackageRegistered;
};

struct AppProofOfPurchaseKeyResponse {
	enum {
		mCallback = SteamAppsCallbacks + 13
	};

	Result mResult;
	uint32 mAppID;
	char mKey[64];
};

struct NewLaunchQueryParameters {
	enum {
		mCallback = SteamAppsCallbacks + 14
	};
};

struct UserStatsReceived {
	enum {
		mCallback = SteamUserStatsCallbacks + 1
	};

	uint64 mGameID;
	Result mResult;
	CSteamID mSteamIDUser;
};

struct UserStatsStored {
	enum {
		mCallback = SteamUserStatsCallbacks + 2
	};

	uint64 mGameID;
	Result mResult;
};

struct UserAchievementStored {
	enum {
		mCallback = SteamUserStatsCallbacks + 3
	};

	uint64 mGameID;
	bool mGroupAchievement;
	char mAchievementName[128];
	uint32 mCurProgress;
	uint32 mMaxProgress;
};

struct LeaderboardFindResult
{
	enum {
		mCallback = SteamUserStatsCallbacks + 4
	};

	SteamLeaderboard mSteamLeaderboard;
	uint8 mLeaderboardFound;
};

struct LeaderboardScoresDownloaded {
	enum {
		mCallback = SteamUserStatsCallbacks + 5
	};

	SteamLeaderboard mSteamLeaderboard;
	SteamLeaderboardEntries mSteamLeaderboardEntries;
	int mEntryCount;
};

struct LeaderboardScoreUploaded {
	enum {
		mCallback = SteamUserStatsCallbacks + 6
	};

	uint8 mSuccess;
	SteamLeaderboard mSteamLeaderboard;
	int32 mScore;
	uint8 mScoreChanged;
	int mGlobalRankNew;
	int mGlobalRankPrevious;
};

struct NumberOfCurrentPlayers
{
	enum {
		mCallback = SteamUserStatsCallbacks + 7
	};

	uint8 mSuccess;
	int32 mPlayers;
};

struct UserStatsUnloaded {
	enum {
		mCallback = SteamUserStatsCallbacks + 8
	};
	CSteamID mSteamIDUser;
};

struct UserAchievementIconFetched {
	enum {
		mCallback = SteamUserStatsCallbacks + 9
	};

	CGameID mGameID;
	char mAchievementName[128];
	bool mAchieved;
	int mIconHandle;
};

struct GlobalAchievementPercentagesReady {
	enum {
		mCallback = SteamUserStatsCallbacks + 10
	};

	uint64 mGameID;
	Result mResult;
};

struct LeaderboardUGCSet {
	enum {
		mCallback = SteamUserStatsCallbacks + 11
	};

	Result mResult;
	SteamLeaderboard mSteamLeaderboard;
};

struct GlobalStatsReceived {
	enum {
		mCallback = SteamUserStatsCallbacks + 12
	};

	uint64 mGameID;
	Result mResult;
};

struct P2PSessionRequest {
	enum {
		mCallback = SteamNetworkingCallbacks + 2
	};

	CSteamID mSteamIDRemote;
};

struct P2PSessionConnectFail {
	enum {
		mCallback = SteamNetworkingCallbacks + 3
	};

	CSteamID mSteamIDRemote;
	uint8 mP2PSessionError;
};

struct SocketStatusCallback {
	enum {
		mCallback = SteamNetworkingCallbacks + 1
	};

	NetSocket mSocket;
	NetListenSocket mListenSocket;
	CSteamID mSteamIDRemote;
	int mSNetSocketState;
};

struct GCMessageAvailable {
	enum {
		mCallback = SteamGameCoordinatorCallbacks + 1
	};

	uint32 mMessageSize;
};

struct GCMessageFailed {
	enum {
		mCallback = SteamGameCoordinatorCallbacks + 2
	};
};

struct GSStatsReceived {
	enum {
		mCallback = SteamGameServerStatsCallbacks
	};

	Result mResult;
	CSteamID mSteamIDUser;
};

struct GSStatsStored {
	enum {
		mCallback = SteamGameServerStatsCallbacks + 1
	};

	Result mResult;
	CSteamID mSteamIDUser;
};

struct GSStatsUnloaded {
	enum {
		mCallback = SteamUserStatsCallbacks + 8
	};

	CSteamID mSteamIDUser;
};

struct GameStatsSessionIssued {
	enum {
		mCallback = SteamGameStatsCallbacks + 1
	};

	uint64 mSessionID;
	Result mResult;
	bool mCollectingAny;
	bool mCollectingDetails;
};

struct GameStatsSessionClosed {
	enum {
		mCallback = SteamGameStatsCallbacks + 2
	};

	uint64 mSessionID;
	Result mResult;
};

struct RemoteStorageAppSyncedClient {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 1
	};

	AppId mAppID;
	Result mResult;
	int mNumDownloads;
};

struct RemoteStorageAppSyncedServer {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 2
	};

	AppId mAppID;
	Result mResult;
	int mNumUploads;
};

struct RemoteStorageAppSyncProgress {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 3
	};

	char mCurrentFile[260];
	AppId mAppID;
	uint32 mBytesTransferredThisChunk;
	double mAppPercentComplete;
	bool mUploading;
};

struct RemoteStorageAppSyncStatusCheck {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 5
	};

	AppId mAppID;
	Result mResult;
};

struct RemoteStorageConflictResolution {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 6
	};

	AppId mAppID;
	Result mResult;
};

struct RemoteStorageFileShareResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 7
	};

	Result mResult;
	UGCHandle mFile;
	char mFilename[260];
};

struct RemoteStoragePublishFileResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 9
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
	bool mUserNeedsToAcceptWorkshopLegalAgreement;
};

struct RemoteStorageDeletePublishedFileResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 11
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
};

struct RemoteStorageEnumerateUserPublishedFilesResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 12
	};

	Result mResult;
	int32 mResultsReturned;
	int32 mTotalResultCount;
	PublishedFileId mPublishedFileId[50];
};

struct RemoteStorageSubscribePublishedFileResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 13
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
};

struct RemoteStorageEnumerateUserSubscribedFilesResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 14
	};

	Result mResult;
	int32 mResultsReturned;
	int32 mTotalResultCount;
	PublishedFileId mPublishedFileId[50];
	uint32 mTimeSubscribed[50];
};

struct RemoteStorageUnsubscribePublishedFileResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 15
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
};

struct RemoteStorageUpdatePublishedFileResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 16
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
	bool mUserNeedsToAcceptWorkshopLegalAgreement;
};

struct RemoteStorageDownloadUGCResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 17
	};

	Result mResult;
	UGCHandle mFile;
	AppId mAppID;
	int32 mSizeInBytes;
	char mFileName[260];
	uint64 mSteamIDOwner;
};

struct RemoteStorageGetPublishedFileDetailsResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 18
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
	AppId mCreatorAppID;
	AppId mConsumerAppID;
	char mTitle[128 + 1];
	char mDescription[8000];
	UGCHandle mFile;
	UGCHandle mPreviewFile;
	uint64 mSteamIDOwner;
	uint32 mTimeCreated;
	uint32 mTimeUpdated;
	RemoteStoragePublishedFileVisibility mVisibility;
	bool mBanned;
	char mTags[1024 + 1];
	bool mTagsTruncated;
	char mFileName[260];
	int32 mFileSize;
	int32 mPreviewFileSize;
	char mURL[256];
	WorkshopFileType mFileType;
	bool mAcceptedForUse;
};

struct RemoteStorageEnumerateWorkshopFilesResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 19
	};

	Result mResult;
	int32 mResultsReturned;
	int32 mTotalResultCount;
	PublishedFileId mPublishedFileId[50];
	float mScore[50];
	AppId mAppId;
	uint32 mStartIndex;
};

struct RemoteStorageGetPublishedItemVoteDetailsResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 20
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
	int32 mVotesFor;
	int32 mVotesAgainst;
	int32 mReports;
	float mScore;
};

struct RemoteStoragePublishedFileSubscribed {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 21
	};

	PublishedFileId mPublishedFileId;
	AppId mAppID;
};

struct RemoteStoragePublishedFileUnsubscribed {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 22
	};

	PublishedFileId mPublishedFileId;
	AppId mAppID;
};

struct RemoteStoragePublishedFileDeleted {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 23
	};

	PublishedFileId mPublishedFileId;
	AppId mAppID;
};

struct RemoteStorageUpdateUserPublishedItemVoteResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 24
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
};

struct RemoteStorageUserVoteDetails {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 25
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
	WorkshopVote mVote;
};

struct RemoteStorageEnumerateUserSharedWorkshopFilesResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 26
	};

	Result mResult;
	int32 mResultsReturned;
	int32 mTotalResultCount;
	PublishedFileId mPublishedFileId[50];
};

struct RemoteStorageSetUserPublishedFileActionResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 27
	};

	Result mResult;
	PublishedFileId mPublishedFileId;
	WorkshopFileAction mAction;
};

struct RemoteStorageEnumeratePublishedFilesByUserActionResult {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 28
	};

	Result mResult;
	WorkshopFileAction mAction;
	int32 mResultsReturned;
	int32 mTotalResultCount;
	PublishedFileId mPublishedFileId[50];
	uint32 mTimeUpdated[50];
};

struct RemoteStoragePublishFileProgress {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 29
	};

	double mPercentFile;
	bool mPreview;
};

struct RemoteStoragePublishedFileUpdated {
	enum {
		mCallback = ClientRemoteStorageCallbacks + 30
	};

	PublishedFileId mPublishedFileId;
	AppId mAppID;
	UGCHandle mFile;
};

struct ScreenshotReady {
	enum {
		mCallback = SteamScreenshotsCallbacks + 1
	};

	ScreenshotHandle mLocal;
	Result mResult;
};

struct ScreenshotRequested {
	enum {
		mCallback = SteamScreenshotsCallbacks + 2
	};
};

struct SteamAppInstalled {
	enum {
		mCallback = SteamAppListCallbacks + 1
	};

	AppId mAppID;
};

struct SteamAppUninstalled {
	enum {
		mCallback = SteamAppListCallbacks + 2
	};

	AppId mAppID;
};

#pragma pack(pop)

class CallbackBase {
public:
	CallbackBase() {
		mCallbackFlags = 0;
		mCallback = 0;
	}

	virtual void Run(void *param) = 0;
	virtual void Run(void *param, bool IOFailure, SteamAPICall steamAPICall) = 0;
	virtual int GetCallbackSizeBytes() = 0;
	int GetICallback() {
		return mCallback;
	}

	bool IsRegistered() {
		return (mCallbackFlags & CallbackFlagsRegistered);
	}

	void ToggleRegistered() {
		mCallbackFlags ^= CallbackFlagsRegistered;
	}

protected:
	enum {
		CallbackFlagsRegistered = 1,
		CallbackFlagsGameServer = 2
	};
	uint8 mCallbackFlags;
	int mCallback;
	friend class CallbackMgr;
};

