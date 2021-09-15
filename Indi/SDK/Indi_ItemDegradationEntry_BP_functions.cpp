// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemDegradationEntry_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.PlayIntroDamagedAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemDegradationEntry_BP_C::STATIC_PlayIntroDamagedAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.PlayIntroDamagedAnim");

	UItemDegradationEntry_BP_C_PlayIntroDamagedAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.PlaySevereDamageAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemDegradationEntry_BP_C::STATIC_PlaySevereDamageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.PlaySevereDamageAnim");

	UItemDegradationEntry_BP_C_PlaySevereDamageAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.KillAllAnims
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemDegradationEntry_BP_C::STATIC_KillAllAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.KillAllAnims");

	UItemDegradationEntry_BP_C_KillAllAnims_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.ExecuteUbergraph_ItemDegradationEntry_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDegradationEntry_BP_C::STATIC_ExecuteUbergraph_ItemDegradationEntry_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.ExecuteUbergraph_ItemDegradationEntry_BP");

	UItemDegradationEntry_BP_C_ExecuteUbergraph_ItemDegradationEntry_BP_Params params;
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
