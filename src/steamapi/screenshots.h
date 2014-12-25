#ifndef STEAMTRICKER_STEAMAPI_SCREENSHOTS_H_
#define STEAMTRICKER_STEAMAPI_SCREENSHOTS_H_

#include "types.h"

/**
 * Interface for SteamScreenshots version 002
 */
class ISteamScreenshots {
public:
	virtual ScreenshotHandle WriteScreenshot(
			void *RGB,
			uint32 RGBi,
			int width,
			int height) = 0;

	virtual ScreenshotHandle AddScreenshotToLibrary(
			const char *filename,
			const char *thumbnailFilename,
			int width,
			int height) = 0;

	virtual void TriggerScreenshot() = 0;

	virtual void HookScreenshots(bool hook) = 0;

	virtual bool SetLocation(
			ScreenshotHandle screenshot,
			const char *location) = 0;

	virtual bool TagUser(
			ScreenshotHandle screenshot,
			CSteamID steamID) = 0;

	virtual bool TagPublishedFile(
			ScreenshotHandle screenshot,
			PublishedFileId publishedFileID) = 0;
};

class CSteamScreenshots : public ISteamScreenshots {
public:
	static CSteamScreenshots& getInstance() {
		static CSteamScreenshots instance;
		return instance;
	}

	ScreenshotHandle WriteScreenshot(
			void *RGB,
			uint32 RGBi,
			int width,
			int height);

	ScreenshotHandle AddScreenshotToLibrary(
			const char *filename,
			const char *thumbnailFilename,
			int width,
			int height);

	void TriggerScreenshot();

	void HookScreenshots(bool hook);

	bool SetLocation(
			ScreenshotHandle screenshot,
			const char *location);

	bool TagUser(
			ScreenshotHandle screenshot,
			CSteamID steamID);

	bool TagPublishedFile(
			ScreenshotHandle screenshot,
			PublishedFileId publishedFileID);	
};

#endif /* STEAMTRICKER_STEAMAPI_SCREENSHOTS_H_ */
