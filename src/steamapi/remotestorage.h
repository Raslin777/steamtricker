#ifndef STEAMTRICKER_STEAMAPI_REMOTESTORAGE_H_
#define STEAMTRICKER_STEAMAPI_REMOTESTORAGE_H_

#include "types.h"

/**
 * interface for SteamRemoteStorage version 012
 */
class ISteamRemoteStorage {
public:
	virtual bool FileWrite(
			const char *file,
			const void *data,
			int32 datai) = 0;

	virtual int32 FileRead(
			const char *file,
			void *data,
			int32 dataToRead) = 0;

	virtual bool FileForget(const char *file) = 0;

	virtual bool FileDelete(const char *file) = 0;

	virtual SteamAPICall FileShare(const char *file) = 0;

	virtual bool SetSyncPlatforms(
			const char *file,
			RemoteStoragePlatform remoteStoragePlatform) = 0;

	virtual UGCFileWriteStreamHandle FileWriteStreamOpen(const char *file) = 0;

	virtual bool FileWriteStreamWriteChunk(
			UGCFileWriteStreamHandle writeHandle,
			const void *data,
			int32 datai) = 0;

	virtual bool FileWriteStreamClose(UGCFileWriteStreamHandle writeHandle) = 0;

	virtual bool FileWriteStreamCancel(UGCFileWriteStreamHandle writeHandle) = 0;

	virtual bool FileExists(const char *file) = 0;

	virtual bool FilePersisted(const char *file) = 0;

	virtual int32 GetFileSize(const char *file) = 0;

	virtual int64 GetFileTimestamp(const char *file) = 0;

	virtual RemoteStoragePlatform GetSyncPlatforms(const char *file) = 0;

	virtual int32 GetFileCount() = 0;

	virtual const char *GetFileNameAndSize(
			int file,
			int32 *fileSizeInBytes) = 0;

	virtual bool GetQuota(
			int32 *totalBytes,
			int32 *availableBytes) = 0;

	virtual bool IsCloudEnabledForAccount() = 0;

	virtual bool IsCloudEnabledForApp() = 0;

	virtual void SetCloudEnabledForApp(bool enabled) = 0;

	virtual SteamAPICall UGCDownload(UGCHandle content, uint32 priority) = 0;

	virtual bool GetUGCDownloadProgress(
			UGCHandle content,
			int32 *bytesDownloaded,
			int32 *bytesExpected) = 0;

	virtual bool GetUGCDetails(
			UGCHandle content,
			AppId *appID,
			char **name,
			int32 *fileSizeInBytes,
			CSteamID *steamIDOwner) = 0;

	virtual int32 UGCRead(
			UGCHandle content,
			void *data,
			int32 dataToRead,
			uint32 offset,
			UGCReadAction action) = 0;

	virtual int32 GetCachedUGCCount() = 0;

	virtual	UGCHandle GetCachedUGCHandle(int32 cachedContent) = 0;

	virtual SteamAPICall PublishWorkshopFile(
			const char *file,
			const char *previewFile,
			AppId consumerAppId,
			const char *title,
			const char *description,
			RemoteStoragePublishedFileVisibility visibility,
			SteamParamStringArray *tags,
			WorkshopFileType workshopFileType) = 0;

	virtual PublishedFileUpdateHandle CreatePublishedFileUpdateRequest(
			PublishedFileId publishedFileId) = 0;

	virtual bool UpdatePublishedFileFile(
			PublishedFileUpdateHandle updateHandle,
			const char *file) = 0;

	virtual bool UpdatePublishedFilePreviewFile(
			PublishedFileUpdateHandle updateHandle,
			const char *previewFile) = 0;

	virtual bool UpdatePublishedFileTitle(
			PublishedFileUpdateHandle updateHandle,
			const char *title) = 0;

	virtual bool UpdatePublishedFileDescription(
			PublishedFileUpdateHandle updateHandle,
			const char *description) = 0;

	virtual bool UpdatePublishedFileVisibility(
			PublishedFileUpdateHandle updateHandle,
			RemoteStoragePublishedFileVisibility visibility) = 0;

	virtual bool UpdatePublishedFileTags(
			PublishedFileUpdateHandle updateHandle,
			SteamParamStringArray *tags) = 0;

