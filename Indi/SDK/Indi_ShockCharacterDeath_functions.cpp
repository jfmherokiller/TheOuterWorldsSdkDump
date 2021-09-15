// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ShockCharacterDeath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShockCharacterDeath.ShockCharacterDeath_C.Execute
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterDeathComponent** InDeathComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShockCharacterDeath_C::STATIC_Execute(class UCharacterDeathComponent** InDeathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockCharacterDeath.ShockCharacterDeath_C.Execute");

	UShockCharacterDeath_C_Execute_Params params;
	params.InDeathComponent = InDeathComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockCharacterDeath.ShockCharacterDeath_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShockCharacterDeath_C::STATIC_Tick(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockCharacterDeath.ShockCharacterDeath_C.Tick");

	UShockCharacterDeath_C_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockCharacterDeath.ShockCharacterDeath_C.ExecuteOnReload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UCharacterDeathComponent** InDeathComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShockCharacterDeath_C::STATIC_ExecuteOnReload(class UCharacterDeathComponent** InDeathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockCharacterDeath.ShockCharacterDeath_C.ExecuteOnReload");

	UShockCharacterDeath_C_ExecuteOnReload_Params params;
	params.InDeathComponent = InDeathComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockCharacterDeath.ShockCharacterDeath_C.ExecuteUbergraph_ShockCharacterDeath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShockCharacterDeath_C::STATIC_ExecuteUbergraph_ShockCharacterDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockCharacterDeath.ShockCharacterDeath_C.ExecuteUbergraph_ShockCharacterDeath");

	UShockCharacterDeath_C_ExecuteUbergraph_ShockCharacterDeath_Params params;
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
