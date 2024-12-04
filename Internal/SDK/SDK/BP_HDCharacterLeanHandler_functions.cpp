#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HDCharacterLeanHandler

#include "Basic.hpp"

#include "BP_HDCharacterLeanHandler_classes.hpp"
#include "BP_HDCharacterLeanHandler_parameters.hpp"


namespace SDK
{

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ExecuteUbergraph_BP_HDCharacterLeanHandler
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADFBaseCharacter*                 CallFunc_GetOwningCharacter_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocallyControlled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_DeltaTime                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::ExecuteUbergraph_BP_HDCharacterLeanHandler(int32 EntryPoint, class ADFBaseCharacter* CallFunc_GetOwningCharacter_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "ExecuteUbergraph_BP_HDCharacterLeanHandler");

	Params::BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningCharacter_ReturnValue = CallFunc_GetOwningCharacter_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::ReceiveTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "ReceiveTick");

	Params::BP_HDCharacterLeanHandler_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPMeshComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*           FPPMesh                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADFBaseCharacter*                 CallFunc_GetOwningCharacter_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADFBasePlayerCharacter*           K2Node_DynamicCast_AsDFBase_Player_Character           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HDCharacterLeanHandler_C::GetFPPMeshComp(class USkeletalMeshComponent** FPPMesh, bool CallFunc_IsValid_ReturnValue, class ADFBaseCharacter* CallFunc_GetOwningCharacter_ReturnValue, class ADFBasePlayerCharacter* K2Node_DynamicCast_AsDFBase_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "GetFPPMeshComp");

	Params::BP_HDCharacterLeanHandler_C_GetFPPMeshComp Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningCharacter_ReturnValue = CallFunc_GetOwningCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsDFBase_Player_Character = K2Node_DynamicCast_AsDFBase_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FPPMesh != nullptr)
		*FPPMesh = std::move(Parms.FPPMesh);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPCameraComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCameraComponent*                 FPPCamera                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADFBaseCharacter*                 CallFunc_GetOwningCharacter_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADFBasePlayerCharacter*           K2Node_DynamicCast_AsDFBase_Player_Character           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HDCharacterLeanHandler_C::GetFPPCameraComp(class UCameraComponent** FPPCamera, bool CallFunc_IsValid_ReturnValue, class ADFBaseCharacter* CallFunc_GetOwningCharacter_ReturnValue, class ADFBasePlayerCharacter* K2Node_DynamicCast_AsDFBase_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "GetFPPCameraComp");

	Params::BP_HDCharacterLeanHandler_C_GetFPPCameraComp Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningCharacter_ReturnValue = CallFunc_GetOwningCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsDFBase_Player_Character = K2Node_DynamicCast_AsDFBase_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FPPCamera != nullptr)
		*FPPCamera = std::move(Parms.FPPCamera);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPSpringArmComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USpringArmComponent*              FPPSpringArm                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADFBaseCharacter*                 CallFunc_GetOwningCharacter_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDPlayerCharacter*               K2Node_DynamicCast_AsHDPlayer_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HDCharacterLeanHandler_C::GetFPPSpringArmComp(class USpringArmComponent** FPPSpringArm, bool CallFunc_IsValid_ReturnValue, class ADFBaseCharacter* CallFunc_GetOwningCharacter_ReturnValue, class AHDPlayerCharacter* K2Node_DynamicCast_AsHDPlayer_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "GetFPPSpringArmComp");

	Params::BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningCharacter_ReturnValue = CallFunc_GetOwningCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsHDPlayer_Character = K2Node_DynamicCast_AsHDPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FPPSpringArm != nullptr)
		*FPPSpringArm = std::move(Parms.FPPSpringArm);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickXOffset
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*              CallFunc_GetFPPSpringArmComp_FPPSpringArm              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetLeanXOffset_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Add_FloatFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_X                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_Y                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_Z                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Multiply_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_MakeVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_SetRelativeLocation_SweepHitResult         (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_HDCharacterLeanHandler_C::TickXOffset(float DeltaTime, class USpringArmComponent* CallFunc_GetFPPSpringArmComp_FPPSpringArm, float CallFunc_GetLeanXOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "TickXOffset");

	Params::BP_HDCharacterLeanHandler_C_TickXOffset Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetFPPSpringArmComp_FPPSpringArm = CallFunc_GetFPPSpringArmComp_FPPSpringArm;
	Parms.CallFunc_GetLeanXOffset_ReturnValue = CallFunc_GetLeanXOffset_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = std::move(CallFunc_MakeVector_ReturnValue);
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = std::move(CallFunc_K2_SetRelativeLocation_SweepHitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickYOffset
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADFBaseCharacter*                 CallFunc_GetOwningCharacter_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetLeanYOffset_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HDPlayerCharacterBase_C*      K2Node_DynamicCast_AsBP_HDPlayer_Character_Base        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USpringArmComponent*              CallFunc_GetFPPSpringArmComp_FPPSpringArm              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_X                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_Y                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_Z                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_X_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_Y_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_Z_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Abs_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FClamp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Divide_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Add_FloatFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_MakeVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_SetRelativeLocation_SweepHitResult         (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_HDCharacterLeanHandler_C::TickYOffset(float DeltaTime, class ADFBaseCharacter* CallFunc_GetOwningCharacter_ReturnValue, float CallFunc_GetLeanYOffset_ReturnValue, class ABP_HDPlayerCharacterBase_C* K2Node_DynamicCast_AsBP_HDPlayer_Character_Base, bool K2Node_DynamicCast_bSuccess, class USpringArmComponent* CallFunc_GetFPPSpringArmComp_FPPSpringArm, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Abs_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "TickYOffset");

	Params::BP_HDCharacterLeanHandler_C_TickYOffset Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetOwningCharacter_ReturnValue = CallFunc_GetOwningCharacter_ReturnValue;
	Parms.CallFunc_GetLeanYOffset_ReturnValue = CallFunc_GetLeanYOffset_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_HDPlayer_Character_Base = K2Node_DynamicCast_AsBP_HDPlayer_Character_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFPPSpringArmComp_FPPSpringArm = CallFunc_GetFPPSpringArmComp_FPPSpringArm;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = std::move(CallFunc_MakeVector_ReturnValue);
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = std::move(CallFunc_K2_SetRelativeLocation_SweepHitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickRot
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*              CallFunc_GetFPPSpringArmComp_FPPSpringArm              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetLeanRollRot_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_MakeRotator_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       CallFunc_K2_AddRelativeRotation_SweepHitResult         (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_HDCharacterLeanHandler_C::TickRot(float DeltaTime, class USpringArmComponent* CallFunc_GetFPPSpringArmComp_FPPSpringArm, float CallFunc_GetLeanRollRot_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "TickRot");

	Params::BP_HDCharacterLeanHandler_C_TickRot Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetFPPSpringArmComp_FPPSpringArm = CallFunc_GetFPPSpringArmComp_FPPSpringArm;
	Parms.CallFunc_GetLeanRollRot_ReturnValue = CallFunc_GetLeanRollRot_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = std::move(CallFunc_MakeRotator_ReturnValue);
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = std::move(CallFunc_K2_AddRelativeRotation_SweepHitResult);

	UObject::ProcessEvent(Func, &Parms);
}

}
