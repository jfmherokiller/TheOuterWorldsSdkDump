// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ComTower_Holo_BP_B_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ComTower_Holo_BP_B.ComTower_Holo_BP_B_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComTower_Holo_BP_B_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComTower_Holo_BP_B.ComTower_Holo_BP_B_C.UserConstructionScript");

	AComTower_Holo_BP_B_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComTower_Holo_BP_B.ComTower_Holo_BP_B_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComTower_Holo_BP_B_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComTower_Holo_BP_B.ComTower_Holo_BP_B_C.ReceiveTick");

	AComTower_Holo_BP_B_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComTower_Holo_BP_B.ComTower_Holo_BP_B_C.ExecuteUbergraph_ComTower_Holo_BP_B
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComTower_Holo_BP_B_C::STATIC_ExecuteUbergraph_ComTower_Holo_BP_B(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComTower_Holo_BP_B.ComTower_Holo_BP_B_C.ExecuteUbergraph_ComTower_Holo_BP_B");

	AComTower_Holo_BP_B_C_ExecuteUbergraph_ComTower_Holo_BP_B_Params params;
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
