// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ex_0020_ShipWreckage_SCR_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ex_0020_ShipWreckage_SCR.Ex_0020_ShipWreckage_SCR_C.BndEvt__Trigger_Marauder_Ambush_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEx_0020_ShipWreckage_SCR_C::STATIC_BndEvt__Trigger_Marauder_Ambush_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ex_0020_ShipWreckage_SCR.Ex_0020_ShipWreckage_SCR_C.BndEvt__Trigger_Marauder_Ambush_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	AEx_0020_ShipWreckage_SCR_C_BndEvt__Trigger_Marauder_Ambush_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ex_0020_ShipWreckage_SCR.Ex_0020_ShipWreckage_SCR_C.ExecuteUbergraph_Ex_0020_ShipWreckage_SCR
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEx_0020_ShipWreckage_SCR_C::STATIC_ExecuteUbergraph_Ex_0020_ShipWreckage_SCR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ex_0020_ShipWreckage_SCR.Ex_0020_ShipWreckage_SCR_C.ExecuteUbergraph_Ex_0020_ShipWreckage_SCR");

	AEx_0020_ShipWreckage_SCR_C_ExecuteUbergraph_Ex_0020_ShipWreckage_SCR_Params params;
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
