// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VendingContainer_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VendingContainer_BP.VendingContainer_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AVendingContainer_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendingContainer_BP.VendingContainer_BP_C.UserConstructionScript");

	AVendingContainer_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VendingContainer_BP.VendingContainer_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AVendingContainer_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendingContainer_BP.VendingContainer_BP_C.ReceiveBeginPlay");

	AVendingContainer_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VendingContainer_BP.VendingContainer_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLCloseStart__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVendingContainer_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLCloseStart__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function VendingContainer_BP.VendingContainer_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLCloseStart__DelegateSignature");

	AVendingContainer_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLCloseStart__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VendingContainer_BP.VendingContainer_BP_C.ExecuteUbergraph_VendingContainer_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVendingContainer_BP_C::STATIC_ExecuteUbergraph_VendingContainer_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VendingContainer_BP.VendingContainer_BP_C.ExecuteUbergraph_VendingContainer_BP");

	AVendingContainer_BP_C_ExecuteUbergraph_VendingContainer_BP_Params params;
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
