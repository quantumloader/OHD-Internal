#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TinkerLoadingScreen

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MoviePlayer_structs.hpp"


namespace SDK
{

// ScriptStruct TinkerLoadingScreen.LoadScreenLevelData
// 0x0068 (0x0068 - 0x0000)
struct FLoadScreenLevelData final 
{
public:
	class FText                                   MapFriendlyName;                                   // 0x0000(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                   GameModeFriendlyName;                              // 0x0018(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              MapLoadingImage;                                   // 0x0030(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bMainMenuMap : 1;                                  // 0x0058(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_FD2[0x3];                                      // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StartingTicketsBlufor;                             // 0x005C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         StartingTicketsOpfor;                              // 0x0060(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct TinkerLoadingScreen.LoadingScreenDescription
// 0x0038 (0x0038 - 0x0000)
struct FLoadingScreenDescription final 
{
public:
	float                                         MinimumLoadingScreenDisplayTime;                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoCompleteWhenLoadingCompletes;                 // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMoviesAreSkippable;                               // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWaitForManualStop;                                // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD3[0x1];                                      // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         MoviePaths;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoviePlaybackType                 PlaybackType;                                      // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowOverlayWidget;                                // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD4[0x6];                                      // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         OverlayWidgetClass;                                // 0x0020(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

