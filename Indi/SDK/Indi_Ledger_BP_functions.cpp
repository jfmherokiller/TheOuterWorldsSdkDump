// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ledger_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ledger_BP.Ledger_BP_C.OnOutro
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULedger_BP_C::OnOutro(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.OnOutro");

	ULedger_BP_C_OnOutro_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ledger_BP.Ledger_BP_C.OnIntro
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULedger_BP_C::OnIntro(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.OnIntro");

	ULedger_BP_C_OnIntro_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ledger_BP.Ledger_BP_C.OnMaximize
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULedger_BP_C::OnMaximize(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.OnMaximize");

	ULedger_BP_C_OnMaximize_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ledger_BP.Ledger_BP_C.OnMinimize
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULedger_BP_C::OnMinimize(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.OnMinimize");

	ULedger_BP_C_OnMinimize_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ledger_BP.Ledger_BP_C.SetupMaterialInstances
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* MaterialInstance               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          SizeX                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          SizeY                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULedger_BP_C::STATIC_SetupMaterialInstances(class UImage* Image, class UMaterialInstanceDynamic** MaterialInstance, float* SizeX, float* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.SetupMaterialInstances");

	ULedger_BP_C_SetupMaterialInstances_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstance != nullptr)
		*MaterialInstance = params.MaterialInstance;
	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
}


// Function Ledger_BP.Ledger_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ULedger_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.Construct");

	ULedger_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ledger_BP.Ledger_BP_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULedger_BP_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.Tick");

	ULedger_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ledger_BP.Ledger_BP_C.OnFinalizeMaximize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ULedger_BP_C::STATIC_OnFinalizeMaximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.OnFinalizeMaximize");

	ULedger_BP_C_OnFinalizeMaximize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ledger_BP.Ledger_BP_C.OnFinalizeMinimize
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ULedger_BP_C::STATIC_OnFinalizeMinimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.OnFinalizeMinimize");

	ULedger_BP_C_OnFinalizeMinimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ledger_BP.Ledger_BP_C.OnSetCurrentPage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// ELedgerPages*                  Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAnimate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULedger_BP_C::STATIC_OnSetCurrentPage(ELedgerPages* Page, bool* bAnimate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.OnSetCurrentPage");

	ULedger_BP_C_OnSetCurrentPage_Params params;
	params.Page = Page;
	params.bAnimate = bAnimate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ledger_BP.Ledger_BP_C.FadeInSharedItemViewer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ULedger_BP_C::STATIC_FadeInSharedItemViewer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.FadeInSharedItemViewer");

	ULedger_BP_C_FadeInSharedItemViewer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ledger_BP.Ledger_BP_C.ExecuteUbergraph_Ledger_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULedger_BP_C::STATIC_ExecuteUbergraph_Ledger_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ledger_BP.Ledger_BP_C.ExecuteUbergraph_Ledger_BP");

	ULedger_BP_C_ExecuteUbergraph_Ledger_BP_Params params;
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
