// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GibCharacterDeath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GibCharacterDeath.GibCharacterDeath_C.Execute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterDeathComponent** InDeathComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGibCharacterDeath_C::STATIC_Execute(class UCharacterDeathComponent** InDeathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GibCharacterDeath.GibCharacterDeath_C.Execute");

	UGibCharacterDeath_C_Execute_Params params;
	params.InDeathComponent = InDeathComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GibCharacterDeath.GibCharacterDeath_C.ExecuteUbergraph_GibCharacterDeath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGibCharacterDeath_C::STATIC_ExecuteUbergraph_GibCharacterDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GibCharacterDeath.GibCharacterDeath_C.ExecuteUbergraph_GibCharacterDeath");

	UGibCharacterDeath_C_ExecuteUbergraph_GibCharacterDeath_Params params;
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
