#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CreateGameSelectionListEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FSelectionItemTextStyle_structs.hpp"


namespace SDK::Params
{

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.OnSelectionStateChanged__DelegateSignature
// 0x0009 (0x0009 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_OnSelectionStateChanged__DelegateSignature final 
{
public:
	class UWBP_CreateGameSelectionListEntry_C*    Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.ExecuteUbergraph_WBP_CreateGameSelectionListEntry
// 0x0019 (0x0019 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_ExecuteUbergraph_WBP_CreateGameSelectionListEntry final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   Temp_byte_Variable_4;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_5;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   K2Node_Select_Default;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   K2Node_Select_Default_1;                           // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   K2Node_Select_Default_2;                           // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_6;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_7;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   K2Node_Select_Default_3;                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final 
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_PreConstruct final  : public UserWidget_PreConstruct
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSelectionState
// 0x000E (0x000E - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_SetItemSelectionState final 
{
public:
	enum class ECheckBoxState                     InSelectionState;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   K2Node_Select_Default_1;                           // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheckBoxState                     CallFunc_GetCheckedState_ReturnValue;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemIsSelected
// 0x000C (0x000C - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_SetItemIsSelected final 
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   K2Node_Select_Default_1;                           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSelectionState
// 0x0002 (0x0002 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_GetItemSelectionState final 
{
public:
	enum class ECheckBoxState                     SelectionState;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheckBoxState                     CallFunc_GetCheckedState_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.IsItemSelected
// 0x0002 (0x0002 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_IsItemSelected final 
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalApplyStyleToText
// 0x0140 (0x0140 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_InternalApplyStyleToText final 
{
public:
	class UTextBlock*                             Param_Text;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFSelectionItemTextStyle               TextStyle;                                         // 0x0008(0x0130)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalUpdateItemBgTintColor
// 0x0080 (0x0080 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_InternalUpdateItemBgTintColor final 
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_174F[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0058(0x0028)()
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemStyle
// 0x0580 (0x0580 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_SetItemStyle final 
{
public:
	struct FCheckBoxStyle                         InItemStyle;                                       // 0x0000(0x0580)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemTextStyle
// 0x0130 (0x0130 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_SetItemTextStyle final 
{
public:
	struct FFSelectionItemTextStyle               InItemTextStyle;                                   // 0x0000(0x0130)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSubTextStyle
// 0x0130 (0x0130 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_SetItemSubTextStyle final 
{
public:
	struct FFSelectionItemTextStyle               InItemSubTextStyle;                                // 0x0000(0x0130)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemImage
// 0x0008 (0x0008 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_SetItemImage final 
{
public:
	class UTexture2D*                             InItemImg;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemStyle
// 0x0580 (0x0580 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_GetItemStyle final 
{
public:
	struct FCheckBoxStyle                         Param_ItemStyle;                                   // 0x0000(0x0580)(Parm, OutParm)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemTextStyle
// 0x0130 (0x0130 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_GetItemTextStyle final 
{
public:
	struct FFSelectionItemTextStyle               TextStyle;                                         // 0x0000(0x0130)(Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSubTextStyle
// 0x0130 (0x0130 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_GetItemSubTextStyle final 
{
public:
	struct FFSelectionItemTextStyle               TextStyle;                                         // 0x0000(0x0130)(Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemText
// 0x0018 (0x0018 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_SetItemText final 
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSubText
// 0x0018 (0x0018 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_SetItemSubText final 
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemText
// 0x0030 (0x0030 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_GetItemText final 
{
public:
	class FText                                   Param_Text;                                        // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSubText
// 0x0030 (0x0030 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_GetItemSubText final 
{
public:
	class FText                                   Param_Text;                                        // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemMinDimensions
// 0x0008 (0x0008 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_SetItemMinDimensions final 
{
public:
	int32                                         InMinWidth;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMinHeight;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemMinWidth
// 0x0004 (0x0004 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_GetItemMinWidth final 
{
public:
	int32                                         MinWidth;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemMinHeight
// 0x0004 (0x0004 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_GetItemMinHeight final 
{
public:
	int32                                         MinHeight;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalRefreshDimensions
// 0x0008 (0x0008 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_InternalRefreshDimensions final 
{
public:
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetBrushWithImageTexture
// 0x01A0 (0x01A0 - 0x0000)
struct WBP_CreateGameSelectionListEntry_C_GetBrushWithImageTexture final 
{
public:
	struct FSlateBrush                            Brush;                                             // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTexture2D*                             Image;                                             // 0x0088(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            UpdatedBrush;                                      // 0x0090(0x0088)(Parm, OutParm)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0118(0x0088)()
};

}

