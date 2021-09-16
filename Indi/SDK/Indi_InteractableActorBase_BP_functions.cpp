// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InteractableActorBase_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InteractableActorBase_BP.InteractableActorBase_BP_C.GetInteractLocString
// ()
// Parameters:
// struct FLocString              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLocString AInteractableActorBase_BP_C::GetInteractLocString()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractableActorBase_BP.InteractableActorBase_BP_C.GetInteractLocString");

	AInteractableActorBase_BP_C_GetInteractLocString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractableActorBase_BP.InteractableActorBase_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AInteractableActorBase_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractableActorBase_BP.InteractableActorBase_BP_C.UserConstructionScript");

	AInteractableActorBase_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractableActorBase_BP.InteractableActorBase_BP_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractComplete__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FInteractionDescription Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AInteractableActorBase_BP_C::STATIC_BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractComplete__DelegateSignature(const struct FInteractionDescription& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractableActorBase_BP.InteractableActorBase_BP_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractComplete__DelegateSignature");

	AInteractableActorBase_BP_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractComplete__DelegateSignature_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractableActorBase_BP.InteractableActorBase_BP_C.ExecuteUbergraph_InteractableActorBase_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractableActorBase_BP_C::STATIC_ExecuteUbergraph_InteractableActorBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractableActorBase_BP.InteractableActorBase_BP_C.ExecuteUbergraph_InteractableActorBase_BP");

	AInteractableActorBase_BP_C_ExecuteUbergraph_InteractableActorBase_BP_Params params;
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
