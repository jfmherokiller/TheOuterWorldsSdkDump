// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaPlayerCharacter_BP_TestCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IndianaPlayerCharacter_BP_TestCharacter.IndianaPlayerCharacter_BP_TestCharacter_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AIndianaPlayerCharacter_BP_TestCharacter_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaPlayerCharacter_BP_TestCharacter.IndianaPlayerCharacter_BP_TestCharacter_C.UserConstructionScript");

	AIndianaPlayerCharacter_BP_TestCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
