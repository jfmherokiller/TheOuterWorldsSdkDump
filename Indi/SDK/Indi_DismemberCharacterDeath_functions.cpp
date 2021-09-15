// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DismemberCharacterDeath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DismemberCharacterDeath.DismemberCharacterDeath_C.AddTorsoGibParticles
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UDismemberCharacterDeath_C::STATIC_AddTorsoGibParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DismemberCharacterDeath.DismemberCharacterDeath_C.AddTorsoGibParticles");

	UDismemberCharacterDeath_C_AddTorsoGibParticles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DismemberCharacterDeath.DismemberCharacterDeath_C.Execute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterDeathComponent** InDeathComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDismemberCharacterDeath_C::STATIC_Execute(class UCharacterDeathComponent** InDeathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DismemberCharacterDeath.DismemberCharacterDeath_C.Execute");

	UDismemberCharacterDeath_C_Execute_Params params;
	params.InDeathComponent = InDeathComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DismemberCharacterDeath.DismemberCharacterDeath_C.ExecuteUbergraph_DismemberCharacterDeath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDismemberCharacterDeath_C::STATIC_ExecuteUbergraph_DismemberCharacterDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DismemberCharacterDeath.DismemberCharacterDeath_C.ExecuteUbergraph_DismemberCharacterDeath");

	UDismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath_Params params;
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
