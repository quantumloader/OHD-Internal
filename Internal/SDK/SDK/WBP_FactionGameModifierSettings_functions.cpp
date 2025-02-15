#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FactionGameModifierSettings

#include "Basic.hpp"

#include "WBP_FactionGameModifierSettings_classes.hpp"
#include "WBP_FactionGameModifierSettings_parameters.hpp"


namespace SDK
{

// Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.ExecuteUbergraph_WBP_FactionGameModifierSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>          CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList   (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>          CallFunc_SplitLoadedPrimaryAssetClassIds_UnloadedAssetIds(ReferenceParm, HasGetValueTypeHash)
// TArray<class UClass*>                   CallFunc_SplitLoadedPrimaryAssetClassIds_LoadedAssetClasses(ReferenceParm, HasGetValueTypeHash)
// class UClass*                           CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId                  CallFunc_GetPrimaryAssetIdFromClass_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           K2Node_ClassDynamicCast_AsFaction_Info__HD_            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ClassDynamicCast_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_Conv_TextToString_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                     K2Node_MakeArray_Array                                 (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class UAsyncActionLoadPrimaryAssetClassList*CallFunc_AsyncLoadPrimaryAssetClassList_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>                   Temp_class_Variable                                    (ReferenceParm, HasGetValueTypeHash)
// class UWBP_OptionMenu_CreateGame_C*     K2Node_Event_ParentMenu                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>                   K2Node_CustomEvent_Loaded                              (ConstParm, ReferenceParm, HasGetValueTypeHash)
// int32                                   CallFunc_GetOptionCount_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetOptionCount_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                      K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TArray<struct FPrimaryAssetId>          CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1 (ReferenceParm, HasGetValueTypeHash)

void UWBP_FactionGameModifierSettings_C::ExecuteUbergraph_WBP_FactionGameModifierSettings(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, TArray<struct FPrimaryAssetId>& CallFunc_SplitLoadedPrimaryAssetClassIds_UnloadedAssetIds, TArray<class UClass*>& CallFunc_SplitLoadedPrimaryAssetClassIds_LoadedAssetClasses, class UClass* CallFunc_Array_Get_Item, const struct FPrimaryAssetId& CallFunc_GetPrimaryAssetIdFromClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsFaction_Info__HD_, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class UAsyncActionLoadPrimaryAssetClassList* CallFunc_AsyncLoadPrimaryAssetClassList_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UClass*>& Temp_class_Variable, class UWBP_OptionMenu_CreateGame_C* K2Node_Event_ParentMenu, TArray<class UClass*>& K2Node_CustomEvent_Loaded, int32 CallFunc_GetOptionCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetOptionCount_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FactionGameModifierSettings_C", "ExecuteUbergraph_WBP_FactionGameModifierSettings");

	Params::WBP_FactionGameModifierSettings_C_ExecuteUbergraph_WBP_FactionGameModifierSettings Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList = std::move(CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList);
	Parms.CallFunc_SplitLoadedPrimaryAssetClassIds_UnloadedAssetIds = std::move(CallFunc_SplitLoadedPrimaryAssetClassIds_UnloadedAssetIds);
	Parms.CallFunc_SplitLoadedPrimaryAssetClassIds_LoadedAssetClasses = std::move(CallFunc_SplitLoadedPrimaryAssetClassIds_LoadedAssetClasses);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPrimaryAssetIdFromClass_ReturnValue = std::move(CallFunc_GetPrimaryAssetIdFromClass_ReturnValue);
	Parms.K2Node_ClassDynamicCast_AsFaction_Info__HD_ = K2Node_ClassDynamicCast_AsFaction_Info__HD_;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = std::move(CallFunc_Conv_TextToString_ReturnValue);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_AsyncLoadPrimaryAssetClassList_ReturnValue = CallFunc_AsyncLoadPrimaryAssetClassList_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_class_Variable = std::move(Temp_class_Variable);
	Parms.K2Node_Event_ParentMenu = K2Node_Event_ParentMenu;
	Parms.K2Node_CustomEvent_Loaded = std::move(K2Node_CustomEvent_Loaded);
	Parms.CallFunc_GetOptionCount_ReturnValue = CallFunc_GetOptionCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetOptionCount_ReturnValue_1 = CallFunc_GetOptionCount_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1 = std::move(CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1);

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList = std::move(Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList);
	CallFunc_SplitLoadedPrimaryAssetClassIds_UnloadedAssetIds = std::move(Parms.CallFunc_SplitLoadedPrimaryAssetClassIds_UnloadedAssetIds);
	CallFunc_SplitLoadedPrimaryAssetClassIds_LoadedAssetClasses = std::move(Parms.CallFunc_SplitLoadedPrimaryAssetClassIds_LoadedAssetClasses);
	Temp_class_Variable = std::move(Parms.Temp_class_Variable);
	CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1 = std::move(Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1);
}


// Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_FactionGameModifierSettings_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FactionGameModifierSettings_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.SetupModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_OptionMenu_CreateGame_C*     ParentMenu                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FactionGameModifierSettings_C::SetupModifier(class UWBP_OptionMenu_CreateGame_C* ParentMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FactionGameModifierSettings_C", "SetupModifier");

	Params::WBP_FactionGameModifierSettings_C_SetupModifier Parms{};

