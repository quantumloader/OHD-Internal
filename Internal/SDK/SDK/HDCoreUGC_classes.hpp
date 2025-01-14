#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HDCoreUGC

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "HDCoreUGC_structs.hpp"


namespace SDK
{

// Class HDCoreUGC.HDCoreUGCProjectPolicies
// 0x0000 (0x0028 - 0x0028)
class UHDCoreUGCProjectPolicies : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HDCoreUGCProjectPolicies">();
	}
	static class UHDCoreUGCProjectPolicies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHDCoreUGCProjectPolicies>();
	}
};

// Class HDCoreUGC.HDCoreUGCPluginStateMachine
// 0x01F0 (0x0218 - 0x0028)
class UHDCoreUGCPluginStateMachine final  : public UObject
{
public:
	uint8                                         Pad_FA7[0x20];                                     // 0x0028(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHDCoreUGCPluginStateMachineProperties StateProperties;                                   // 0x0048(0x00F8)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_FA8[0xD8];                                     // 0x0140(0x00D8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HDCoreUGCPluginStateMachine">();
	}
	static class UHDCoreUGCPluginStateMachine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHDCoreUGCPluginStateMachine>();
	}
};

// Class HDCoreUGC.HDCoreDefaultUGCProjectPolicies
// 0x0008 (0x0030 - 0x0028)
class UHDCoreDefaultUGCProjectPolicies : public UHDCoreUGCProjectPolicies
{
public:
	uint8                                         Pad_FA9[0x8];                                      // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HDCoreDefaultUGCProjectPolicies">();
	}
	static class UHDCoreDefaultUGCProjectPolicies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHDCoreDefaultUGCProjectPolicies>();
	}
};

// Class HDCoreUGC.HDCoreUGCData
// 0x0000 (0x0030 - 0x0030)
class UHDCoreUGCData : public UPrimaryDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HDCoreUGCData">();
	}
	static class UHDCoreUGCData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHDCoreUGCData>();
	}
};

// Class HDCoreUGC.HDCoreUGCSubsystem
// 0x0130 (0x0160 - 0x0030)
class UHDCoreUGCSubsystem final  : public UEngineSubsystem
{
public:
	uint8                                         Pad_FAA[0x30];                                     // 0x0030(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class UHDCoreUGCPluginStateMachine*> UGCPluginStateMachines;                            // 0x0060(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_FAB[0xA0];                                     // 0x00B0(0x00A0)(Fixing Size After Last Property [ Dumper-7 ])
	class UHDCoreUGCProjectPolicies*              GameSpecificPolicies;                              // 0x0150(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_FAC[0x8];                                      // 0x0158(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HDCoreUGCSubsystem">();
	}
	static class UHDCoreUGCSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHDCoreUGCSubsystem>();
	}
};

// Class HDCoreUGC.HDCoreUGCSubsystemSettings
// 0x0048 (0x0080 - 0x0038)
class UHDCoreUGCSubsystemSettings final  : public UDeveloperSettings
{
public:
	struct FSoftClassPath                         UGCManagerClassName;                               // 0x0038(0x0018)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         DisabledPlugins;                                   // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         AdditionalPluginMetadataKeys;                      // 0x0060(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FAD[0x10];                                     // 0x0070(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HDCoreUGCSubsystemSettings">();
	}
	static class UHDCoreUGCSubsystemSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHDCoreUGCSubsystemSettings>();
	}
};

}

