#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerBadge

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ServerBadge.WBP_ServerBadge_C.ExecuteUbergraph_WBP_ServerBadge
// 0x0005 (0x0005 - 0x0000)
struct WBP_ServerBadge_C_ExecuteUbergraph_WBP_ServerBadge final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ServerBadge.WBP_ServerBadge_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ServerBadge_C_PreConstruct final  : public UserWidget_PreConstruct
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