	Parms.ParentMenu = ParentMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>                   Loaded                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_FactionGameModifierSettings_C::Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94(TArray<class UClass*>& Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FactionGameModifierSettings_C", "Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94");

	Params::WBP_FactionGameModifierSettings_C_Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94 Parms{};

	Parms.Loaded = std::move(Loaded);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.BuildFactionURLOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EHDTeam                      Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             PackageName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Pair                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetFactionOptionName_ReturnValue              (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_NameToString_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_1                   (ZeroConstructor, HasGetValueTypeHash)

void UWBP_FactionGameModifierSettings_C::BuildFactionURLOption(enum class EHDTeam Team, class FName PackageName, class FString* Pair, const class FString& CallFunc_GetFactionOptionName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FactionGameModifierSettings_C", "BuildFactionURLOption");

	Params::WBP_FactionGameModifierSettings_C_BuildFactionURLOption Parms{};

	Parms.Team = Team;
	Parms.PackageName = PackageName;
	Parms.CallFunc_GetFactionOptionName_ReturnValue = std::move(CallFunc_GetFactionOptionName_ReturnValue);
	Parms.CallFunc_Conv_NameToString_ReturnValue = std::move(CallFunc_Conv_NameToString_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = std::move(CallFunc_Concat_StrStr_ReturnValue_1);

	UObject::ProcessEvent(Func, &Parms);

	if (Pair != nullptr)
		*Pair = Parms.Pair;
}


// Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.BuildTicketCountURLOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EHDTeam                      Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Pair                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetNumTicketsOptionName_ReturnValue           (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_IntToString_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_1                   (ZeroConstructor, HasGetValueTypeHash)

void UWBP_FactionGameModifierSettings_C::BuildTicketCountURLOption(enum class EHDTeam Team, int32 Count, class FString* Pair, const class FString& CallFunc_GetNumTicketsOptionName_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FactionGameModifierSettings_C", "BuildTicketCountURLOption");

	Params::WBP_FactionGameModifierSettings_C_BuildTicketCountURLOption Parms{};

	Parms.Team = Team;
	Parms.Count = Count;
	Parms.CallFunc_GetNumTicketsOptionName_ReturnValue = std::move(CallFunc_GetNumTicketsOptionName_ReturnValue);
	Parms.CallFunc_Conv_IntToString_ReturnValue = std::move(CallFunc_Conv_IntToString_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = std::move(CallFunc_Concat_StrStr_ReturnValue_1);

	UObject::ProcessEvent(Func, &Parms);

	if (Pair != nullptr)
		*Pair = Parms.Pair;
}


// Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.IsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsActive_bActive                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FactionGameModifierSettings_C::IsEnabled(bool* bEnabled, bool CallFunc_IsActive_bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FactionGameModifierSettings_C", "IsEnabled");

	Params::WBP_FactionGameModifierSettings_C_IsEnabled Parms{};

	Parms.CallFunc_IsActive_bActive = CallFunc_IsActive_bActive;

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = std::move(Parms.bEnabled);
}


// Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.GetTravelURLOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Options                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           OptionsStr                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetDisableKitRestrictionsOptionName_ReturnValue(ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsChecked_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetValue_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_BuildTicketCountURLOption_Pair                (ZeroConstructor, HasGetValueTypeHash)
// float                                   CallFunc_GetValue_Value_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_BuildTicketCountURLOption_Pair_1              (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetSelectedIndex_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetSelectedIndex_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_NotEqual_IntInt_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_BuildFactionURLOption_Pair                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_BuildFactionURLOption_Pair_1                  (ZeroConstructor, HasGetValueTypeHash)

void UWBP_FactionGameModifierSettings_C::GetTravelURLOptions(class FString* Options, const class FString& OptionsStr, const class FString& CallFunc_GetDisableKitRestrictionsOptionName_ReturnValue, bool CallFunc_IsChecked_ReturnValue, float CallFunc_GetValue_Value, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_BuildTicketCountURLOption_Pair, float CallFunc_GetValue_Value_1, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_BuildTicketCountURLOption_Pair_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, const class FString& CallFunc_BuildFactionURLOption_Pair, const class FString& CallFunc_BuildFactionURLOption_Pair_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FactionGameModifierSettings_C", "GetTravelURLOptions");

	Params::WBP_FactionGameModifierSettings_C_GetTravelURLOptions Parms{};

	Parms.OptionsStr = std::move(OptionsStr);
	Parms.CallFunc_GetDisableKitRestrictionsOptionName_ReturnValue = std::move(CallFunc_GetDisableKitRestrictionsOptionName_ReturnValue);
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_GetValue_Value = CallFunc_GetValue_Value;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_BuildTicketCountURLOption_Pair = std::move(CallFunc_BuildTicketCountURLOption_Pair);
	Parms.CallFunc_GetValue_Value_1 = CallFunc_GetValue_Value_1;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BuildTicketCountURLOption_Pair_1 = std::move(CallFunc_BuildTicketCountURLOption_Pair_1);
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue_1 = CallFunc_GetSelectedIndex_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BuildFactionURLOption_Pair = std::move(CallFunc_BuildFactionURLOption_Pair);
	Parms.CallFunc_BuildFactionURLOption_Pair_1 = std::move(CallFunc_BuildFactionURLOption_Pair_1);

	UObject::ProcessEvent(Func, &Parms);

	if (Options != nullptr)
		*Options = Parms.Options;
}

}

