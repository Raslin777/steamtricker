# steamapi

# set sources
set(STEAMTRICKER_STEAMAPI_SRC
	api.cc
	applist.cc
	apps.cc
	client.cc
	controller.cc
	friends.cc
	gamecoordinator.cc
	gameserver.cc
	gamestats.cc
	masterserverupdater.cc
	matchmaking.cc
	networking.cc
	remotestorage.cc
	screenshots.cc
	unifiedmessages.cc
	user.cc
	userstats.cc
	utils.cc)

# create the executable
add_library(steamtricker_steamapi ${STEAMTRICKER_STEAMAPI_SRC})
