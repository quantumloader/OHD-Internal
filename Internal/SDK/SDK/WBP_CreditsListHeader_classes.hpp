#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CreditsListHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FGameCreditsEntry_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CreditsListHeader.WBP_CreditsListHeader_C
// 0x0048 (0x0278 - 0x0230)
class UWBP_CreditsListHeader_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 DividerLine;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeaderText;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFGameCreditsEntry                     CreditsEntry;                                      // 0x0248(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CreditsListHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void PreConstruct(bool IsDesignTime);
	void SetCreditsEntry(struct FFGameCreditsEntry& Entry, const struct FMargin& HeaderPadding, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_CreditsListHeader_C">();
	}
	static class UWBP_CreditsListHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CreditsListHeader_C>();
	}
};

}

