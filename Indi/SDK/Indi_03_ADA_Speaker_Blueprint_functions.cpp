// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_03_ADA_Speaker_Blueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 03_ADA_Speaker_Blueprint.03_ADA_Speaker_Blueprint_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A03_ADA_Speaker_Blueprint_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 03_ADA_Speaker_Blueprint.03_ADA_Speaker_Blueprint_C.UserConstructionScript");

	A03_ADA_Speaker_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
