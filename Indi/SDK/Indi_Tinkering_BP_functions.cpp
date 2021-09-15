// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Tinkering_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tinkering_BP.Tinkering_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UTinkering_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tinkering_BP.Tinkering_BP_C.Construct");

	UTinkering_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tinkering_BP.Tinkering_BP_C.SetNewBackingMaterialHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         NewHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTinkering_BP_C::STATIC_SetNewBackingMaterialHeight(float* NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tinkering_BP.Tinkering_BP_C.SetNewBackingMaterialHeight");

	UTinkering_BP_C_SetNewBackingMaterialHeight_Params params;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tinkering_BP.Tinkering_BP_C.ExecuteUbergraph_Tinkering_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTinkering_BP_C::STATIC_ExecuteUbergraph_Tinkering_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tinkering_BP.Tinkering_BP_C.ExecuteUbergraph_Tinkering_BP");

	UTinkering_BP_C_ExecuteUbergraph_Tinkering_BP_Params params;
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
