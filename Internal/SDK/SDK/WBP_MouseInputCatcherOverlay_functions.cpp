#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MouseInputCatcherOverlay

#include "Basic.hpp"

#include "WBP_MouseInputCatcherOverlay_classes.hpp"
#include "WBP_MouseInputCatcherOverlay_parameters.hpp"


namespace SDK
{

// Function WBP_MouseInputCatcherOverlay.WBP_MouseInputCatcherOverlay_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()
// struct FKey                             CallFunc_PointerEvent_GetEffectingButton_ReturnValue   (HasGetValueTypeHash)

struct FEventReply UWBP_MouseInputCatcherOverlay_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MouseInputCatcherOverlay_C", "OnMouseButtonDown");

	Params::WBP_MouseInputCatcherOverlay_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = std::move(CallFunc_PointerEvent_GetEffectingButton_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_MouseInputCatcherOverlay.WBP_MouseInputCatcherOverlay_C.SelectKey
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInputChord                      K2Node_MakeStruct_InputChord                           (HasGetValueTypeHash)

void UWBP_MouseInputCatcherOverlay_C::SelectKey(const struct FKey& Key, const struct FInputChord& K2Node_MakeStruct_InputChord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MouseInputCatcherOverlay_C", "SelectKey");

	Params::WBP_MouseInputCatcherOverlay_C_SelectKey Parms{};

	Parms.Key = std::move(Key);
	Parms.K2Node_MakeStruct_InputChord = std::move(K2Node_MakeStruct_InputChord);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MouseInputCatcherOverlay.WBP_MouseInputCatcherOverlay_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_PointerEvent_GetWheelDelta_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             Temp_struct_Variable                                   (HasGetValueTypeHash)
// bool                                    CallFunc_Greater_FloatFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                             Temp_struct_Variable_1                                 (HasGetValueTypeHash)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()
// struct FEventReply                      CallFunc_ClearUserFocus_ReturnValue                    ()
// struct FKey                             K2Node_Select_Default                                  (HasGetValueTypeHash)

struct FEventReply UWBP_MouseInputCatcherOverlay_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool Temp_bool_Variable, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, const struct FKey& Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FKey& Temp_struct_Variable_1, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_ClearUserFocus_ReturnValue, const struct FKey& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MouseInputCatcherOverlay_C", "OnMouseWheel");

	Params::WBP_MouseInputCatcherOverlay_C_OnMouseWheel Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PointerEvent_GetWheelDelta_ReturnValue = CallFunc_PointerEvent_GetWheelDelta_ReturnValue;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);
	Parms.CallFunc_ClearUserFocus_ReturnValue = std::move(CallFunc_ClearUserFocus_ReturnValue);
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

