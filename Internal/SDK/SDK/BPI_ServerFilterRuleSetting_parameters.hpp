#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ServerFilterRuleSetting

#include "Basic.hpp"

#include "HDMain_structs.hpp"


namespace SDK::Params
{

// Function BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C.GetFilterRulePair
// 0x000A (0x000A - 0x0000)
struct BPI_ServerFilterRuleSetting_C_GetFilterRulePair final 
{
public:
	class UClass*                                 Rule;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHDFilterRuleParams                    RuleParams;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ServerFilterRuleSetting.BPI_ServerFilterRuleSetting_C.IsFilterEnabled
// 0x0001 (0x0001 - 0x0000)
struct BPI_ServerFilterRuleSetting_C_IsFilterEnabled final 
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
