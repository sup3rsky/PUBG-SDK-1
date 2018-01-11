#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SpectatingSelectionWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpectatingSelectionWidget.SpectatingSelectionWidget_C.Get_SelectionText_Text_1
struct USpectatingSelectionWidget_C_Get_SelectionText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SpectatingSelectionWidget.SpectatingSelectionWidget_C.Get_SelectionKey_Text_1
struct USpectatingSelectionWidget_C_Get_SelectionKey_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SpectatingSelectionWidget.SpectatingSelectionWidget_C.OnPrepass_1
struct USpectatingSelectionWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
