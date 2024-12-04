#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerListModifierSettings_BasicFilters

#include "Basic.hpp"

#include "WBP_ServerListModifierSettings_BasicFilters_classes.hpp"
#include "WBP_ServerListModifierSettings_BasicFilters_parameters.hpp"


namespace SDK
{

// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnSortPreferenceChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFServerSortPreference           SortPreference                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerListModifierSettings_BasicFilters_C::OnSortPreferenceChanged__DelegateSignature(const struct FFServerSortPreference& SortPreference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "OnSortPreferenceChanged__DelegateSignature");

	Params::WBP_ServerListModifierSettings_BasicFilters_C_OnSortPreferenceChanged__DelegateSignature Parms{};

	Parms.SortPreference = std::move(SortPreference);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnFilterSettingsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UClass*, struct FHDFilterRuleParams>ActiveFilters                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ServerListModifierSettings_BasicFilters_C::OnFilterSettingsChanged__DelegateSignature(const TMap<class UClass*, struct FHDFilterRuleParams>& ActiveFilters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "OnFilterSettingsChanged__DelegateSignature");

	Params::WBP_ServerListModifierSettings_BasicFilters_C_OnFilterSettingsChanged__DelegateSignature Parms{};

	Parms.ActiveFilters = std::move(ActiveFilters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UClass*, struct FHDFilterRuleParams>CallFunc_GetFilterRules_FilterRules                    ()
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           K2Node_ComponentBoundEvent_SelectedItem_1              (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo                  K2Node_ComponentBoundEvent_SelectionType_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFServerSortPreference           CallFunc_GetSelectedServerSortPreference_SortPreference(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           K2Node_ComponentBoundEvent_SelectedItem                (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo                  K2Node_ComponentBoundEvent_SelectionType               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFServerSortPreference           K2Node_MakeStruct_FServerSortPreference                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFServerSortPreference           CallFunc_GetSelectedServerSortPreference_SortPreference_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           K2Node_CustomEvent_Rule                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHDFilterRuleParams              K2Node_CustomEvent_RuleParams                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>                  CallFunc_GetAllChildren_ReturnValue                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// FDelegateProperty_                      K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UWidget*                          CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ServerListModifierSetting_FilterRule_Toggle_C*K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule_Toggle(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_ServerListModifierSetting_FilterRule_C*K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_DoesImplementInterface_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility             CallFunc_GetVisibility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UClass*, struct FHDFilterRuleParams>CallFunc_GetFilterRules_FilterRules_1                  ()
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ServerListModifierSettings_BasicFilters_C::ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters(int32 EntryPoint, const TMap<class UClass*, struct FHDFilterRuleParams>& CallFunc_GetFilterRules_FilterRules, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, const struct FFServerSortPreference& CallFunc_GetSelectedServerSortPreference_SortPreference, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, const struct FFServerSortPreference& K2Node_MakeStruct_FServerSortPreference, const struct FFServerSortPreference& CallFunc_GetSelectedServerSortPreference_SortPreference_1, class UClass* K2Node_CustomEvent_Rule, const struct FHDFilterRuleParams& K2Node_CustomEvent_RuleParams, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_ServerListModifierSetting_FilterRule_Toggle_C* K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule_Toggle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ServerListModifierSetting_FilterRule_C* K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesImplementInterface_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, const TMap<class UClass*, struct FHDFilterRuleParams>& CallFunc_GetFilterRules_FilterRules_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters");

	Params::WBP_ServerListModifierSettings_BasicFilters_C_ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFilterRules_FilterRules = std::move(CallFunc_GetFilterRules_FilterRules);
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = std::move(K2Node_ComponentBoundEvent_SelectedItem_1);
	Parms.K2Node_ComponentBoundEvent_SelectionType_1 = K2Node_ComponentBoundEvent_SelectionType_1;
	Parms.CallFunc_GetSelectedServerSortPreference_SortPreference = std::move(CallFunc_GetSelectedServerSortPreference_SortPreference);
	Parms.K2Node_ComponentBoundEvent_SelectedItem = std::move(K2Node_ComponentBoundEvent_SelectedItem);
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.K2Node_MakeStruct_FServerSortPreference = std::move(K2Node_MakeStruct_FServerSortPreference);
	Parms.CallFunc_GetSelectedServerSortPreference_SortPreference_1 = std::move(CallFunc_GetSelectedServerSortPreference_SortPreference_1);
	Parms.K2Node_CustomEvent_Rule = K2Node_CustomEvent_Rule;
	Parms.K2Node_CustomEvent_RuleParams = std::move(K2Node_CustomEvent_RuleParams);
	Parms.CallFunc_GetAllChildren_ReturnValue = std::move(CallFunc_GetAllChildren_ReturnValue);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule_Toggle = K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule_Toggle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule = K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_GetFilterRules_FilterRules_1 = std::move(CallFunc_GetFilterRules_FilterRules_1);
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.FilterSettingChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Rule                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHDFilterRuleParams              RuleParams                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ServerListModifierSettings_BasicFilters_C::FilterSettingChanged(class UClass* Rule, const struct FHDFilterRuleParams& RuleParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "FilterSettingChanged");

	Params::WBP_ServerListModifierSettings_BasicFilters_C_FilterSettingChanged Parms{};

	Parms.Rule = Rule;
	Parms.RuleParams = std::move(RuleParams);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ServerListModifierSettings_BasicFilters_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo                  SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerListModifierSettings_BasicFilters_C::BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature");

	Params::WBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerListModifierSettings_BasicFilters_C::BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerListModifierSettings_BasicFilters_C::BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo                  SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerListModifierSettings_BasicFilters_C::BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	Params::WBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetSelectedServerSortPreference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFServerSortPreference           SortPreference                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHDListSortOrder             Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHDListSortOrder             Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFServerSortPreference           K2Node_MakeStruct_FServerSortPreference                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsActive_bActive                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetSelectedIndex_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetSelectedIndex_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHDListSortOrder             K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   CallFunc_Conv_IntToByte_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   CallFunc_GetValidValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFServerSortPreference           K2Node_MakeStruct_FServerSortPreference_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFServerSortPreference           K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerListModifierSettings_BasicFilters_C::GetSelectedServerSortPreference(struct FFServerSortPreference* SortPreference, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class EHDListSortOrder Temp_byte_Variable, enum class EHDListSortOrder Temp_byte_Variable_1, const struct FFServerSortPreference& K2Node_MakeStruct_FServerSortPreference, bool CallFunc_IsActive_bActive, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue_1, enum class EHDListSortOrder K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const struct FFServerSortPreference& K2Node_MakeStruct_FServerSortPreference_1, const struct FFServerSortPreference& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "GetSelectedServerSortPreference");

	Params::WBP_ServerListModifierSettings_BasicFilters_C_GetSelectedServerSortPreference Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_FServerSortPreference = std::move(K2Node_MakeStruct_FServerSortPreference);
	Parms.CallFunc_IsActive_bActive = CallFunc_IsActive_bActive;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue_1 = CallFunc_GetSelectedIndex_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_MakeStruct_FServerSortPreference_1 = std::move(K2Node_MakeStruct_FServerSortPreference_1);
	Parms.K2Node_Select_Default_1 = std::move(K2Node_Select_Default_1);

	UObject::ProcessEvent(Func, &Parms);

	if (SortPreference != nullptr)
		*SortPreference = Parms.SortPreference;
}


// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetFilterRules
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    bActiveOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class UClass*, struct FHDFilterRuleParams>FilterRules                                            (Parm, OutParm)
// TMap<class UClass*, struct FHDFilterRuleParams>Rules                                                  (Edit, BlueprintVisible)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetChildAt_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ServerFilterRuleSetting_C>K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetChildrenCount_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsFilterEnabled_bActive                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LessEqual_IntInt_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_ServerFilterRuleSetting_C>K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting_1  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility             CallFunc_GetVisibility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           CallFunc_GetFilterRulePair_Rule                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHDFilterRuleParams              CallFunc_GetFilterRulePair_RuleParams                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsActive_bActive                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ServerListModifierSettings_BasicFilters_C::GetFilterRules(bool bActiveOnly, TMap<class UClass*, struct FHDFilterRuleParams>* FilterRules, const TMap<class UClass*, struct FHDFilterRuleParams>& Rules, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, TScriptInterface<class IBPI_ServerFilterRuleSetting_C> K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_IsFilterEnabled_bActive, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TScriptInterface<class IBPI_ServerFilterRuleSetting_C> K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting_1, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, class UClass* CallFunc_GetFilterRulePair_Rule, const struct FHDFilterRuleParams& CallFunc_GetFilterRulePair_RuleParams, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsActive_bActive) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListModifierSettings_BasicFilters_C", "GetFilterRules");

	Params::WBP_ServerListModifierSettings_BasicFilters_C_GetFilterRules Parms{};

	Parms.bActiveOnly = bActiveOnly;
	Parms.Rules = std::move(Rules);
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting = K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_IsFilterEnabled_bActive = CallFunc_IsFilterEnabled_bActive;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting_1 = K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_GetFilterRulePair_Rule = CallFunc_GetFilterRulePair_Rule;
	Parms.CallFunc_GetFilterRulePair_RuleParams = std::move(CallFunc_GetFilterRulePair_RuleParams);
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsActive_bActive = CallFunc_IsActive_bActive;

	UObject::ProcessEvent(Func, &Parms);

	if (FilterRules != nullptr)
		*FilterRules = Parms.FilterRules;
}

}
