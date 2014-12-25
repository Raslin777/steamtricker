#include "api.h"
#include "remotestorage.h"


bool CSteamRemoteStorage::FileWrite(
		const char *file,
		const void *data,
		int32 datai)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileWrite,
			file, data, datai);
	return true;
}

int32 CSteamRemoteStorage::FileRead(
		const char *file,
		void *data,
		int32 dataToRead)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileRead,
			file, data, dataToRead);
	return 0;
}

bool CSteamRemoteStorage::FileForget(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileForget,
			file);
	return true;
}

bool CSteamRemoteStorage::FileDelete(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileDelete,
			file);
	return true;
}

SteamAPICall CSteamRemoteStorage::FileShare(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileShare,
			file);
	return SteamAPICallInvalid;
}

bool CSteamRemoteStorage::SetSyncPlatforms(
		const char *file,
		RemoteStoragePlatform remoteStoragePlatform)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, SetSyncPlatforms,
			file, remoteStoragePlatform);
	return true;
}

UGCFileWriteStreamHandle CSteamRemoteStorage::FileWriteStreamOpen(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileWriteStreamOpen,
			file);
	return UGCFileStreamHandleInvalid;
}

bool CSteamRemoteStorage::FileWriteStreamWriteChunk(
		UGCFileWriteStreamHandle writeHandle,
		const void *data,
		int32 datai)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileWriteStreamWriteChunk,
			writeHandle, data, datai);
	return true;
}

bool CSteamRemoteStorage::FileWriteStreamClose(UGCFileWriteStreamHandle writeHandle)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileWriteStreamClose,
			writeHandle);
	return true;
}

bool CSteamRemoteStorage::FileWriteStreamCancel(UGCFileWriteStreamHandle writeHandle)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileWriteStreamCancel,
			writeHandle);
	return true;
}

bool CSteamRemoteStorage::FileExists(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileExists,
			file);
	return false;
}

bool CSteamRemoteStorage::FilePersisted(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FilePersisted,
			file);
	return true;
}

int32 CSteamRemoteStorage::GetFileSize(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetFileSize,
			file);
	return 0;
}

int64 CSteamRemoteStorage::GetFileTimestamp(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetFileTimestamp,
			file);
	return 0;
}

RemoteStoragePlatform CSteamRemoteStorage::GetSyncPlatforms(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetSyncPlatforms,
			file);
	return RemoteStoragePlatformAll;
}

int32 CSteamRemoteStorage::GetFileCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetFileCount);
	return 0;
}

const char *CSteamRemoteStorage::GetFileNameAndSize(
		int file,
		int32 *fileSizeInBytes)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetFileNameAndSize,
			file, fileSizeInBytes);
	return "FileName";
}

bool CSteamRemoteStorage::GetQuota(
		int32 *totalBytes,
		int32 *availableBytes)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetQuota,
			totalBytes, availableBytes);
	return false;
}

bool CSteamRemoteStorage::IsCloudEnabledForAccount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, IsCloudEnabledForAccount);
	return true;
}

bool CSteamRemoteStorage::IsCloudEnabledForApp()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, IsCloudEnabledForApp);
	return true;
}

void CSteamRemoteStorage::SetCloudEnabledForApp(bool enabled)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, SetCloudEnabledForApp,
			enabled);
}

SteamAPICall CSteamRemoteStorage::UGCDownload(UGCHandle content, uint32 priority)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UGCDownload,
			content, priority);
	return SteamAPICallInvalid;
}

bool CSteamRemoteStorage::GetUGCDownloadProgress(
		UGCHandle content,
		int32 *bytesDownloaded,
		int32 *bytesExpected)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, CSteamRemoteStorage,
			content, bytesDownloaded, bytesExpected);
	return false;
}

bool CSteamRemoteStorage::GetUGCDetails(
		UGCHandle content,
		AppId *appID,
		char **name,
		int32 *fileSizeInBytes,
		CSteamID *steamIDOwner)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetUGCDetails,
			content, appID, name, fileSizeInBytes, steamIDOwner);
	return false;
}

int32 CSteamRemoteStorage::UGCRead(
		UGCHandle content,
		void *data,
		int32 dataToRead,
		uint32 offset,
		UGCReadAction action)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UGCRead,
			content, data, dataToRead, offset, action);
	return 0;
}

int32 CSteamRemoteStorage::GetCachedUGCCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetCachedUGCCount);
	return 0;
}

UGCHandle CSteamRemoteStorage::GetCachedUGCHandle(int32 cachedContent)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetCachedUGCHandle,
			cachedContent);
	return UGCHandleInvalid;
}

SteamAPICall CSteamRemoteStorage::PublishWorkshopFile(
		const char *file,
		const char *previewFile,
		AppId consumerAppId,
		const char *title,
		const char *description,
		RemoteStoragePublishedFileVisibility visibility,
		SteamParamStringArray *tags,
		WorkshopFileType workshopFileType)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, PublishWorkshopFile,
			file, previewFile, consumerAppId, title, description,
			visibility, tags, workshopFileType);
	return SteamAPICallInvalid;
}

