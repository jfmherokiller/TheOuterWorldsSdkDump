// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WeaponRadialSection_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponRadialSection_BP.WeaponRadialSection_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UWeaponRadialSection_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadialSection_BP.WeaponRadialSection_BP_C.Construct");

	UWeaponRadialSection_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadialSection_BP.WeaponRadialSection_BP_C.ExecuteUbergraph_WeaponRadialSection_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponRadialSection_BP_C::STATIC_ExecuteUbergraph_WeaponRadialSection_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadialSection_BP.WeaponRadialSection_BP_C.ExecuteUbergraph_WeaponRadialSection_BP");

	UWeaponRadialSection_BP_C_ExecuteUbergraph_WeaponRadialSection_BP_Params params;
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
