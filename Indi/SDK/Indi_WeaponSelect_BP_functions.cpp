// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WeaponSelect_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSelect_BP.WeaponSelect_BP_C.SetBackgroundVisibility
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class UWeaponRadialBackgroundSection_BP_C*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSelect_BP_C::STATIC_SetBackgroundVisibility(int Index, bool Enabled, TArray<class UWeaponRadialBackgroundSection_BP_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.SetBackgroundVisibility");

	UWeaponSelect_BP_C_SetBackgroundVisibility_Params params;
	params.Index = Index;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.UpdateBackgroundVisibility
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class UWeaponRadialBackgroundSection_BP_C*> TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            IndexToTest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSelect_BP_C::STATIC_UpdateBackgroundVisibility(TArray<class UWeaponRadialBackgroundSection_BP_C*> TargetArray, int IndexToTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.UpdateBackgroundVisibility");

	UWeaponSelect_BP_C_UpdateBackgroundVisibility_Params params;
	params.TargetArray = TargetArray;
	params.IndexToTest = IndexToTest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.GetBackgroundSection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWeaponRadialBackgroundSection_BP_C* AsHUDRadial_Section_BP         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWeaponSelect_BP_C::STATIC_GetBackgroundSection(class UObject* Object, class UWeaponRadialBackgroundSection_BP_C** AsHUDRadial_Section_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.GetBackgroundSection");

	UWeaponSelect_BP_C_GetBackgroundSection_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsHUDRadial_Section_BP != nullptr)
		*AsHUDRadial_Section_BP = params.AsHUDRadial_Section_BP;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.OnIntro
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponSelect_BP_C::OnIntro(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.OnIntro");

	UWeaponSelect_BP_C_OnIntro_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UWeaponSelect_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.Construct");

	UWeaponSelect_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSelect_BP_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.Tick");

	UWeaponSelect_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.OnSetWeaponEquippedDelegate_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSelect_BP_C::STATIC_OnSetWeaponEquippedDelegate_Event_1(int WeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.OnSetWeaponEquippedDelegate_Event_1");

	UWeaponSelect_BP_C_OnSetWeaponEquippedDelegate_Event_1_Params params;
	params.WeaponIndex = WeaponIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.OnSetAmmoEquippedDelegate_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bEquipped                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSelect_BP_C::STATIC_OnSetAmmoEquippedDelegate_Event_1(bool bEquipped, int AmmoIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.OnSetAmmoEquippedDelegate_Event_1");

	UWeaponSelect_BP_C_OnSetAmmoEquippedDelegate_Event_1_Params params;
	params.bEquipped = bEquipped;
	params.AmmoIndex = AmmoIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.OnSectionSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSelect_BP_C::STATIC_OnSectionSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.OnSectionSelected");

	UWeaponSelect_BP_C_OnSectionSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.BndEvt__Radial_K2Node_ComponentBoundEvent_1_SectionSelectedSignature__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSelect_BP_C::STATIC_BndEvt__Radial_K2Node_ComponentBoundEvent_1_SectionSelectedSignature__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.BndEvt__Radial_K2Node_ComponentBoundEvent_1_SectionSelectedSignature__DelegateSignature");

	UWeaponSelect_BP_C_BndEvt__Radial_K2Node_ComponentBoundEvent_1_SectionSelectedSignature__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSelect_BP.WeaponSelect_BP_C.ExecuteUbergraph_WeaponSelect_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSelect_BP_C::STATIC_ExecuteUbergraph_WeaponSelect_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSelect_BP.WeaponSelect_BP_C.ExecuteUbergraph_WeaponSelect_BP");

	UWeaponSelect_BP_C_ExecuteUbergraph_WeaponSelect_BP_Params params;
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
