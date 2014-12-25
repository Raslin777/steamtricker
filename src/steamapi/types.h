#ifndef STEAMTRICKER_STEAMAPI_TYPES_H_
#define STEAMTRICKER_STEAMAPI_TYPES_H_

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>


// FIXME
// FIXME
// FIXME
// FIXME
// FIXME
class ISteamHTTP{};
class CSteamHTTP : public ISteamHTTP {
  public:
	static CSteamHTTP& getInstance() {
		static CSteamHTTP instance;
		return instance;
	}
};
class ISteamUGC{};
class CSteamUGC : public ISteamUGC {
  public:
	static CSteamUGC& getInstance() {
		static CSteamUGC instance;
		return instance;
	}
};
class ISteamMusic{};
class CSteamMusic : public ISteamMusic {
  public:
	static CSteamMusic& getInstance() {
		static CSteamMusic instance;
		return instance;
	}
};
class ISteamMusicRemote{};
class CSteamMusicRemote : public ISteamMusicRemote {
  public:
	static CSteamMusicRemote& getInstance() {
		static CSteamMusicRemote instance;
		return instance;
	}
};
class ISteamHTMLSurface{};
class CSteamHTMLSurface : public ISteamHTMLSurface {
  public:
	static CSteamHTMLSurface& getInstance() {
		static CSteamHTMLSurface instance;
		return instance;
	}
};


typedef uint64_t uint64;
typedef uint32_t uint32;
typedef uint16_t uint16;
typedef uint8_t uint8;

typedef int64_t int64;
typedef int32_t int32;
typedef int16_t int16;
typedef int8_t int8;

typedef uint64 SteamAPICall;
typedef int32 SteamPipeId;
typedef int32 SteamUserId;
typedef uint32 AppId;
typedef uint32 Time32;
typedef uint32 NetSocket;
typedef uint32 NetListenSocket;
typedef uint32 AuthTicket;
typedef uint64 SteamLeaderboard;
typedef uint64 SteamLeaderboardEntries;
typedef uint64 UGCHandle;
typedef uint64 UGCFileWriteStreamHandle;
typedef uint64 PublishedFileId;
typedef uint64 PublishedFileUpdateHandle;
typedef uint32 DepotId;
typedef uint32 ScreenshotHandle;
typedef uint64 ClientUnifiedMessageHandle;

typedef int ServerQuery;
typedef void* ServerListRequest;

const SteamAPICall SteamAPICallInvalid = 0;
const UGCFileWriteStreamHandle UGCFileStreamHandleInvalid = -1;
const UGCHandle UGCHandleInvalid = -1;
const PublishedFileUpdateHandle PublishedFileUpdateHandleInvalid = -1;
const AppId AppIdInvalid = 0;
const ScreenshotHandle ScreenshotHandleInvalid = 0;
const ClientUnifiedMessageHandle UnifiedMessageHandleInvalid = 0;

extern "C" typedef void (*SteamAPIWarningMessageHook)(int, const char *);
extern "C" typedef void (*SteamAPI_PostAPIResultInProcess)(SteamAPICall callHandle,
															void *,
															uint32 callbackSize,
															int callbackNum);
extern "C" typedef uint32 (*SteamAPI_CheckCallbackRegistered)(int callbackNum);


enum Result
{
	ResultOK = 1,
	ResultFail = 2,
	ResultNoConnection = 3,
	/* removed */
	ResultInvalidPassword = 5,
	ResultLoggedInElsewhere = 6,
	ResultInvalidProtocolVer = 7,
	ResultInvalidParam = 8,
	ResultFileNotFound = 9,
	ResultBusy = 10,
	ResultInvalidState = 11,
	ResultInvalidName = 12,
	ResultInvalidEmail = 13,
	ResultDuplicateName = 14,
	ResultAccessDenied = 15,
	ResultTimeout = 16,
	ResultBanned = 17,
	ResultAccountNotFound = 18,
	ResultInvalidSteamID = 19,
	ResultServiceUnavailable = 20,
	ResultNotLoggedOn = 21,
	ResultPending = 22,
	ResultEncryptionFailure = 23,
	ResultInsufficientPrivilege = 24,
	ResultLimitExceeded = 25,
	ResultRevoked = 26,
	ResultExpired = 27,
	ResultAlreadyRedeemed = 28,
	ResultDuplicateRequest = 29,
	ResultAlreadyOwned = 30,
	ResultIPNotFound = 31,
	ResultPersistFailed = 32,
	ResultLockingFailed = 33,
	ResultLogonSessionReplaced = 34,
	ResultConnectFailed = 35,
	ResultHandshakeFailed = 36,
	ResultIOFailure = 37,
	ResultRemoteDisconnect = 38,
	ResultShoppingCartNotFound = 39,
	ResultBlocked = 40,
	ResultIgnored = 41,
	ResultNoMatch = 42,
	ResultAccountDisabled = 43,
	ResultServiceReadOnly = 44,
	ResultAccountNotFeatured = 45,
	ResultAdministratorOK = 46,
	ResultContentVersion = 47,
	ResultTryAnotherCM = 48,
	ResultPasswordRequiredToKickSession = 49,
	ResultAlreadyLoggedInElsewhere = 50,
	ResultSuspended = 51,
	ResultCancelled = 52,
	ResultDataCorruption = 53,
	ResultDiskFull = 54,
	ResultRemoteCallFailed = 55
};

