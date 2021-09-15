// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StackSplitting_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StackSplitting_BP.StackSplitting_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UStackSplitting_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackSplitting_BP.StackSplitting_BP_C.Construct");

	UStackSplitting_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackSplitting_BP.StackSplitting_BP_C.SetNewBackingMaterialHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         NewHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStackSplitting_BP_C::STATIC_SetNewBackingMaterialHeight(float* NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackSplitting_BP.StackSplitting_BP_C.SetNewBackingMaterialHeight");

	UStackSplitting_BP_C_SetNewBackingMaterialHeight_Params params;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackSplitting_BP.StackSplitting_BP_C.ExecuteUbergraph_StackSplitting_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStackSplitting_BP_C::STATIC_ExecuteUbergraph_StackSplitting_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackSplitting_BP.StackSplitting_BP_C.ExecuteUbergraph_StackSplitting_BP");

	UStackSplitting_BP_C_ExecuteUbergraph_StackSplitting_BP_Params params;
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
