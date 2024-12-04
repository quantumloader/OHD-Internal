#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ScrollBarArrowButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C
// 0x0020 (0x0250 - 0x0230)
class UWBP_ScrollBarArrowButton_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                ArrowBtn;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox;                                         // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bScrollDown;                                       // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bInit;                                             // 0x0249(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_ScrollBarArrowButton(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, bool Temp_bool_Variable, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetMaxScrollOffset_MaxOffset, float CallFunc_FMin_ReturnValue, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, float K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetScrollBox(class UScrollBox* ScrollBoxToUse);
	void IsInitialized(bool* bInitialized);
	void GetMaxScrollOffset(float* MaxOffset, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_ScrollBarArrowButton_C">();
	}
	static class UWBP_ScrollBarArrowButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScrollBarArrowButton_C>();
	}
};

}
