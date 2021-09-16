// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_UnarmedRagdollCharacterDeath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnarmedRagdollCharacterDeath.UnarmedRagdollCharacterDeath_C.Execute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterDeathComponent** InDeathComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUnarmedRagdollCharacterDeath_C::STATIC_Execute(class UCharacterDeathComponent** InDeathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnarmedRagdollCharacterDeath.UnarmedRagdollCharacterDeath_C.Execute");

	UUnarmedRagdollCharacterDeath_C_Execute_Params params;
	params.InDeathComponent = InDeathComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnarmedRagdollCharacterDeath.UnarmedRagdollCharacterDeath_C.ExecuteUbergraph_UnarmedRagdollCharacterDeath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnarmedRagdollCharacterDeath_C::STATIC_ExecuteUbergraph_UnarmedRagdollCharacterDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnarmedRagdollCharacterDeath.UnarmedRagdollCharacterDeath_C.ExecuteUbergraph_UnarmedRagdollCharacterDeath");

	UUnarmedRagdollCharacterDeath_C_ExecuteUbergraph_UnarmedRagdollCharacterDeath_Params params;
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
