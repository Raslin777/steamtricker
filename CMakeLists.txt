project(steamtricker)

cmake_minimum_required(VERSION 2.8)

option(USE_REAL_STEAMAPI
	"Pass function and method calls to the real lib_steamapi.so for reverse engeneering"
	OFF)

option(BUILD32
	"build 32bit version"
	OFF)

add_subdirectory(src)