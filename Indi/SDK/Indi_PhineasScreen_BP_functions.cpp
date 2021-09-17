// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PhineasScreen_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhineasScreen_BP.PhineasScreen_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void APhineasScreen_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhineasScreen_BP.PhineasScreen_BP_C.UserConstructionScript");

	APhineasScreen_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
