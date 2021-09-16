// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeHvy_TeleStaff_Shared_Visuals_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeleeHvy_TeleStaff_Shared_Visuals.MeleeHvy_TeleStaff_Shared_Visuals_C.EnterStateBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EWeaponState*                  WeaponState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEventEffectParams*     Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMeleeHvy_TeleStaff_Shared_Visuals_C::STATIC_EnterStateBP(EWeaponState* WeaponState, struct FEventEffectParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeHvy_TeleStaff_Shared_Visuals.MeleeHvy_TeleStaff_Shared_Visuals_C.EnterStateBP");

	UMeleeHvy_TeleStaff_Shared_Visuals_C_EnterStateBP_Params params;
	params.WeaponState = WeaponState;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeHvy_TeleStaff_Shared_Visuals.MeleeHvy_TeleStaff_Shared_Visuals_C.ExecuteUbergraph_MeleeHvy_TeleStaff_Shared_Visuals
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeleeHvy_TeleStaff_Shared_Visuals_C::STATIC_ExecuteUbergraph_MeleeHvy_TeleStaff_Shared_Visuals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeHvy_TeleStaff_Shared_Visuals.MeleeHvy_TeleStaff_Shared_Visuals_C.ExecuteUbergraph_MeleeHvy_TeleStaff_Shared_Visuals");

	UMeleeHvy_TeleStaff_Shared_Visuals_C_ExecuteUbergraph_MeleeHvy_TeleStaff_Shared_Visuals_Params params;
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
