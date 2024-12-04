#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsMenuItem_Arrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FOptionItemSelection_structs.hpp"
#include "EArrowOptionsPreset_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C
// 0x00B0 (0x02E0 - 0x0230)
class UWBP_OptionsMenuItem_Arrow_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                NextOptionBtn;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionText;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PrevOptionBtn;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SelectedOptionSizeBox;                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SelectedOptionText;                                // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0260(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FFOptionItemSelection>          Options;                                           // 0x0278(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SelectedOptionIndex;                               // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_15CF[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   TextDescription;                                   // 0x02A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                         TextWidth;                                         // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EArrowOptionsPreset                OptionsPreset;                                     // 0x02BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_15D0[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFOptionItemSelection>          ScalabilityOptions;                                // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectionChangedByUser;                          // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelectionChanged__DelegateSignature(const class FString& SelectedItemValue, enum class ESelectInfo SelectionType);
	void OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue);
	void ExecuteUbergraph_WBP_OptionsMenuItem_Arrow(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Greater_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_SelectedItemValue, enum class ESelectInfo K2Node_CustomEvent_SelectionType, bool K2Node_SwitchEnum_CmpSuccess);
	void OnItemSelectionChanged(const class FString& SelectedItemValue, enum class ESelectInfo SelectionType);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ClearOptions();
	void INTERNAL_SetSelectedOptionByIndex(int32 Index, enum class ESelectInfo SelectionType, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void GetSelectedOptionValue(class FString* OptionValue, const class FString& CallFunc_GetOptionValueAtIndex_OptionValue);
	void GetOptionValueAtIndex(int32 Index, class FString* OptionValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& K2Node_Select_Default);
	void AddOption(struct FFOptionItemSelection& NewOption, int32 CallFunc_Array_Add_ReturnValue);
	void GetOptionCount(int32* OptionCount, int32 CallFunc_Array_Length_ReturnValue);
	void RemoveOptionAtIndex(int32 IndexToRemove, bool* bRemovalSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void INTERNAL_ClearSelection(enum class ESelectInfo DeselectionType);
	void ClearSelection();
	void SetSelectedOptionByIndex(int32 Index);
	void FindOptionValueIndex(const class FString& OptionValue, int32* Index, const class FString& InOptionValue, int32 OptionIndex, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFOptionItemSelection& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void PopulateOptionsByPreset(enum class EArrowOptionsPreset Preset, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFOptionItemSelection& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetSelectedOptionByValue(const class FString& OptionValue, int32 CallFunc_FindOptionValueIndex_Index, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void SetSelectedOption(class FText OptionDisplayName, int32 CallFunc_FindOptionIndex_Index, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void FindOptionIndex(class FText OptionDisplayName, int32* Index, class FText InOptionDisplayName, int32 OptionIndex, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFOptionItemSelection& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_OptionsMenuItem_Arrow_C">();
	}
	static class UWBP_OptionsMenuItem_Arrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionsMenuItem_Arrow_C>();
	}
};

}