enum Universe {
	UniverseInvalid = 0,
	UniversePublic = 1,
	UniverseBeta = 2,
	UniverseInternal = 3,
	UniverseDev = 4,
	UniverseRC = 5,
	UniverseMax
};

enum NotificationPosition {
	PositionTopLeft = 0,
	PositionTopRight = 1,
	PositionBottomLeft = 2,
	PositionBottomRight = 3
};

enum SteamAPICallFailure {
	SteamAPICallFailureNone = -1,
	SteamAPICallFailureSteamGone = 0,
	SteamAPICallFailureNetworkFailure = 1,
	SteamAPICallFailureInvalidHandle = 2,
	SteamAPICallFailureMismatchedCallback = 3
};

enum ServerMode {
	ServerModeInvalid = 0,
	ServerModeNoAuthentication = 1,
	ServerModeAuthentication = 2,
	ServerModeAuthenticationAndSecure = 3
};

enum PersonaState {
	PersonaStateOffline = 0,
	PersonaStateOnline = 1,
	PersonaStateBusy = 2,
	PersonaStateAway = 3,
	PersonaStateSnooze = 4,
	PersonaStateMax
};

enum AccountType {
	AccountTypeInvalid = 0,
	AccountTypeIndividual = 1,
	AccountTypeMultiseat = 2,
	AccountTypeGameServer = 3,
	AccountTypeAnonGameServer = 4,
	AccountTypePending = 5,
	AccountTypeContentServer = 6,
	AccountTypeClan = 7,
	AccountTypeChat = 8,
	AccountTypeAnonUser = 10,
	AccountTypeMax
};

enum FriendRelationship {
	FriendRelationshipNone = 0,
	FriendRelationshipBlocked = 1,
	FriendRelationshipRequestRecipient = 2,
	FriendRelationshipFriend = 3,
	FriendRelationshipRequestInitiator = 4,
	FriendRelationshipIgnored = 5,
	FriendRelationshipIgnoredFriend = 6
};

enum NetSocketConnectionType {
	NetSocketConnectionTypeNotConnected = 0,
	NetSocketConnectionTypeUDP = 1,
	NetSocketConnectionTypeUDPRelay = 2
};

enum LobbyComparison {
	LobbyComparisonEqualToOrLessThan = -2,
	LobbyComparisonLessThan = -1,
	LobbyComparisonEqual = 0,
	LobbyComparisonGreaterThan = 1,
	LobbyComparisonEqualToOrGreaterThan = 2,
	LobbyComparisonNotEqual = 3
};

enum LobbyDistanceFilter {
	LobbyDistanceFilterClose,
	LobbyDistanceFilterDefault,
	LobbyDistanceFilterFar,
	LobbyDistanceFilterWorldwide
};

enum LobbyType {
	LobbyTypeFriendsOnly = 1,
	LobbyTypePublic = 2,
	LobbyTypeInvisible = 3
};

enum ChatEntryType {
	ChatEntryTypeInvalid = 0, 
	ChatEntryTypeChatMsg = 1,
	ChatEntryTypeTyping = 2,
	ChatEntryTypeInviteGame = 3,
	ChatEntryTypeEmote = 4,
	ChatEntryTypeLobbyGameStart = 5,
	ChatEntryTypeLeftConversation = 6
};

enum GameCoordResult {
	GameCoordResultOK = 0,
	GameCoordResultNoMessage = 1,
	GameCoordResultBufferTooSmall = 2,
	GameCoordResultNotLoggedOn = 3,
	GameCoordResultInvalidMessage = 4
};

enum UserHasLicenseForAppResult
{
	UserHasLicenseResultHasLicense = 0,
	UserHasLicenseResultDoesNotHaveLicense = 1,
	UserHasLicenseResultNoAuth = 2
};

