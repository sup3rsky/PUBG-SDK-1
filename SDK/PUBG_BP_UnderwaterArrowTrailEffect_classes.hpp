#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_UnderwaterArrowTrailEffect_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnderwaterArrowTrailEffect.BP_UnderwaterArrowTrailEffect_C
// 0x0000 (0x0428 - 0x0428)
class ABP_UnderwaterArrowTrailEffect_C : public ATslParticleBulletTrail
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnderwaterArrowTrailEffect.BP_UnderwaterArrowTrailEffect_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
