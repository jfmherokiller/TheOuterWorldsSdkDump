// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Trigger_Saveable_PlayerOnly_Capsule_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trigger_Saveable_PlayerOnly_Capsule.Trigger_Saveable_PlayerOnly_Capsule_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ATrigger_Saveable_PlayerOnly_Capsule_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trigger_Saveable_PlayerOnly_Capsule.Trigger_Saveable_PlayerOnly_Capsule_C.UserConstructionScript");

	ATrigger_Saveable_PlayerOnly_Capsule_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