enum MatchMakingServerResponse
{
	ServerResponded = 0,
	ServerFailedToRespond,
	NoServersListedOnMasterServer
};

enum VoiceResult {
	VoiceResultOK = 0,
	VoiceResultNotInitialized = 1,
	VoiceResultNotRecording = 2,
	VoiceResultNoData = 3,
	VoiceResultBufferTooSmall = 4,
	VoiceResultDataCorrupted = 5
};

enum BeginAuthSessionResult {
	BeginAuthSessionResultOK = 0,
	BeginAuthSessionResultInvalidTicket = 1,
	BeginAuthSessionResultDuplicateRequest = 2,
	BeginAuthSessionResultInvalidVersion = 3,
	BeginAuthSessionResultGameMismatch = 4,
	BeginAuthSessionResultExpiredTicket = 5
};

enum LeaderboardDataRequest {
	LeaderboardDataRequestGlobal = 0,
	LeaderboardDataRequestGlobalAroundUser = 1,
	LeaderboardDataRequestFriends = 2
};

enum LeaderboardSortMethod {
	LeaderboardSortMethodNone = 0,
	LeaderboardSortMethodAscending = 1,
	LeaderboardSortMethodDescending = 2
};

enum LeaderboardDisplayType {
	LeaderboardDisplayTypeNone = 0, 
	LeaderboardDisplayTypeNumeric = 1,
	LeaderboardDisplayTypeTimeSeconds = 2,
	LeaderboardDisplayTypeTimeMilliSeconds = 3
};

enum LeaderboardUploadScoreMethod {
	LeaderboardUploadScoreMethodNone = 0,
	LeaderboardUploadScoreMethodKeepBest = 1,
	LeaderboardUploadScoreMethodForceUpdate = 2
};

enum P2PSessionError {
	P2PSessionErrorNone = 0,
	P2PSessionErrorNotRunningApp = 1,
	P2PSessionErrorNoRightsToApp = 2,
	P2PSessionErrorDestinationNotLoggedIn = 3,
	P2PSessionErrorTimeout = 4,
	P2PSessionErrorMax = 5
};

enum P2PSendType {
	P2PSendUnreliable = 0,
	P2PSendUnreliableNoDelay = 1,
	P2PSendReliable = 2,
	P2PSendReliableWithBuffering = 3
};

enum SNetSocketState {
	SNetSocketStateInvalid = 0,
	SNetSocketStateConnected = 1,
	SNetSocketStateInitiated = 10,
	SNetSocketStateLocalCandidatesFound = 11,
	SNetSocketStateReceivedRemoteCandidates = 12,
	SNetSocketStateChallengeHandshake = 15,
	SNetSocketStateDisconnecting = 21,
	SNetSocketStateLocalDisconnect = 22,
	SNetSocketStateTimeoutDuringConnect = 23,
	SNetSocketStateRemoteEndDisconnected = 24,
	SNetSocketStateConnectionBroken = 25
};

enum DenyReason {
	DenyInvalid = 0,
	DenyInvalidVersion = 1,
	DenyGeneric = 2,
	DenyNotLoggedOn = 3,
	DenyNoLicense = 4,
	DenyCheater = 5,
	DenyLoggedInElseWhere = 6,
	DenyUnknownText = 7,
	DenyIncompatibleAnticheat = 8,
	DenyMemoryCorruption = 9,
	DenyIncompatibleSoftware = 10,
	DenySteamConnectionLost = 11,
	DenySteamConnectionError = 12,
	DenySteamResponseTimedOut = 13,
	DenySteamValidationStalled = 14,
	DenySteamOwnerLeftGuestUser = 15
};

enum AuthSessionResponse {
	AuthSessionResponseOK = 0,
	AuthSessionResponseUserNotConnectedToSteam = 1,
	AuthSessionResponseNoLicenseOrExpired = 2,
	AuthSessionResponseVACBanned = 3,
	AuthSessionResponseLoggedInElseWhere = 4,
	AuthSessionResponseVACCheckTimedOut = 5,
	AuthSessionResponseAuthTicketCanceled = 6,
	AuthSessionResponseAuthTicketInvalidAlreadyUsed = 7,
	AuthSessionResponseAuthTicketInvalid = 8
};

enum RegisterActivationCodeResult {
	RegisterActivationCodeResultOK = 0,
	RegisterActivationCodeResultFail = 1,
	RegisterActivationCodeResultAlreadyRegistered = 2,
	RegisterActivationCodeResultTimeout = 3,
	RegisterActivationCodeAlreadyOwned = 4
};

