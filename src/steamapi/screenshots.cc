#include "api.h"
#include "screenshots.h"

ScreenshotHandle CSteamScreenshots::WriteScreenshot(
		void *RGB,
		uint32 RGBi,
		int width,
		int height)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamScreenshots, WriteScreenshot,
			RGB, RGBi, width, height);
	return ScreenshotHandleInvalid;
}

ScreenshotHandle CSteamScreenshots::AddScreenshotToLibrary(
		const char *filename,
		const char *thumbnailFilename,
		int width,
		int height)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamScreenshots, AddScreenshotToLibrary,
			filename, thumbnailFilename, width, height);
	return ScreenshotHandleInvalid;
}

void CSteamScreenshots::TriggerScreenshot()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamScreenshots, TriggerScreenshot);
}

void CSteamScreenshots::HookScreenshots(bool hook)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamScreenshots, HookScreenshots,
			hook);
}

bool CSteamScreenshots::SetLocation(
		ScreenshotHandle screenshot,
		const char *location)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamScreenshots, SetLocation,
			screenshot, location);
	return true;
}

bool CSteamScreenshots::TagUser(
		ScreenshotHandle screenshot,
		CSteamID steamID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamScreenshots, TagUser,
			screenshot, steamID);
	return true;
}

bool CSteamScreenshots::TagPublishedFile(
		ScreenshotHandle screenshot,
		PublishedFileId publishedFileID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamScreenshots, TagPublishedFile,
			screenshot, publishedFileID);
	return true;
}

