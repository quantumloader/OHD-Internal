#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DeployMenu_ClassSelectionPanel

#include "Basic.hpp"

#include "HDMain_structs.hpp"
#include "HDMain_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C
// 0x0090 (0x02C0 - 0x0230)
class UWBP_DeployMenu_ClassSelectionPanel_C final  : public UDeployMenu_ClassSelectionPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ClassScrollBox;                                    // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bPanelInitialized;                                 // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1638[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_HDPlayerControllerBase_C*           HDOwningPlayer;                                    // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle_CheckRestrictions;                     // 0x0250(0x0008)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 KitListingWidgetClass;                             // 0x0258(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TSet<class UHDKit*>                           DesignPreviewKits;                                 // 0x0260(0x0050)(Edit, BlueprintVisible)
	class UHDKit*                                 SelectedClass;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHDTeam                            LastFaction;                                       // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_HDPlayerControllerBase_C* K2Node_DynamicCast_AsBP_HDPlayer_Controller_Base, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWBP_DeployMenu_ClassSelectionListing_C* K2Node_CustomEvent_SelectedClassWidget, class UWBP_DeployMenu_ClassSelectionListing_C* K2Node_CustomEvent_DeselectedClassWidget, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class ADFBasePlayerState* K2Node_DynamicCast_AsDFBase_Player_State, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_GetTeam_ReturnValue, int32 Temp_int_Variable, uint8 CallFunc_GetValidValue_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_DeployMenu_ClassSelectionListing_C* K2Node_DynamicCast_AsWBP_Deploy_Menu_Class_Selection_Listing, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UDFFactionInfo* CallFunc_GetFactionInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_5);
	void OnClassDeselected(class UWBP_DeployMenu_ClassSelectionListing_C* DeselectedClassWidget);
	void OnClassSelected(class UWBP_DeployMenu_ClassSelectionListing_C* SelectedClassWidget);
	void Destruct();
	void CheckRestrictions();
	void LateInit_RepPlayerState();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void RepopulateListByFaction(enum class EHDTeam OwningPlayerTeam, class AHDTeamState* FactionTeamState, class UHDKit* LastSelectedClass, class AHDGameState* CallFunc_GetHDGameState_HDGameState, class ADFTeamState* CallFunc_GetTeamStateById_ReturnValue, class AHDTeamState* K2Node_DynamicCast_AsTeam_State__HD_, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABP_HDPlayerCharacterBase_C* K2Node_DynamicCast_AsBP_HDPlayer_Character_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetClassSelectionState_bClassUpdated, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetClassSelectionState_bClassUpdated_1);
	void InternalPopulateListWithClasses(const TSet<class UHDKit*>& TeamKits, TArray<class UHDKit*>& CallFunc_Set_ToArray_Result, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UHDKit* CallFunc_Array_Get_Item, class UWBP_DeployMenu_ClassSelectionListing_C* CallFunc_InternalCreateClassListingWidget_NewKitListingWidget, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void InternalCreateClassListingWidget(class UHDKit* Kit, class UWBP_DeployMenu_ClassSelectionListing_C** NewKitListingWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_DeployMenu_ClassSelectionListing_C* CallFunc_Create_ReturnValue);
	void ToggleRestrictionsTimer(bool bEnabled, bool bFireOnceImmediately, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SetClassSelectionStateByIndex(int32 ChildIndex, bool bSelected, bool CallFunc_IsValidClassListingIndex_bValidIndex, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_DeployMenu_ClassSelectionListing_C* K2Node_DynamicCast_AsWBP_Deploy_Menu_Class_Selection_Listing, bool K2Node_DynamicCast_bSuccess);
	void InternalDeselectAllClasses(class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWBP_DeployMenu_ClassSelectionListing_C* K2Node_DynamicCast_AsWBP_Deploy_Menu_Class_Selection_Listing, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SelectFirstUnrestrictedClass(bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_DeployMenu_ClassSelectionListing_C* K2Node_DynamicCast_AsWBP_Deploy_Menu_Class_Selection_Listing, bool K2Node_DynamicCast_bSuccess);
	void InternalUpdateSelectionState(class UDeployMenu_ClassSelectionListing* NewSelection, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWBP_DeployMenu_ClassSelectionListing_C* K2Node_DynamicCast_AsWBP_Deploy_Menu_Class_Selection_Listing, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void SetClassSelectionState(class UHDKit* ClassToUpdate, bool bSelected, bool bMatchDisplayNames, bool* bClassUpdated, bool bClassSelected, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_DeployMenu_ClassSelectionListing_C* K2Node_DynamicCast_AsWBP_Deploy_Menu_Class_Selection_Listing, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);

	void IsValidClassListingIndex(int32 ChildIndex, bool* bValidIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_DeployMenu_ClassSelectionPanel_C">();
	}
	static class UWBP_DeployMenu_ClassSelectionPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DeployMenu_ClassSelectionPanel_C>();
	}
};

}
