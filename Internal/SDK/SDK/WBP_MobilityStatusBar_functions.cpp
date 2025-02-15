#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MobilityStatusBar

#include "Basic.hpp"

#include "WBP_MobilityStatusBar_classes.hpp"
#include "WBP_MobilityStatusBar_parameters.hpp"


namespace SDK
{

// Function WBP_MobilityStatusBar.WBP_MobilityStatusBar_C.ExecuteUbergraph_WBP_MobilityStatusBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MobilityStatusBar_C::ExecuteUbergraph_WBP_MobilityStatusBar(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MobilityStatusBar_C", "ExecuteUbergraph_WBP_MobilityStatusBar");

	Params::WBP_MobilityStatusBar_C_ExecuteUbergraph_WBP_MobilityStatusBar Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MobilityStatusBar.WBP_MobilityStatusBar_C.PingValueFull
// (BlueprintCallable, BlueprintEvent)

void UWBP_MobilityStatusBar_C::PingValueFull()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MobilityStatusBar_C", "PingValueFull");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MobilityStatusBar.WBP_MobilityStatusBar_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInitial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_GreaterEqual_FloatFloat_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MobilityStatusBar_C::SetPercent(float InPercent, bool bInitial, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MobilityStatusBar_C", "SetPercent");

	Params::WBP_MobilityStatusBar_C_SetPercent Parms{};

	Parms.InPercent = InPercent;
	Parms.bInitial = bInitial;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