enum UserRestriction {
	UserRestrictionNone = 0,
	UserRestrictionUnknown = 1,
	UserRestrictionAnyChat = 2,
	UserRestrictionVoiceChat = 4,
	UserRestrictionGroupChat = 8,
	UserRestrictionRating = 16,
	UserRestrictionGameInvites = 32,
	UserRestrictionTrading = 64
};

enum OverlayToStoreFlag {
	OverlayToStoreFlag_None = 0,
	OverlayToStoreFlag_AddToCart = 1,
	OverlayToStoreFlag_AddToCartAndShow = 2
};

enum FriendFlags {
	FriendFlagNone = 0x00,
	FriendFlagBlocked = 0x01,
	FriendFlagFriendshipRequested = 0x02,
	FriendFlagImmediate = 0x04,
	FriendFlagClanMember = 0x08,
	FriendFlagOnGameServer = 0x10,
	FriendFlagHasPlayedWith = 0x20,
	FriendFlagFriendOfFriend = 0x40,
	FriendFlagRequestingFriendship = 0x80,
	FriendFlagRequestingInfo = 0x100,
	FriendFlagIgnored = 0x200,
	FriendFlagIgnoredFriend = 0x400,
	FriendFlagSuggested = 0x800,
	FriendFlagAll = 0xFFFF,
};

enum PersonaChange {
	PersonaChangeName = 0x0001,
	PersonaChangeStatus = 0x0002,
	PersonaChangeComeOnline = 0x0004,
	PersonaChangeGoneOffline = 0x0008,
	PersonaChangeGamePlayed = 0x0010,
	PersonaChangeGameServer = 0x0020,
	PersonaChangeAvatar = 0x0040,
	PersonaChangeJoinedSource= 0x0080,
	PersonaChangeLeftSource = 0x0100,
	PersonaChangeRelationshipChanged = 0x0200,
	PersonaChangeNameFirstSet = 0x0400,
	PersonaChangeFacebookInfo = 0x0800,
	PersonaChangeNickname = 0x1000,
	PersonaChangeSteamLevel = 0x2000
};

enum AppReleaseState {
	AppReleaseState_Unknown = 0,
	AppReleaseState_Unavailable = 1,
	AppReleaseState_Prerelease = 2,
	AppReleaseState_PreloadOnly = 3,
	AppReleaseState_Released = 4
};

enum AppOwnershipFlags {
	AppOwnershipFlags_None = 0x0000,
	AppOwnershipFlags_OwnsLicense = 0x0001,
	AppOwnershipFlags_FreeLicense = 0x0002,
	AppOwnershipFlags_RegionRestricted = 0x0004,
	AppOwnershipFlags_LowViolence = 0x0008,
	AppOwnershipFlags_InvalidPlatform = 0x0010,
	AppOwnershipFlags_SharedLicense = 0x0020,
	AppOwnershipFlags_FreeWeekend = 0x0040,
	AppOwnershipFlags_RetailLicense = 0x0080,
	AppOwnershipFlags_LicenseLocked = 0x0100,
	AppOwnershipFlags_LicensePending = 0x0200,
	AppOwnershipFlags_LicenseExpired = 0x0400,
	AppOwnershipFlags_LicensePermanent = 0x0800,
	AppOwnershipFlags_LicenseRecurring = 0x1000,
	AppOwnershipFlags_LicenseCanceled = 0x2000
};

enum AppType {
	AppType_Invalid = 0x000,
	AppType_Game = 0x001,
	AppType_Application = 0x002,
	AppType_Tool = 0x004,
	AppType_Demo = 0x008,
	AppType_Media_DEPRECATED = 0x010,
	AppType_DLC = 0x020,
	AppType_Guide = 0x040,
	AppType_Driver = 0x080,
	AppType_Config = 0x100,
	AppType_Film = 0x200,
	AppType_TVSeries = 0x400,
	AppType_Video = 0x800,
	AppType_Plugin = 0x1000,
	AppType_Music = 0x2000,
	AppType_Shortcut = 0x40000000,
	AppType_DepotOnly = 0x80000000
};

enum SteamUserStatType {
	SteamUserStatTypeINVALID = 0,
	SteamUserStatTypeINT = 1,
	SteamUserStatTypeFLOAT = 2,
	SteamUserStatTypeAVGRATE = 3,
	SteamUserStatTypeACHIEVEMENTS = 4,
	SteamUserStatTypeGROUPACHIEVEMENTS = 5,
	SteamUserStatTypeMAX
};

