// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerStats_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerStats_BP.PlayerStats_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPlayerStats_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStats_BP.PlayerStats_BP_C.Construct");

	UPlayerStats_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStats_BP.PlayerStats_BP_C.SetXPRatio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         XPRatio                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStats_BP_C::STATIC_SetXPRatio(float* XPRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStats_BP.PlayerStats_BP_C.SetXPRatio");

	UPlayerStats_BP_C_SetXPRatio_Params params;
	params.XPRatio = XPRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStats_BP.PlayerStats_BP_C.ExecuteUbergraph_PlayerStats_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStats_BP_C::STATIC_ExecuteUbergraph_PlayerStats_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStats_BP.PlayerStats_BP_C.ExecuteUbergraph_PlayerStats_BP");

	UPlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP_Params params;
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
