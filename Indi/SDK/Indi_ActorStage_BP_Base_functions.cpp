// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ActorStage_BP_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActorStage_BP_Base.ActorStage_BP_Base_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AActorStage_BP_Base_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorStage_BP_Base.ActorStage_BP_Base_C.UserConstructionScript");

	AActorStage_BP_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