enum ChatRoomEnterResponse {
	ChatRoomEnterResponseSuccess = 1,
	ChatRoomEnterResponseDoesntExist = 2,
	ChatRoomEnterResponseNotAllowed = 3,
	EChatRoomEnterResponseFull = 4,
	ChatRoomEnterResponseError = 5,
	ChatRoomEnterResponseBanned = 6,
	ChatRoomEnterResponseLimited = 7,
	ChatRoomEnterResponseClanDisabled = 8,
	ChatRoomEnterResponseCommunityBan = 9,
	ChatRoomEnterResponseMemberBlockedYou = 10,
	ChatRoomEnterResponseYouBlockedMember = 11,
	ChatRoomEnterResponseNoRankingDataLobby = 12,
	ChatRoomEnterResponseNoRankingDataUser = 13,
	ChatRoomEnterResponseRankOutOfRange = 14
};

enum MarketingMessageFlags {
	MarketingMessageFlagsNone = 0,
	MarketingMessageFlagsHighPriority = 1 << 0,
	MarketingMessageFlagsPlatformWindows = 1 << 1,
	MarketingMessageFlagsPlatformMac = 1 << 2,
	MarketingMessageFlagsPlatformLinux = 1 << 3,
	MarketingMessageFlagsPlatformRestrictions =
		MarketingMessageFlagsPlatformWindows |
		MarketingMessageFlagsPlatformMac |
		MarketingMessageFlagsPlatformLinux,
};

enum ResolveConflict {
	ResolveConflictKeepClient = 1,
	ResolveConflictKeepServer = 2
};

enum RemoteStoragePlatform {
	RemoteStoragePlatformNone = 0,
	RemoteStoragePlatformWindows = (1 << 0),
	RemoteStoragePlatformOSX = (1 << 1),
	RemoteStoragePlatformPS3 = (1 << 2),
	RemoteStoragePlatformLinux = (1 << 3),
	RemoteStoragePlatformReserved2 = (1 << 4),
	RemoteStoragePlatformAll = 0xffffffff
};

enum RemoteStoragePublishedFileVisibility {
	RemoteStoragePublishedFileVisibilityPublic = 0,
	RemoteStoragePublishedFileVisibilityFriendsOnly = 1,
	RemoteStoragePublishedFileVisibilityPrivate = 2
};

enum WorkshopFileType {
	WorkshopFileTypeFirst = 0,
	WorkshopFileTypeCommunity = 0,
	WorkshopFileTypeMicrotransaction = 1,
	WorkshopFileTypeCollection = 2,
	WorkshopFileTypeArt = 3,
	WorkshopFileTypeVideo = 4,
	WorkshopFileTypeScreenshot = 5,
	WorkshopFileTypeGame = 6,
	WorkshopFileTypeSoftware = 7,
	WorkshopFileTypeConcept = 8,
	WorkshopFileTypeWebGuide = 9,
	WorkshopFileTypeIntegratedGuide = 10,
	WorkshopFileTypeMerch = 11,
	WorkshopFileTypeControllerBinding = 12,
	WorkshopFileTypeSteamworksAccessInvite = 13,
	WorkshopFileTypeSteamVideo = 14,
	WorkshopFileTypeMax = 15
};

enum WorkshopVote {
	WorkshopVoteUnvoted = 0,
	WorkshopVoteFor = 1,
	WorkshopVoteAgainst = 2
};

enum WorkshopFileAction {
	WorkshopFileActionPlayed = 0,
	WorkshopFileActionCompleted = 1
};

enum WorkshopEnumerationType {
	WorkshopEnumerationTypeRankedByVote = 0,
	WorkshopEnumerationTypeRecent = 1,
	WorkshopEnumerationTypeTrending = 2,
	WorkshopEnumerationTypeFavoritesOfFriends = 3,
	WorkshopEnumerationTypeVotedByFriends = 4,
	WorkshopEnumerationTypeContentByFriends = 5,
	WorkshopEnumerationTypeRecentFromFollowedUsers = 6
};

enum WorkshopVideoProvider {
	WorkshopVideoProviderNone = 0,
	WorkshopVideoProviderYoutube = 1
};

enum UGCReadAction {
	UGCRead_ContinueReadingUntilFinished = 0,
	UGCRead_ContinueReading = 1,
	UGCRead_Close = 2
};

enum GamepadTextInputMode {
	GamepadTextInputModeNormal = 0,
	GamepadTextInputModePassword = 1
};

enum GamepadTextInputLineMode {
	GamepadTextInputLineModeSingleLine = 0,
	GamepadTextInputLineModeMultipleLines = 1
};

