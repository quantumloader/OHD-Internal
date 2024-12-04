#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsMenuItem_InputKeySelector

#include "Basic.hpp"

#include "WBP_OptionsMenuItem_InputKeySelector_classes.hpp"
#include "WBP_OptionsMenuItem_InputKeySelector_parameters.hpp"


namespace SDK
{

// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.OnKeySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                      SelectedKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_InputKeySelector_C::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "OnKeySelected__DelegateSignature");

	Params::WBP_OptionsMenuItem_InputKeySelector_C_OnKeySelected__DelegateSignature Parms{};

	Parms.SelectedKey = std::move(SelectedKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_OptionsMenuItem_InputKeySelector_C::OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "OnIsSelectingKeyChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                      K2Node_ComponentBoundEvent_SelectedKey                 (HasGetValueTypeHash)

void UWBP_OptionsMenuItem_InputKeySelector_C::ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector");

	Params::WBP_OptionsMenuItem_InputKeySelector_C_ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_SelectedKey = std::move(K2Node_ComponentBoundEvent_SelectedKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_OptionsMenuItem_InputKeySelector_C::BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                      SelectedKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_InputKeySelector_C::BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");

	Params::WBP_OptionsMenuItem_InputKeySelector_C_BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature Parms{};

	Parms.SelectedKey = std::move(SelectedKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionsMenuItem_InputKeySelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "PreConstruct");

	Params::WBP_OptionsMenuItem_InputKeySelector_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.GetSelectedKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             SelectedKey                                            (Parm, OutParm, HasGetValueTypeHash)
// struct FKey                             CallFunc_GetSelectedKey_SelectedKey                    (HasGetValueTypeHash)

void UWBP_OptionsMenuItem_InputKeySelector_C::GetSelectedKey(struct FKey* SelectedKey, const struct FKey& CallFunc_GetSelectedKey_SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "GetSelectedKey");

	Params::WBP_OptionsMenuItem_InputKeySelector_C_GetSelectedKey Parms{};

	Parms.CallFunc_GetSelectedKey_SelectedKey = std::move(CallFunc_GetSelectedKey_SelectedKey);

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedKey != nullptr)
		*SelectedKey = Parms.SelectedKey;
}


// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.SetSelectedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             SelectedKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_InputKeySelector_C::SetSelectedKey(const struct FKey& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "SetSelectedKey");

	Params::WBP_OptionsMenuItem_InputKeySelector_C_SetSelectedKey Parms{};

	Parms.SelectedKey = std::move(SelectedKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.ClearSelectedKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_OptionsMenuItem_InputKeySelector_C*IKS                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             NewKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    bIsPlayerChangingKeyBindings                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ObjectObject_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                             CallFunc_GetSelectedKey_SelectedKey                    (HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_KeyKey_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionsMenuItem_InputKeySelector_C::ClearSelectedKey(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS, const struct FKey& NewKey, bool bIsPlayerChangingKeyBindings, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FKey& CallFunc_GetSelectedKey_SelectedKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "ClearSelectedKey");

	Params::WBP_OptionsMenuItem_InputKeySelector_C_ClearSelectedKey Parms{};

	Parms.IKS = IKS;
	Parms.NewKey = std::move(NewKey);
	Parms.bIsPlayerChangingKeyBindings = bIsPlayerChangingKeyBindings;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetSelectedKey_SelectedKey = std::move(CallFunc_GetSelectedKey_SelectedKey);
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.IsSelectingKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelecting                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_GetIsSelectingKey_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionsMenuItem_InputKeySelector_C::IsSelectingKey(bool* IsSelecting, bool CallFunc_GetIsSelectingKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_InputKeySelector_C", "IsSelectingKey");

	Params::WBP_OptionsMenuItem_InputKeySelector_C_IsSelectingKey Parms{};

	Parms.CallFunc_GetIsSelectingKey_ReturnValue = CallFunc_GetIsSelectingKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelecting != nullptr)
		*IsSelecting = std::move(Parms.IsSelecting);
}

}
