#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WidgetFunctionLibrary_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetOwningShooterCharacter
struct UWidgetFunctionLibrary_C_GetOwningShooterCharacter_Params
{
	class UUserWidget*                                 UserWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               ShooterCharacter;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