enum CheckFileSignatureEnum {
	CheckFileSignatureInvalidSignature = 0,
	CheckFileSignatureValidSignature = 1,
	CheckFileSignatureFileNotFound = 2,
	CheckFileSignatureNoSignaturesFoundForThisApp = 3,
	CheckFileSignatureNoSignaturesFoundForThisFile = 4,
};

enum SteamControllerPad {
	SteamControllerPad_Left,
	SteamControllerPad_Right
};

const int SteamAccountInstanceMask = 0x000FFFFF;
enum ChatSteamIDInstanceFlags {
	ChatAccountInstanceMask = 0x00000FFF,
	ChatInstanceFlagClan = ( SteamAccountInstanceMask + 1 ) >> 1,
	ChatInstanceFlagLobby = ( SteamAccountInstanceMask + 1 ) >> 2,
	ChatInstanceFlagMMSLobby = ( SteamAccountInstanceMask + 1 ) >> 3
};


#pragma pack(push, 1)
class CSteamID {
public:
	CSteamID() {
		mSteamid.mComp.mAccountID = 0;
		mSteamid.mComp.mAccountType = AccountTypeInvalid;
		mSteamid.mComp.mUniverse = UniverseInvalid;
		mSteamid.mComp.mAccountInstance = 0;
	}

	CSteamID(uint32 accountID, Universe universe, AccountType accountType)
	{
		Set(accountID, universe, accountType);
	}

	CSteamID(uint32 accountID,
		 unsigned int accountInstance,
		 Universe universe,
		 AccountType accountType)
	{
		InstancedSet(accountID, accountInstance, universe, accountType);
	}

	CSteamID(uint64 steamID)
	{
		SetFromUint64(steamID);
	}

	void Set(uint32 accountID, Universe universe, AccountType accountType)
	{
		mSteamid.mComp.mAccountID = accountID;
		mSteamid.mComp.mUniverse = universe;
		mSteamid.mComp.mAccountType = accountType;
		mSteamid.mComp.mAccountInstance = !(accountType == AccountTypeClan);
	}

	void InstancedSet(uint32 accountID,
			  uint32 instance,
			  Universe universe,
			  AccountType accountType)
	{
		mSteamid.mComp.mAccountID = accountID;
		mSteamid.mComp.mUniverse = universe;
		mSteamid.mComp.mAccountType = accountType;
		mSteamid.mComp.mAccountInstance = instance;
	}

	void FullSet(uint64 identifier, Universe universe, AccountType accountType)
	{
		mSteamid.mComp.mAccountID = (identifier & 0xFFFFFFFF);
		mSteamid.mComp.mAccountInstance = ( (identifier >> 32 ) & 0xFFFFF );
		mSteamid.mComp.mUniverse = universe;
		mSteamid.mComp.mAccountType = accountType;
	}

	void SetFromUint64(uint64 steamID)
	{
		mSteamid.mAll64Bits = steamID;
	}

	uint64 ConvertToUint64() const
	{
		return mSteamid.mAll64Bits;
	}

	uint64 GetStaticAccountKey() const
	{
		return (uint64) ( (((uint64) mSteamid.mComp.mUniverse) << 56) +
				  ((uint64) mSteamid.mComp.mAccountType << 52 ) + 
				  mSteamid.mComp.mAccountID );
	}

	void CreateBlankAnonLogon(Universe universe)
	{
		mSteamid.mComp.mAccountID = 0;
		mSteamid.mComp.mAccountType = AccountTypeAnonGameServer;
		mSteamid.mComp.mUniverse = universe;
		mSteamid.mComp.mAccountInstance = 0;
	}

	void CreateBlankAnonUserLogon(Universe universe)
	{
		mSteamid.mComp.mAccountID = 0;
		mSteamid.mComp.mAccountType = AccountTypeAnonUser;
		mSteamid.mComp.mUniverse = universe;
		mSteamid.mComp.mAccountInstance = 0;
	}

	bool BBlankAnonAccount() const
	{
		return mSteamid.mComp.mAccountID == 0 &&
		       BAnonAccount() &&
		       mSteamid.mComp.mAccountInstance == 0;
	}

	bool BGameServerAccount() const
	{
		return mSteamid.mComp.mAccountType == AccountTypeGameServer ||
		       mSteamid.mComp.mAccountType == AccountTypeAnonGameServer;
	}

	bool BContentServerAccount() const
	{
		return mSteamid.mComp.mAccountType == AccountTypeContentServer;
	}

	bool BClanAccount() const
	{
		return mSteamid.mComp.mAccountType == AccountTypeClan;
	}

