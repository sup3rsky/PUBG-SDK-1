#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CameraShakeForFalling_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CameraShakeForFalling.CameraShakeForFalling_C.ReceivePlayShake
struct UCameraShakeForFalling_C_ReceivePlayShake_Params
{
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraShakeForFalling.CameraShakeForFalling_C.ExecuteUbergraph_CameraShakeForFalling
struct UCameraShakeForFalling_C_ExecuteUbergraph_CameraShakeForFalling_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
