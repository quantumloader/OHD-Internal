#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DeployMenu_DeployButton

#include "Basic.hpp"

#include "WBP_DeployMenu_DeployButton_classes.hpp"
#include "WBP_DeployMenu_DeployButton_parameters.hpp"


namespace SDK
{

// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnClicked__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnClicked__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnClicked__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnPressed__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnPressed__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnPressed__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnReleased__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnReleased__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnReleased__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnHovered__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnHovered__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnHovered__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnUnhovered__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnUnhovered__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnUnhovered__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.ExecuteUbergraph_WBP_DeployMenu_DeployButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_InDeltaTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDPlayerController*              K2Node_DynamicCast_AsHDPlayer_Controller               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                     CallFunc_GetUnFreezeTimerHandle_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_K2_IsTimerActiveHandle_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FButtonStyle                     K2Node_Select_Default                                  (ConstParm)
// int32                                   CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::ExecuteUbergraph_WBP_DeployMenu_DeployButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanAND_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHDPlayerController* K2Node_DynamicCast_AsHDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_GetUnFreezeTimerHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, struct FButtonStyle& K2Node_Select_Default, int32 CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "ExecuteUbergraph_WBP_DeployMenu_DeployButton");

	Params::WBP_DeployMenu_DeployButton_C_ExecuteUbergraph_WBP_DeployMenu_DeployButton Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsHDPlayer_Controller = K2Node_DynamicCast_AsHDPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUnFreezeTimerHandle_ReturnValue = std::move(CallFunc_GetUnFreezeTimerHandle_ReturnValue);
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds = CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds_1 = CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_DeployButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "Tick");

	Params::WBP_DeployMenu_DeployButton_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "PreConstruct");

	Params::WBP_DeployMenu_DeployButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.UpdateDeployBtnState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlayerAlive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bDeploymentQueued                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bSpawnPointSelected                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDPlayerController*              K2Node_DynamicCast_AsHDPlayer_Controller               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                     CallFunc_GetUnFreezeTimerHandle_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_K2_IsTimerActiveHandle_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::UpdateDeployBtnState(bool bPlayerAlive, bool bDeploymentQueued, bool Param_bSpawnPointSelected, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHDPlayerController* K2Node_DynamicCast_AsHDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_GetUnFreezeTimerHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, int32 CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "UpdateDeployBtnState");

	Params::WBP_DeployMenu_DeployButton_C_UpdateDeployBtnState Parms{};

	Parms.bPlayerAlive = bPlayerAlive;
	Parms.bDeploymentQueued = bDeploymentQueued;
	Parms.Param_bSpawnPointSelected = Param_bSpawnPointSelected;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsHDPlayer_Controller = K2Node_DynamicCast_AsHDPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUnFreezeTimerHandle_ReturnValue = std::move(CallFunc_GetUnFreezeTimerHandle_ReturnValue);
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds = CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bDeploying                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bSpawnPointSelected                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_1                 (HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_2                 (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array_1                               (ReferenceParm, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue_1                          ()
// class FText                             K2Node_Select_Default                                  ()
// class FText                             K2Node_Select_Default_1                                ()
// class FText                             K2Node_Select_Default_2                                ()
// class FText                             K2Node_Select_Default_3                                ()
// class FText                             CallFunc_TextToUpper_ReturnValue                       ()

void UWBP_DeployMenu_DeployButton_C::InternalUpdateBtnText(bool Param_bDeploying, bool Param_bSpawnPointSelected, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, int32 CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "InternalUpdateBtnText");

	Params::WBP_DeployMenu_DeployButton_C_InternalUpdateBtnText Parms{};

	Parms.Param_bDeploying = Param_bDeploying;
	Parms.Param_bSpawnPointSelected = Param_bSpawnPointSelected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds = CallFunc_InternalGetSpawnTimeRemaining_SpawnSeconds;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = std::move(K2Node_MakeStruct_FormatArgumentData_1);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = std::move(K2Node_MakeStruct_FormatArgumentData_2);
	Parms.K2Node_MakeArray_Array_1 = std::move(K2Node_MakeArray_Array_1);
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
	K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnStyle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FButtonStyle                     K2Node_Select_Default                                  (ConstParm)

void UWBP_DeployMenu_DeployButton_C::InternalUpdateBtnStyle(bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, struct FButtonStyle& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "InternalUpdateBtnStyle");

	Params::WBP_DeployMenu_DeployButton_C_InternalUpdateBtnStyle Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalGetSpawnTimeRemaining
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SpawnSeconds                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDPlayerController*              K2Node_DynamicCast_AsHDPlayer_Controller               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                     CallFunc_GetUnFreezeTimerHandle_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Round_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_DeployButton_C::InternalGetSpawnTimeRemaining(int32* SpawnSeconds, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHDPlayerController* K2Node_DynamicCast_AsHDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_GetUnFreezeTimerHandle_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, int32 CallFunc_Round_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "InternalGetSpawnTimeRemaining");

	Params::WBP_DeployMenu_DeployButton_C_InternalGetSpawnTimeRemaining Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsHDPlayer_Controller = K2Node_DynamicCast_AsHDPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUnFreezeTimerHandle_ReturnValue = std::move(CallFunc_GetUnFreezeTimerHandle_ReturnValue);
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnSeconds != nullptr)
		*SpawnSeconds = std::move(Parms.SpawnSeconds);
}

}