	bool BChatAccount() const
	{
		return mSteamid.mComp.mAccountType == AccountTypeChat;
	}

	bool IsLobby() const
	{
		return ( mSteamid.mComp.mAccountType == AccountTypeChat) &&
		       ( mSteamid.mComp.mAccountInstance & ChatInstanceFlagLobby);
	}

	bool BIndividualAccount() const
	{
		return mSteamid.mComp.mAccountType == AccountTypeIndividual;
	}

	bool BAnonAccount() const
	{
		return mSteamid.mComp.mAccountType == AccountTypeAnonUser ||
		       mSteamid.mComp.mAccountType == AccountTypeAnonGameServer;
	}

	bool BAnonUserAccount() const
	{
		return mSteamid.mComp.mAccountType == AccountTypeAnonUser;
	}

	void SetAccountID(uint32 accountID)
	{
		mSteamid.mComp.mAccountID = accountID;
	}

	uint32 GetAccountID() const {
		return mSteamid.mComp.mAccountID;
	}

	uint32 GetUnAccountInstance() const {
		return mSteamid.mComp.mAccountInstance;
	}

	AccountType GetEAccountType() const {
		return (AccountType) mSteamid.mComp.mAccountType;
	}

	Universe GetEUniverse() const {
		return mSteamid.mComp.mUniverse;
	}

	void SetEUniverse(Universe universe) {
		mSteamid.mComp.mUniverse = universe;
	}

	bool IsValid() const;

	explicit CSteamID(const char *steamID, Universe defaultUniverse = UniverseInvalid)
	{
		if (steamID == NULL)
			return;

		int server = 0;
		int authID = 0;
		char authIDStr[ 64 ];

		strncpy(authIDStr, steamID, 63);

		char *tmp = strtok(authIDStr, ":");
		while((tmp = strtok(NULL, ":"))) {
			char *tmp2 = strtok(NULL, ":");
			if(tmp2) {
				server = atoi(tmp);
				authID = atoi(tmp2);
			}
		}

		if(authID == 0)
			return;

		uint64 friendID = (uint64)authID * 2;
		friendID += 76561197960265728 + server;

		SetFromUint64(friendID);
	}

	const char * Render() const
	{
		static char steamIDStr[64];
		switch(mSteamid.mComp.mAccountType) {
			case AccountTypeInvalid:
			case AccountTypeIndividual:
				snprintf(steamIDStr,
					  sizeof(steamIDStr),
					  "STEAM_0:%u:%u",
					  (mSteamid.mComp.mAccountID % 2) ? 1 : 0,
					  (int32)mSteamid.mComp.mAccountID/2);
				break;
			default:
				snprintf(steamIDStr,
					  sizeof(steamIDStr),
					  "%"PRIu64,
					  ConvertToUint64());
		}
		return steamIDStr;
	}

	static const char * Render(uint64 steamID)
	{
		return CSteamID(steamID).Render();
	}

	void SetFromString(const char *steamID, Universe defaultUniverse);
	bool SetFromSteam2String(const char *steam2ID, Universe universe);

	inline bool operator==(const CSteamID &val) const
	{
		return mSteamid.mAll64Bits == val.mSteamid.mAll64Bits;
	} 

	inline bool operator!=(const CSteamID &val) const
	{
		return !operator==(val);
	}

	inline bool operator<(const CSteamID &val) const {
		return mSteamid.mAll64Bits < val.mSteamid.mAll64Bits;
	}

	inline bool operator>(const CSteamID &val) const {
		return mSteamid.mAll64Bits > val.mSteamid.mAll64Bits;
	}

	bool BValidExternalSteamID() const;

private:
	CSteamID(uint32);
	CSteamID(int32);

	union SteamID
	{
		struct SteamIDComponent
		{
			uint32 mAccountID : 32;
			unsigned int mAccountInstance : 20;
			unsigned int mAccountType : 4;
			Universe mUniverse : 8;
		} mComp;

		uint64 mAll64Bits;
	} mSteamid;
};

inline bool CSteamID::IsValid() const
{
	if(mSteamid.mComp.mAccountType <= AccountTypeInvalid ||
	   mSteamid.mComp.mAccountType >= AccountTypeMax)
		return false;
	
	if(mSteamid.mComp.mUniverse <= UniverseInvalid ||
	   mSteamid.mComp.mUniverse >= UniverseMax)
		return false;

	if(mSteamid.mComp.mAccountType == AccountTypeIndividual) {
		if(mSteamid.mComp.mAccountID == 0 ||
		   mSteamid.mComp.mAccountInstance != 1)
			return false;
	}

	if(mSteamid.mComp.mAccountType == AccountTypeClan) {
		if(mSteamid.mComp.mAccountID == 0 ||
		   mSteamid.mComp.mAccountInstance != 0)
			return false;
	}

	return true;
}

