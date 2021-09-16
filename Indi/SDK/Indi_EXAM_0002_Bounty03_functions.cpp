// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EXAM_0002_Bounty03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EXAM_0002_Bounty03.EXAM_0002_Bounty03_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEXAM_0002_Bounty03_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EXAM_0002_Bounty03.EXAM_0002_Bounty03_C.UserConstructionScript");

	AEXAM_0002_Bounty03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
