// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_GodRay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GodRay.BP_GodRay_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_GodRay_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GodRay.BP_GodRay_C.UserConstructionScript");

	ABP_GodRay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
