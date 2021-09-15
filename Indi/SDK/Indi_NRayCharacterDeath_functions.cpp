// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NRayCharacterDeath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NRayCharacterDeath.NRayCharacterDeath_C.Execute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterDeathComponent** InDeathComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNRayCharacterDeath_C::STATIC_Execute(class UCharacterDeathComponent** InDeathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NRayCharacterDeath.NRayCharacterDeath_C.Execute");

	UNRayCharacterDeath_C_Execute_Params params;
	params.InDeathComponent = InDeathComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NRayCharacterDeath.NRayCharacterDeath_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNRayCharacterDeath_C::STATIC_Tick(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function NRayCharacterDeath.NRayCharacterDeath_C.Tick");

	UNRayCharacterDeath_C_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NRayCharacterDeath.NRayCharacterDeath_C.ExecuteOnReload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterDeathComponent** InDeathComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNRayCharacterDeath_C::STATIC_ExecuteOnReload(class UCharacterDeathComponent** InDeathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NRayCharacterDeath.NRayCharacterDeath_C.ExecuteOnReload");

	UNRayCharacterDeath_C_ExecuteOnReload_Params params;
	params.InDeathComponent = InDeathComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NRayCharacterDeath.NRayCharacterDeath_C.ExecuteUbergraph_NRayCharacterDeath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNRayCharacterDeath_C::STATIC_ExecuteUbergraph_NRayCharacterDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NRayCharacterDeath.NRayCharacterDeath_C.ExecuteUbergraph_NRayCharacterDeath");

	UNRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath_Params params;
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
