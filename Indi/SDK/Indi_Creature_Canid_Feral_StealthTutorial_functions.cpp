// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Creature_Canid_Feral_StealthTutorial_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Creature_Canid_Feral_StealthTutorial.Creature_Canid_Feral_StealthTutorial_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ACreature_Canid_Feral_StealthTutorial_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Creature_Canid_Feral_StealthTutorial.Creature_Canid_Feral_StealthTutorial_C.UserConstructionScript");

	ACreature_Canid_Feral_StealthTutorial_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creature_Canid_Feral_StealthTutorial.Creature_Canid_Feral_StealthTutorial_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ACreature_Canid_Feral_StealthTutorial_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Creature_Canid_Feral_StealthTutorial.Creature_Canid_Feral_StealthTutorial_C.ReceiveBeginPlay");

	ACreature_Canid_Feral_StealthTutorial_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creature_Canid_Feral_StealthTutorial.Creature_Canid_Feral_StealthTutorial_C.ExecuteUbergraph_Creature_Canid_Feral_StealthTutorial
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreature_Canid_Feral_StealthTutorial_C::STATIC_ExecuteUbergraph_Creature_Canid_Feral_StealthTutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Creature_Canid_Feral_StealthTutorial.Creature_Canid_Feral_StealthTutorial_C.ExecuteUbergraph_Creature_Canid_Feral_StealthTutorial");

	ACreature_Canid_Feral_StealthTutorial_C_ExecuteUbergraph_Creature_Canid_Feral_StealthTutorial_Params params;
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
