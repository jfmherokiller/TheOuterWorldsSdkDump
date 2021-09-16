// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EXAM_scientist_wanted_poster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EXAM_scientist_wanted_poster.EXAM_scientist_wanted_poster_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEXAM_scientist_wanted_poster_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EXAM_scientist_wanted_poster.EXAM_scientist_wanted_poster_C.UserConstructionScript");

	AEXAM_scientist_wanted_poster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
