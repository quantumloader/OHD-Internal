#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_RadialInput

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "EJoystickTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_RadialInput.BPI_RadialInput_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_RadialInput_C final  : public IInterface
{
public:
	void GetJoystickDirection(enum class EJoystickTypes Stick, struct FVector2D* StickInput);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BPI_RadialInput_C">();
	}
	static class IBPI_RadialInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_RadialInput_C>();
	}
};

}
