// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_ShipAI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 0001_ShipAI.0001_ShipAI_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0001_ShipAI_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_ShipAI.0001_ShipAI_C.UserConstructionScript");

	A0001_ShipAI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_ShipAI.0001_ShipAI_C.BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  ZoneOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0001_ShipAI_C::STATIC_BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature(class AActor* ZoneOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_ShipAI.0001_ShipAI_C.BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature");

	A0001_ShipAI_C_BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature_Params params;
	params.ZoneOwner = ZoneOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_ShipAI.0001_ShipAI_C.ExecuteUbergraph_0001_ShipAI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0001_ShipAI_C::STATIC_ExecuteUbergraph_0001_ShipAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_ShipAI.0001_ShipAI_C.ExecuteUbergraph_0001_ShipAI");

	A0001_ShipAI_C_ExecuteUbergraph_0001_ShipAI_Params params;
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