	virtual SteamAPICall CommitPublishedFileUpdate(
			PublishedFileUpdateHandle updateHandle) = 0;

	virtual SteamAPICall GetPublishedFileDetails(
			PublishedFileId publishedFileId,
			uint32 maxSecondsOld) = 0;

	virtual SteamAPICall DeletePublishedFile(
			PublishedFileId publishedFileId) = 0;

	virtual SteamAPICall EnumerateUserPublishedFiles(
			uint32 startIndex) = 0;

	virtual SteamAPICall SubscribePublishedFile(
			PublishedFileId publishedFileId) = 0;

	virtual SteamAPICall EnumerateUserSubscribedFiles(
			uint32 startIndex) = 0;

	virtual SteamAPICall UnsubscribePublishedFile(
			PublishedFileId publishedFileId) = 0;

	virtual bool UpdatePublishedFileSetChangeDescription(
			PublishedFileUpdateHandle updateHandle,
			const char *changeDescription) = 0;

	virtual SteamAPICall GetPublishedItemVoteDetails(
			PublishedFileId publishedFileId) = 0;

	virtual SteamAPICall UpdateUserPublishedItemVote(
			PublishedFileId publishedFileId,
			bool voteUp) = 0;

	virtual SteamAPICall GetUserPublishedItemVoteDetails(
			PublishedFileId publishedFileId) = 0;

	virtual SteamAPICall EnumerateUserSharedWorkshopFiles(
			CSteamID steamId,
			uint32 startIndex,
			SteamParamStringArray *requiredTags,
			SteamParamStringArray *excludedTags) = 0;

	virtual SteamAPICall PublishVideo(
			WorkshopVideoProvider videoProvider,
			const char *videoAccount,
			const char *videoIdentifier,
			const char *previewFile,
			AppId consumerAppId,
			const char *title,
			const char *description,
			RemoteStoragePublishedFileVisibility visibility,
			SteamParamStringArray *tags) = 0;

	virtual SteamAPICall SetUserPublishedFileAction(
			PublishedFileId publishedFileId,
			WorkshopFileAction action) = 0;

	virtual SteamAPICall EnumeratePublishedFilesByUserAction(
			WorkshopFileAction action,
			uint32 startIndex) = 0;

	virtual SteamAPICall EnumeratePublishedWorkshopFiles(
			WorkshopEnumerationType enumerationType,
			uint32 startIndex,
			uint32 count,
			uint32 days,
			SteamParamStringArray *tags,
			SteamParamStringArray *userTags) = 0;

	virtual SteamAPICall UGCDownloadToLocation(
			UGCHandle content,
			const char *location,
			uint32 priority) = 0;
};

class CSteamRemoteStorage : public ISteamRemoteStorage {
public:
	static CSteamRemoteStorage& getInstance() {
		static CSteamRemoteStorage instance;
		return instance;
	}

	bool FileWrite(
			const char *file,
			const void *data,
			int32 datai);

	int32 FileRead(
			const char *file,
			void *data,
			int32 dataToRead);

	bool FileForget(const char *file);

	bool FileDelete(const char *file);

	SteamAPICall FileShare(const char *file);

	bool SetSyncPlatforms(
			const char *file,
			RemoteStoragePlatform remoteStoragePlatform);

	UGCFileWriteStreamHandle FileWriteStreamOpen(const char *file);

	bool FileWriteStreamWriteChunk(
			UGCFileWriteStreamHandle writeHandle,
			const void *data,
			int32 datai);

	bool FileWriteStreamClose(UGCFileWriteStreamHandle writeHandle);

	bool FileWriteStreamCancel(UGCFileWriteStreamHandle writeHandle);

	bool FileExists(const char *file);

	bool FilePersisted(const char *file);

	int32 GetFileSize(const char *file);

	int64 GetFileTimestamp(const char *file);

	RemoteStoragePlatform GetSyncPlatforms(const char *file);

	int32 GetFileCount();

	const char *GetFileNameAndSize(
			int file,
			int32 *fileSizeInBytes);

	bool GetQuota(
			int32 *totalBytes,
			int32 *availableBytes);

	bool IsCloudEnabledForAccount();

	bool IsCloudEnabledForApp();

	void SetCloudEnabledForApp(bool enabled);

