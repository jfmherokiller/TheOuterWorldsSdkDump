// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CashRegister_A_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CashRegister_A_BP.CashRegister_A_BP_C.GetLightingConfig
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   MaterialSlot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACashRegister_A_BP_C::STATIC_GetLightingConfig(class UStaticMeshComponent** Mesh, struct FName* MaterialSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashRegister_A_BP.CashRegister_A_BP_C.GetLightingConfig");

	ACashRegister_A_BP_C_GetLightingConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (MaterialSlot != nullptr)
		*MaterialSlot = params.MaterialSlot;
}


// Function CashRegister_A_BP.CashRegister_A_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ACashRegister_A_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashRegister_A_BP.CashRegister_A_BP_C.UserConstructionScript");

	ACashRegister_A_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashRegister_A_BP.CashRegister_A_BP_C.ApplyLight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ACashRegister_A_BP_C::STATIC_ApplyLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashRegister_A_BP.CashRegister_A_BP_C.ApplyLight");

	ACashRegister_A_BP_C_ApplyLight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashRegister_A_BP.CashRegister_A_BP_C.ExecuteUbergraph_CashRegister_A_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACashRegister_A_BP_C::STATIC_ExecuteUbergraph_CashRegister_A_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashRegister_A_BP.CashRegister_A_BP_C.ExecuteUbergraph_CashRegister_A_BP");

	ACashRegister_A_BP_C_ExecuteUbergraph_CashRegister_A_BP_Params params;
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
