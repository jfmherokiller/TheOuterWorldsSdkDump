// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LngGn_BoltRifle_AnimBlueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LngGn_BoltRifle_AnimBlueprint.LngGn_BoltRifle_AnimBlueprint_C.ExecuteUbergraph_LngGn_BoltRifle_AnimBlueprint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULngGn_BoltRifle_AnimBlueprint_C::STATIC_ExecuteUbergraph_LngGn_BoltRifle_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LngGn_BoltRifle_AnimBlueprint.LngGn_BoltRifle_AnimBlueprint_C.ExecuteUbergraph_LngGn_BoltRifle_AnimBlueprint");

	ULngGn_BoltRifle_AnimBlueprint_C_ExecuteUbergraph_LngGn_BoltRifle_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
