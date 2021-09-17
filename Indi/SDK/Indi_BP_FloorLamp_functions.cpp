// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_FloorLamp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FloorLamp.BP_FloorLamp_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_FloorLamp_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FloorLamp.BP_FloorLamp_C.UserConstructionScript");

	ABP_FloorLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
