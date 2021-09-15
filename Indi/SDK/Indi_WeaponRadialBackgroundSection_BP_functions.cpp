// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WeaponRadialBackgroundSection_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.Deselect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UWeaponRadialBackgroundSection_BP_C::STATIC_Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.Deselect");

	UWeaponRadialBackgroundSection_BP_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.Select
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UWeaponRadialBackgroundSection_BP_C::STATIC_Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.Select");

	UWeaponRadialBackgroundSection_BP_C_Select_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.ExecuteUbergraph_WeaponRadialBackgroundSection_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponRadialBackgroundSection_BP_C::STATIC_ExecuteUbergraph_WeaponRadialBackgroundSection_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.ExecuteUbergraph_WeaponRadialBackgroundSection_BP");

	UWeaponRadialBackgroundSection_BP_C_ExecuteUbergraph_WeaponRadialBackgroundSection_BP_Params params;
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
