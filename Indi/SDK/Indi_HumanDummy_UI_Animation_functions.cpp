// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_HumanDummy_UI_Animation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.AnimNotify_EnableLeftHandIK
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UHumanDummy_UI_Animation_C::STATIC_AnimNotify_EnableLeftHandIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.AnimNotify_EnableLeftHandIK");

	UHumanDummy_UI_Animation_C_AnimNotify_EnableLeftHandIK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.AnimNotify_DisableLeftHandIK
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UHumanDummy_UI_Animation_C::STATIC_AnimNotify_DisableLeftHandIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.AnimNotify_DisableLeftHandIK");

	UHumanDummy_UI_Animation_C_AnimNotify_DisableLeftHandIK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.ExecuteUbergraph_HumanDummy_UI_Animation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHumanDummy_UI_Animation_C::STATIC_ExecuteUbergraph_HumanDummy_UI_Animation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.ExecuteUbergraph_HumanDummy_UI_Animation");

	UHumanDummy_UI_Animation_C_ExecuteUbergraph_HumanDummy_UI_Animation_Params params;
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
