#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ZombieGroupWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZombieGroupWidget.ZombieGroupWidget_C.CreateObserverMatchResultInfoWidget
struct UZombieGroupWidget_C_CreateObserverMatchResultInfoWidget_Params
{
};

// Function ZombieGroupWidget.ZombieGroupWidget_C.AddPlayerMatchResultInfo
struct UZombieGroupWidget_C_AddPlayerMatchResultInfo_Params
{
	struct FTslPlayerMatchResultInfo                   TslPlayerMatchResultInfo;                                 // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
