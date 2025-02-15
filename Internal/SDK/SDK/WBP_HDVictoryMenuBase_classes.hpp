#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDVictoryMenuBase

#include "Basic.hpp"

#include "HDMain_structs.hpp"
#include "HDMain_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C
// 0x00E0 (0x0330 - 0x0250)
class UWBP_HDVictoryMenuBase_C final  : public UVictoryMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             BluforForceText;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BluforTeamScoreText;                               // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ElapsedTimeText;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GameModeNameText;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MapNameText;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OpforForceText;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OpforTeamScoreText;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             VictoryText;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   BluforVictoryText;                                 // 0x0298(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OpforVictoryText;                                  // 0x02B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NoTeamVictoryText;                                 // 0x02C8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly)
	class UAudioComponent*                        MenuMusicAC;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             WinMusicBlufor;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             WinMusicOpfor;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LossMusicBlufor;                                   // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LossMusicOpfor;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHDTeamState*                           WinningTeamState;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHDTeamState*                           BluforTeamState;                                   // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BluforFactionInfoClass;                            // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHDTeamState*                           OpforTeamState;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 OpforFactionInfoClass;                             // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_HDVictoryMenuBase(int32 EntryPoint, class AHDTeamState* CallFunc_GetHDTeamStateForTeam_HDTeamState, class AHDTeamState* CallFunc_GetHDTeamStateForTeam_HDTeamState_1, class AHDTeamState* CallFunc_GetHDTeamStateForTeam_HDTeamState_2, class UClass* K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base_1, bool K2Node_ClassDynamicCast_bSuccess_1);
	void OnVictoryInit();
	void Construct();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetupVictoryText(enum class EHDTeam Temp_byte_Variable, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue);
	void SetupForceNameText();
	void SetupMapNameText(bool Temp_bool_Variable, const class FString& CallFunc_GetMapName_ReturnValue, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class ATBWorldSettings* K2Node_DynamicCast_AsTBWorld_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue);
	void SetupElapsedTimeText(int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetupGameModeNameText(bool Temp_bool_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsDFBase_Game_Mode, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue);
	void SetupTeamScoreText(class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
	void PlayWinLossMenuMusic(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, enum class EHDTeam CallFunc_GetPlayerTeam_PlayerTeam, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class USoundBase* CallFunc_GetMusicTrackToUse_SoundToUse, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);

	void GetMusicTrackToUse(enum class EHDTeam PlayerTeam, bool bPlayerWon, class USoundBase** SoundToUse, class USoundBase* Temp_object_Variable, enum class EHDTeam Temp_byte_Variable, class USoundBase* Temp_object_Variable_1, bool Temp_bool_Variable, enum class EHDTeam Temp_byte_Variable_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2) const;
	void GetPlayerTeam(enum class EHDTeam* PlayerTeam, bool Temp_bool_Variable, enum class EHDTeam Temp_byte_Variable, enum class EHDTeam Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class EHDTeam Temp_byte_Variable_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EHDTeam K2Node_Select_Default, enum class EHDTeam K2Node_Select_Default_1, enum class EHDTeam K2Node_Select_Default_2) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_HDVictoryMenuBase_C">();
	}
	static class UWBP_HDVictoryMenuBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HDVictoryMenuBase_C>();
	}
};

}