PublishedFileUpdateHandle CSteamRemoteStorage::CreatePublishedFileUpdateRequest(
		PublishedFileId publishedFileId)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, CreatePublishedFileUpdateRequest,
			publishedFileId);
	return PublishedFileUpdateHandleInvalid;
}

bool CSteamRemoteStorage::UpdatePublishedFileFile(
		PublishedFileUpdateHandle updateHandle,
		const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UpdatePublishedFileFile,
			updateHandle, file);
	return true;
}

bool CSteamRemoteStorage::UpdatePublishedFilePreviewFile(
		PublishedFileUpdateHandle updateHandle,
		const char *previewFile)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UpdatePublishedFilePreviewFile,
			updateHandle, previewFile);
	return true;
}

bool CSteamRemoteStorage::UpdatePublishedFileTitle(
		PublishedFileUpdateHandle updateHandle,
		const char *title)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UpdatePublishedFileTitle,
			updateHandle, title);
	return true;
}

bool CSteamRemoteStorage::UpdatePublishedFileDescription(
		PublishedFileUpdateHandle updateHandle,
		const char *description)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UpdatePublishedFileDescription,
			updateHandle, description);
	return true;
}

bool CSteamRemoteStorage::UpdatePublishedFileVisibility(
		PublishedFileUpdateHandle updateHandle,
		RemoteStoragePublishedFileVisibility visibility)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UpdatePublishedFileVisibility,
			updateHandle, visibility);
	return true;
}

bool CSteamRemoteStorage::UpdatePublishedFileTags(
		PublishedFileUpdateHandle updateHandle,
		SteamParamStringArray *tags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UpdatePublishedFileTags,
				updateHandle, tags);
	return true;
}

SteamAPICall CSteamRemoteStorage::CommitPublishedFileUpdate(
		PublishedFileUpdateHandle updateHandle)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, CommitPublishedFileUpdate,
			updateHandle);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::GetPublishedFileDetails(
		PublishedFileId publishedFileId,
		uint32 maxSecondsOld)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetPublishedFileDetails,
			publishedFileId, maxSecondsOld);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::DeletePublishedFile(
		PublishedFileId publishedFileId)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, DeletePublishedFile,
			publishedFileId);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::EnumerateUserPublishedFiles(
		uint32 startIndex)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, EnumerateUserPublishedFiles,
			startIndex);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::SubscribePublishedFile(
		PublishedFileId publishedFileId)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, SubscribePublishedFile,
			publishedFileId);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::EnumerateUserSubscribedFiles(
		uint32 startIndex)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, EnumerateUserSubscribedFiles,
			startIndex);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::UnsubscribePublishedFile(
		PublishedFileId publishedFileId)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UnsubscribePublishedFile,
			publishedFileId);
	return SteamAPICallInvalid;
}

bool CSteamRemoteStorage::UpdatePublishedFileSetChangeDescription(
		PublishedFileUpdateHandle updateHandle,
		const char *changeDescription)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UpdatePublishedFileSetChangeDescription,
			updateHandle, changeDescription);
	return true;
}

SteamAPICall CSteamRemoteStorage::GetPublishedItemVoteDetails(
		PublishedFileId publishedFileId)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetPublishedItemVoteDetails,
			publishedFileId);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::UpdateUserPublishedItemVote(
		PublishedFileId publishedFileId,
		bool voteUp)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UpdateUserPublishedItemVote,
			publishedFileId, voteUp);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::GetUserPublishedItemVoteDetails(
		PublishedFileId publishedFileId)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetUserPublishedItemVoteDetails,
			publishedFileId);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::EnumerateUserSharedWorkshopFiles(
		CSteamID steamId,
		uint32 startIndex,
		SteamParamStringArray *requiredTags,
		SteamParamStringArray *excludedTags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, EnumerateUserSharedWorkshopFiles,
			steamId, startIndex, requiredTags, excludedTags);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::PublishVideo(
		WorkshopVideoProvider videoProvider,
		const char *videoAccount,
		const char *videoIdentifier,
		const char *previewFile,
		AppId consumerAppId,
		const char *title,
		const char *description,
		RemoteStoragePublishedFileVisibility visibility,
		SteamParamStringArray *tags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, PublishVideo,
			videoProvider, videoAccount, videoIdentifier, previewFile,
			consumerAppId, title, description, visibility, tags);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::SetUserPublishedFileAction(
		PublishedFileId publishedFileId,
		WorkshopFileAction action)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, SetUserPublishedFileAction,
			publishedFileId, action);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::EnumeratePublishedFilesByUserAction(
		WorkshopFileAction action,
		uint32 startIndex)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, EnumeratePublishedFilesByUserAction,
			action, startIndex);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::EnumeratePublishedWorkshopFiles(
		WorkshopEnumerationType enumerationType,
		uint32 startIndex,
		uint32 count,
		uint32 days,
		SteamParamStringArray *tags,
		SteamParamStringArray *userTags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, EnumeratePublishedWorkshopFiles,
			enumerationType, startIndex, count, days, tags, userTags);
	return SteamAPICallInvalid;
}

SteamAPICall CSteamRemoteStorage::UGCDownloadToLocation(
		UGCHandle content,
		const char *location,
		uint32 priority)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, UGCDownloadToLocation,
			content, location, priority);
	return SteamAPICallInvalid;
}