	SteamAPICall UGCDownload(UGCHandle content, uint32 priority);

	bool GetUGCDownloadProgress(
			UGCHandle content,
			int32 *bytesDownloaded,
			int32 *bytesExpected);

	bool GetUGCDetails(
			UGCHandle content,
			AppId *appID,
			char **name,
			int32 *fileSizeInBytes,
			CSteamID *steamIDOwner);

	int32 UGCRead(
			UGCHandle content,
			void *data,
			int32 dataToRead,
			uint32 offset,
			UGCReadAction action);

	int32 GetCachedUGCCount();

	UGCHandle GetCachedUGCHandle(int32 cachedContent);

	SteamAPICall PublishWorkshopFile(
			const char *file,
			const char *previewFile,
			AppId consumerAppId,
			const char *title,
			const char *description,
			RemoteStoragePublishedFileVisibility visibility,
			SteamParamStringArray *tags,
			WorkshopFileType workshopFileType);

	PublishedFileUpdateHandle CreatePublishedFileUpdateRequest(
			PublishedFileId publishedFileId);

	bool UpdatePublishedFileFile(
			PublishedFileUpdateHandle updateHandle,
			const char *file);

	bool UpdatePublishedFilePreviewFile(
			PublishedFileUpdateHandle updateHandle,
			const char *previewFile);

	bool UpdatePublishedFileTitle(
			PublishedFileUpdateHandle updateHandle,
			const char *title);

	bool UpdatePublishedFileDescription(
			PublishedFileUpdateHandle updateHandle,
			const char *description);

	bool UpdatePublishedFileVisibility(
			PublishedFileUpdateHandle updateHandle,
			RemoteStoragePublishedFileVisibility visibility);

	bool UpdatePublishedFileTags(
			PublishedFileUpdateHandle updateHandle,
			SteamParamStringArray *tags);

	SteamAPICall CommitPublishedFileUpdate(
			PublishedFileUpdateHandle updateHandle);

	SteamAPICall GetPublishedFileDetails(
			PublishedFileId publishedFileId,
			uint32 maxSecondsOld);

	SteamAPICall DeletePublishedFile(
			PublishedFileId publishedFileId);

	SteamAPICall EnumerateUserPublishedFiles(
			uint32 startIndex);

	SteamAPICall SubscribePublishedFile(
			PublishedFileId publishedFileId);

	SteamAPICall EnumerateUserSubscribedFiles(
			uint32 startIndex);

	SteamAPICall UnsubscribePublishedFile(
			PublishedFileId publishedFileId);

	bool UpdatePublishedFileSetChangeDescription(
			PublishedFileUpdateHandle updateHandle,
			const char *changeDescription);

	SteamAPICall GetPublishedItemVoteDetails(
			PublishedFileId publishedFileId);

	SteamAPICall UpdateUserPublishedItemVote(
			PublishedFileId publishedFileId,
			bool voteUp);

	SteamAPICall GetUserPublishedItemVoteDetails(
			PublishedFileId publishedFileId);

	SteamAPICall EnumerateUserSharedWorkshopFiles(
			CSteamID steamId,
			uint32 startIndex,
			SteamParamStringArray *requiredTags,
			SteamParamStringArray *excludedTags);

	SteamAPICall PublishVideo(
			WorkshopVideoProvider videoProvider,
			const char *videoAccount,
			const char *videoIdentifier,
			const char *previewFile,
			AppId consumerAppId,
			const char *title,
			const char *description,
			RemoteStoragePublishedFileVisibility visibility,
			SteamParamStringArray *tags);

	SteamAPICall SetUserPublishedFileAction(
			PublishedFileId publishedFileId,
			WorkshopFileAction action);

	SteamAPICall EnumeratePublishedFilesByUserAction(
			WorkshopFileAction action,
			uint32 startIndex);

	SteamAPICall EnumeratePublishedWorkshopFiles(
			WorkshopEnumerationType enumerationType,
			uint32 startIndex,
			uint32 count,
			uint32 days,
			SteamParamStringArray *tags,
			SteamParamStringArray *userTags);

	SteamAPICall UGCDownloadToLocation(
			UGCHandle content,
			const char *location,
			uint32 priority);
};

#endif /* STEAMTRICKER_STEAMAPI_REMOTESTORAGE_H_ */
