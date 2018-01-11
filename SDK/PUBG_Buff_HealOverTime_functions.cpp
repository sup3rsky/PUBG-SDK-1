// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_HealOverTime_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HealOverTime.Buff_HealOverTime_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuff_HealOverTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealOverTime.Buff_HealOverTime_C.UserConstructionScript");

	ABuff_HealOverTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
