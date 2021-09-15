// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RagdollCharacterDeath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RagdollCharacterDeath.RagdollCharacterDeath_C.Execute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterDeathComponent** InDeathComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URagdollCharacterDeath_C::STATIC_Execute(class UCharacterDeathComponent** InDeathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RagdollCharacterDeath.RagdollCharacterDeath_C.Execute");

	URagdollCharacterDeath_C_Execute_Params params;
	params.InDeathComponent = InDeathComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RagdollCharacterDeath.RagdollCharacterDeath_C.ExecuteOnReload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterDeathComponent** InDeathComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URagdollCharacterDeath_C::STATIC_ExecuteOnReload(class UCharacterDeathComponent** InDeathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RagdollCharacterDeath.RagdollCharacterDeath_C.ExecuteOnReload");

	URagdollCharacterDeath_C_ExecuteOnReload_Params params;
	params.InDeathComponent = InDeathComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RagdollCharacterDeath.RagdollCharacterDeath_C.ExecuteUbergraph_RagdollCharacterDeath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URagdollCharacterDeath_C::STATIC_ExecuteUbergraph_RagdollCharacterDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RagdollCharacterDeath.RagdollCharacterDeath_C.ExecuteUbergraph_RagdollCharacterDeath");

	URagdollCharacterDeath_C_ExecuteUbergraph_RagdollCharacterDeath_Params params;
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
