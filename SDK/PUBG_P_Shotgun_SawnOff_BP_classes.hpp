#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Shotgun_SawnOff_BP_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Shotgun_SawnOff_BP.P_Shotgun_SawnOff_BP_C
// 0x0000 (0x0408 - 0x0408)
class AP_Shotgun_SawnOff_BP_C : public ATslParticle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass P_Shotgun_SawnOff_BP.P_Shotgun_SawnOff_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
