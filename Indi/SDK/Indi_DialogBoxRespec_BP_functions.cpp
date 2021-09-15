// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DialogBoxRespec_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DialogBoxRespec_BP.DialogBoxRespec_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UDialogBoxRespec_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogBoxRespec_BP.DialogBoxRespec_BP_C.Construct");

	UDialogBoxRespec_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DialogBoxRespec_BP.DialogBoxRespec_BP_C.SetNewBackingMaterialHeight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         NewHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDialogBoxRespec_BP_C::STATIC_SetNewBackingMaterialHeight(float* NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogBoxRespec_BP.DialogBoxRespec_BP_C.SetNewBackingMaterialHeight");

	UDialogBoxRespec_BP_C_SetNewBackingMaterialHeight_Params params;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DialogBoxRespec_BP.DialogBoxRespec_BP_C.ExecuteUbergraph_DialogBoxRespec_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDialogBoxRespec_BP_C::STATIC_ExecuteUbergraph_DialogBoxRespec_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogBoxRespec_BP.DialogBoxRespec_BP_C.ExecuteUbergraph_DialogBoxRespec_BP");

	UDialogBoxRespec_BP_C_ExecuteUbergraph_DialogBoxRespec_BP_Params params;
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