class CGameID
{
public:

	CGameID()
	{
		mGameID.mType = GameIDTypeApp;
		mGameID.mAppID = AppIdInvalid;
		mGameID.mModID = 0;
	}

	explicit CGameID(uint64 gameID)
	{
		mGameIDAll = gameID;
	}

	explicit CGameID(int32 appID)
	{
		mGameIDAll = 0;
		mGameID.mAppID = appID;
	}

	explicit CGameID(uint32 appID)
	{
		mGameIDAll = 0;
		mGameID.mAppID = appID;
	}

	CGameID(uint32 appID, uint32 modID)
	{
		mGameIDAll = 0;
		mGameID.mAppID = appID;
		mGameID.mModID = modID;
		mGameID.mType = GameIDTypeGameMod;
	}

	explicit CGameID(const char *pchGameID);

	const char *Render() const;

	static const char *Render( uint64 ulGameID );

	uint64 ToUint64() const
	{
		return mGameIDAll;
	}

	uint64 *GetUint64Ptr()
	{
		return &mGameIDAll;
	}

	bool IsMod() const
	{
		return (mGameID.mType == GameIDTypeGameMod);
	}

	bool IsShortcut() const
	{
		return (mGameID.mType == GameIDTypeShortcut);
	}

	bool IsP2PFile() const
	{
		return (mGameID.mType == GameIDTypeP2P);
	}

	bool IsSteamApp() const
	{
		return (mGameID.mType == GameIDTypeApp);
	}

	uint32 ModID() const
	{
		return mGameID.mModID;
	}

	uint32 AppID() const
	{
		return mGameID.mAppID;
	}

	bool operator == (const CGameID &rhs) const
	{
		return mGameIDAll == rhs.mGameIDAll;
	}

	bool operator != (const CGameID &rhs) const
	{
		return !operator==(rhs);
	}

	bool operator < (const CGameID &rhs) const
	{
		return (mGameIDAll < rhs.mGameIDAll );
	}

	bool IsValid() const
	{
		switch(mGameID.mType)
		{
		case GameIDTypeApp:
			return mGameID.mAppID != AppIdInvalid;
		case GameIDTypeGameMod:
			return mGameID.mAppID != AppIdInvalid &&
			       mGameID.mModID & 0x80000000;
		case GameIDTypeShortcut:
			return (mGameID.mModID & 0x80000000) != 0;
		case GameIDTypeP2P:
			return mGameID.mAppID == AppIdInvalid &&
			       mGameID.mModID & 0x80000000;
		default:
			return false;
		}

	}

	void Reset() 
	{
		mGameIDAll = 0;
	}

private:
	enum GameIDType
	{
		GameIDTypeApp = 0,
		GameIDTypeGameMod = 1,
		GameIDTypeShortcut = 2,
		GameIDTypeP2P = 3
	};

	struct GameID
	{
		unsigned int mAppID : 24;
		unsigned int mType : 8;
		unsigned int mModID : 32;
	};

	union
	{
		uint64 mGameIDAll;
		GameID mGameID;
	};
};

struct SteamControllerState {
	uint32 mPacketNum;
	uint64 mButtons;
	short mLeftPadX;
	short mLeftPadY;
	short mRightPadX;
	short mRightPadY;
};
#pragma pack(pop)

#pragma pack(push, 8)
struct P2PSessionState {
	uint8 mConnectionActive;
	uint8 mConnecting;
	uint8 mP2PSessionError;
	uint8 mUsingRelay;
	int32 mBytesQueuedForSend;
	int32 mPacketsQueuedForSend;
	uint32 mRemoteIP;
	uint16 mRemotePort;
};

struct FriendGameInfo {
	CGameID mGameID;
	uint32 mGameIP;
	uint16 mGamePort;
	uint16 mQueryPort;
	CSteamID mSteamIDLobby;
};

struct LeaderboardEntry {
	CSteamID mSteamIDUser;
	int32 mGlobalRank;
	int32 mScore;
	int32 mDetails;
};

struct FriendSessionStateInfo {
	uint32 mOnlineSessionInstances;
	uint8 mPublishedToFriendsSessionInstance;
};

struct SteamParamStringArray {
	const char **mStrings;
	int32 mNumStrings;
};

#pragma pack(pop)


#include "callbacks.h"

#endif /* STEAMTRICKER_STEAMAPI_TYPES_H_ */
