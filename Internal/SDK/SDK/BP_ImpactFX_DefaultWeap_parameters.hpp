#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ImpactFX_DefaultWeap

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ImpactFX_DefaultWeap.BP_ImpactFX_DefaultWeap_C.ExecuteUbergraph_BP_ImpactFX_DefaultWeap
// 0x0008 (0x0008 - 0x0000)
struct BP_ImpactFX_DefaultWeap_C_ExecuteUbergraph_BP_ImpactFX_DefaultWeap final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ImpactFX_DefaultWeap.BP_ImpactFX_DefaultWeap_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ImpactFX_DefaultWeap_C_ReceiveTick final  : public Actor_ReceiveTick
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

