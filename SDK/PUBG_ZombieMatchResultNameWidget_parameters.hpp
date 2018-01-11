#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ZombieMatchResultNameWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZombieMatchResultNameWidget.ZombieMatchResultNameWidget_C.UpdatePlayerMatchResultInfo
struct UZombieMatchResultNameWidget_C_UpdatePlayerMatchResultInfo_Params
{
	struct FTslPlayerMatchResultInfo                   TslPlayerMatchResultInfo;                                 // (Parm)
	bool                                               IsFirst;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
