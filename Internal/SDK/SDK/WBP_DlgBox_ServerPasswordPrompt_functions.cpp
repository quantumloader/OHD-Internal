#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DlgBox_ServerPasswordPrompt

#include "Basic.hpp"

#include "WBP_DlgBox_ServerPasswordPrompt_classes.hpp"
#include "WBP_DlgBox_ServerPasswordPrompt_parameters.hpp"


namespace SDK
{

// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnConfirmInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InputText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DlgBox_ServerPasswordPrompt_C::OnConfirmInput__DelegateSignature(class FText InputText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "OnConfirmInput__DelegateSignature");

	Params::WBP_DlgBox_ServerPasswordPrompt_C_OnConfirmInput__DelegateSignature Parms{};

	Parms.InputText = InputText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnCancelInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_DlgBox_ServerPasswordPrompt_C::OnCancelInput__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "OnCancelInput__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                      K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FFocusEvent                      K2Node_Event_InFocusEvent                              (NoDestructor)
// class FText                             CallFunc_GetText_ReturnValue                           ()
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DlgBox_ServerPasswordPrompt_C::ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFocusEvent& K2Node_Event_InFocusEvent, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt");

	Params::WBP_DlgBox_ServerPasswordPrompt_C_ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_InFocusEvent = std::move(K2Node_Event_InFocusEvent);
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_DlgBox_ServerPasswordPrompt_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "OnRemovedFromFocusPath");

	Params::WBP_DlgBox_ServerPasswordPrompt_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.CancelInput
// (BlueprintCallable, BlueprintEvent)

void UWBP_DlgBox_ServerPasswordPrompt_C::CancelInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "CancelInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.ConfirmInput
// (BlueprintCallable, BlueprintEvent)

void UWBP_DlgBox_ServerPasswordPrompt_C::ConfirmInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "ConfirmInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.DummyInput
// (BlueprintCallable, BlueprintEvent)

void UWBP_DlgBox_ServerPasswordPrompt_C::DummyInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "DummyInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DlgBox_ServerPasswordPrompt_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()

struct FEventReply UWBP_DlgBox_ServerPasswordPrompt_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "OnMouseButtonDown");

	Params::WBP_DlgBox_ServerPasswordPrompt_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_DlgBox_ServerPasswordPrompt.WBP_DlgBox_ServerPasswordPrompt_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FKey                             CallFunc_GetKey_ReturnValue                            (HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_KeyKey_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_KeyKey_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_KeyKey_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_KeyKey_ReturnValue_3               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()

struct FEventReply UWBP_DlgBox_ServerPasswordPrompt_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DlgBox_ServerPasswordPrompt_C", "OnPreviewKeyDown");

	Params::WBP_DlgBox_ServerPasswordPrompt_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);
	Parms.CallFunc_GetKey_ReturnValue = std::move(CallFunc_GetKey_ReturnValue);
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
