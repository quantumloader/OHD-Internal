#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_NavBarButton

#include "Basic.hpp"

#include "WBP_MainMenu_NavBarButton_classes.hpp"
#include "WBP_MainMenu_NavBarButton_parameters.hpp"


namespace SDK
{

// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_NavBarButton_C*     ClickedBtn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_NavBarButton_C::ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "ButtonClicked__DelegateSignature");

	Params::WBP_MainMenu_NavBarButton_C_ButtonClicked__DelegateSignature Parms{};

	Parms.ClickedBtn = ClickedBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.ExecuteUbergraph_WBP_MainMenu_NavBarButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetIsEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_TextToUpper_ReturnValue                       ()
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                      K2Node_Select_Default                                  ()
// class UButtonSlot*                      K2Node_DynamicCast_AsButton_Slot                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsDemoBuild_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsDemoBuild_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenu_NavBarButton_C::ExecuteUbergraph_WBP_MainMenu_NavBarButton(int32 EntryPoint, bool CallFunc_GetIsEnabled_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, bool Temp_bool_Variable, const struct FSlateColor& K2Node_Select_Default, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDemoBuild_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDemoBuild_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "ExecuteUbergraph_WBP_MainMenu_NavBarButton");

	Params::WBP_MainMenu_NavBarButton_C_ExecuteUbergraph_WBP_MainMenu_NavBarButton Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.K2Node_DynamicCast_AsButton_Slot = K2Node_DynamicCast_AsButton_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDemoBuild_ReturnValue = CallFunc_IsDemoBuild_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDemoBuild_ReturnValue_1 = CallFunc_IsDemoBuild_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MainMenu_NavBarButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenu_NavBarButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "PreConstruct");

	Params::WBP_MainMenu_NavBarButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenu_NavBarButton_C::SetActive(bool bNewActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "SetActive");

	Params::WBP_MainMenu_NavBarButton_C_SetActive Parms{};

	Parms.bNewActive = bNewActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.UpdateAppearance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      NewTint                                                (Edit, BlueprintVisible)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Temp_float_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Temp_float_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_MakeStruct_LinearColor                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush                           ()
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush_1                         ()
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush_2                         ()
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush_3                         ()
// struct FButtonStyle                     K2Node_MakeStruct_ButtonStyle                          ()
// struct FSlateColor                      K2Node_Select_Default_1                                ()

void UWBP_MainMenu_NavBarButton_C::UpdateAppearance(const struct FSlateColor& NewTint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NavBarButton_C", "UpdateAppearance");

	Params::WBP_MainMenu_NavBarButton_C_UpdateAppearance Parms{};

	Parms.NewTint = std::move(NewTint);
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_LinearColor = std::move(K2Node_MakeStruct_LinearColor);
	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);
	Parms.K2Node_MakeStruct_SlateBrush = std::move(K2Node_MakeStruct_SlateBrush);
	Parms.K2Node_MakeStruct_SlateBrush_1 = std::move(K2Node_MakeStruct_SlateBrush_1);
	Parms.K2Node_MakeStruct_SlateBrush_2 = std::move(K2Node_MakeStruct_SlateBrush_2);
	Parms.K2Node_MakeStruct_SlateBrush_3 = std::move(K2Node_MakeStruct_SlateBrush_3);
	Parms.K2Node_MakeStruct_ButtonStyle = std::move(K2Node_MakeStruct_ButtonStyle);
	Parms.K2Node_Select_Default_1 = std::move(K2Node_Select_Default_1);

	UObject::ProcessEvent(Func, &Parms);
}

}

