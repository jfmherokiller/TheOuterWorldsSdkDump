// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NPC_Sound_Sprat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPC_Sound_Sprat.NPC_Sound_Sprat_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UNPC_Sound_Sprat_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_Sound_Sprat.NPC_Sound_Sprat_C.ReceiveBeginPlay");

	UNPC_Sound_Sprat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Sound_Sprat.NPC_Sound_Sprat_C.ExecuteUbergraph_NPC_Sound_Sprat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNPC_Sound_Sprat_C::STATIC_ExecuteUbergraph_NPC_Sound_Sprat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_Sound_Sprat.NPC_Sound_Sprat_C.ExecuteUbergraph_NPC_Sound_Sprat");

	UNPC_Sound_Sprat_C_ExecuteUbergraph_NPC_Sound_Sprat_Params params;
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
