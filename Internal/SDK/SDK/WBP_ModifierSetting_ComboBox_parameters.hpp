#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModifierSetting_ComboBox

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnSelectionChanged__DelegateSignature
// 0x0011 (0x0011 - 0x0000)
struct WBP_ModifierSetting_ComboBox_C_OnSelectionChanged__DelegateSignature final 
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                        SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.ExecuteUbergraph_WBP_ModifierSetting_ComboBox
// 0x0080 (0x0080 - 0x0000)
struct WBP_ModifierSetting_ComboBox_C_ExecuteUbergraph_WBP_ModifierSetting_ComboBox final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1735[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1736[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0030(0x0018)()
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                        K2Node_ComponentBoundEvent_SelectionType;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1737[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
	class USizeBoxSlot*                           CallFunc_SlotAsSizeBoxSlot_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0011 (0x0011 - 0x0000)
struct WBP_ModifierSetting_ComboBox_C_BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final 
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                        SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModifierSetting_ComboBox_C_PreConstruct final  : public UserWidget_PreConstruct
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.SetSettingText
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModifierSetting_ComboBox_C_SetSettingText final 
{
public:
	class FText                                   InSettingText;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.GetSettingText
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModifierSetting_ComboBox_C_GetSettingText final 
{
public:
	class FText                                   Param_SettingText;                                 // 0x0000(0x0018)(Parm, OutParm)
};

}

