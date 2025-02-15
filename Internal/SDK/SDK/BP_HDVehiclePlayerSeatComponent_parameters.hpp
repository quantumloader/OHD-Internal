#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HDVehiclePlayerSeatComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ArcVehicles_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent
// 0x0221 (0x0221 - 0x0000)
struct BP_HDVehiclePlayerSeatComponent_C_ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1586[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1587[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1588[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADFBaseCharacter*                       K2Node_DynamicCast_AsDFBase_Character;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1589[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADFBasePlayerCharacter*                 K2Node_DynamicCast_AsDFBase_Player_Character;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_158A[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FDelegateProperty_                            K2Node_CreateDelegate_OutputDelegate;              // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_158B[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_CustomEvent_PC_1;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_158C[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_CustomEvent_PC;                             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_158D[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UArcVehicleSeatConfig*                  CallFunc_GetValidSeatConfig_SeatConfig;            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArcBaseVehicle*                        CallFunc_GetVehicleOwner_ReturnValue;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                            K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalController_ReturnValue;            // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_158E[0x2];                                     // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_158F[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UArcVehicleSeatConfig*                  CallFunc_GetVehicleSeatConfigFromRef_ReturnValue;  // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArcVehicleSeatConfig*                  CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1; // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArcBaseVehicle*                        CallFunc_GetVehicleOwner_ReturnValue_1;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_HDVehicleSeatAttachment_Player_C*   K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player; // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSeatRefValid_ReturnValue;               // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1590[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArcVehicleSeatConfig*                  CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_2; // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x0130(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_HDVehicleSeatAttachment_Player_C*   K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_1; // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1591[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1592[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;                           // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArcVehicleSeatConfig*                  CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_3; // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeatRefValid_ReturnValue_1;             // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1593[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_HDVehicleSeatAttachment_Player_C*   K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_2; // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArcVehicleSeatChangeType          K2Node_Event_SeatChangeType;                       // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1594[0x1];                                     // 0x017B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	FDelegateProperty_                            K2Node_CreateDelegate_OutputDelegate_2;            // 0x017C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1595[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1596[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_CustomEvent_VictimPawn;                     // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_CustomEvent_VictimController;               // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_KillingDamage;                  // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1597[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDamageEvent                           K2Node_CustomEvent_DamageEvent;                    // 0x01B8(0x0010)(ConstParm)
	class APawn*                                  K2Node_CustomEvent_InstigatingPawn;                // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1598[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1599[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_5;                   // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADFBaseCharacter*                       K2Node_DynamicCast_AsDFBase_Character_1;           // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159A[0x2];                                     // 0x0202(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_1;                         // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_6;                   // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_2;          // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.SetupPlayerCameraConstraints
// 0x0008 (0x0008 - 0x0000)
struct BP_HDVehiclePlayerSeatComponent_C_SetupPlayerCameraConstraints final 
{
public:
	class APlayerController*                      PC;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ResetPlayerCameraConstraints
// 0x0008 (0x0008 - 0x0000)
struct BP_HDVehiclePlayerSeatComponent_C_ResetPlayerCameraConstraints final 
{
public:
	class APlayerController*                      PC;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnSeatChangeEvent
// 0x0001 (0x0001 - 0x0000)
struct BP_HDVehiclePlayerSeatComponent_C_OnSeatChangeEvent final  : public ArcVehiclePlayerSeatComponent_OnSeatChangeEvent
{
public:
	enum class EArcVehicleSeatChangeType          SeatChangeType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnDeath
// 0x0038 (0x0038 - 0x0000)
struct BP_HDVehiclePlayerSeatComponent_C_OnDeath final 
{
public:
	class APawn*                                  VictimPawn;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            VictimController;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KillingDamage;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDamageEvent                           DamageEvent;                                       // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class APawn*                                  InstigatingPawn;                                   // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.GetValidSeatConfig
// 0x0030 (0x0030 - 0x0000)
struct BP_HDVehiclePlayerSeatComponent_C_GetValidSeatConfig final 
{
public:
	class UArcVehicleSeatConfig*                  SeatConfig;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UArcVehicleSeatConfig*                  CallFunc_GetVehicleSeatConfigFromRef_ReturnValue;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeatRefValid_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UArcVehicleSeatConfig*                  CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArcVehicleSeatConfig*                  K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

