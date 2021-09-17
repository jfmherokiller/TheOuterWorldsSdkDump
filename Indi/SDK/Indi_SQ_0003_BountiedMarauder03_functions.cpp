// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SQ_0003_BountiedMarauder03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SQ_0003_BountiedMarauder03.SQ_0003_BountiedMarauder03_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASQ_0003_BountiedMarauder03_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQ_0003_BountiedMarauder03.SQ_0003_BountiedMarauder03_C.UserConstructionScript");

	ASQ_0003_BountiedMarauder03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
