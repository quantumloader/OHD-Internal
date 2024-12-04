#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SQMemberOption

#include "Basic.hpp"

#include "WBP_SQMemberOption_classes.hpp"
#include "WBP_SQMemberOption_parameters.hpp"


namespace SDK
{

// Function WBP_SQMemberOption.WBP_SQMemberOption_C.SetupOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USquadMemberInfo*                 InMemberInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDPlayerState*                   K2Node_DynamicCast_AsHDPlayer_State                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHDSquadState*                    CallFunc_GetParentSquadState_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDFContextualWidgetPrerequisiteBase*CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ContextWidgetPrereq_ExcludeSquadLeader_C*K2Node_DynamicCast_AsBP_Context_Widget_Prereq_Exclude_Squad_Leader(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ContextWidgetPrereq_SquadLeaderOnly_C*K2Node_DynamicCast_AsBP_Context_Widget_Prereq_Squad_Leader_Only(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SQMemberOption_C::SetupOption(class USquadMemberInfo* InMemberInfo, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AHDPlayerState* K2Node_DynamicCast_AsHDPlayer_State, bool K2Node_DynamicCast_bSuccess, class AHDSquadState* CallFunc_GetParentSquadState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UDFContextualWidgetPrerequisiteBase* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UBP_ContextWidgetPrereq_ExcludeSquadLeader_C* K2Node_DynamicCast_AsBP_Context_Widget_Prereq_Exclude_Squad_Leader, bool K2Node_DynamicCast_bSuccess_1, class UBP_ContextWidgetPrereq_SquadLeaderOnly_C* K2Node_DynamicCast_AsBP_Context_Widget_Prereq_Squad_Leader_Only, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SQMemberOption_C", "SetupOption");

	Params::WBP_SQMemberOption_C_SetupOption Parms{};

	Parms.InMemberInfo = InMemberInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsHDPlayer_State = K2Node_DynamicCast_AsHDPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetParentSquadState_ReturnValue = CallFunc_GetParentSquadState_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Context_Widget_Prereq_Exclude_Squad_Leader = K2Node_DynamicCast_AsBP_Context_Widget_Prereq_Exclude_Squad_Leader;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Context_Widget_Prereq_Squad_Leader_Only = K2Node_DynamicCast_AsBP_Context_Widget_Prereq_Squad_Leader_Only;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SQMemberOption.WBP_SQMemberOption_C.GetParentMemberInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USquadMemberInfo*                 MemberInfo                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SQMemberOption_C::GetParentMemberInfo(class USquadMemberInfo** MemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SQMemberOption_C", "GetParentMemberInfo");

	Params::WBP_SQMemberOption_C_GetParentMemberInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MemberInfo != nullptr)
		*MemberInfo = std::move(Parms.MemberInfo);
}

}
