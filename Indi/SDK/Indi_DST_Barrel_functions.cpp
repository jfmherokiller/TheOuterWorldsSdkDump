// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DST_Barrel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DST_Barrel.DST_Barrel_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADST_Barrel_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DST_Barrel.DST_Barrel_C.UserConstructionScript");

	ADST_Barrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DST_Barrel.DST_Barrel_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADST_Barrel_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DST_Barrel.DST_Barrel_C.ReceiveBeginPlay");

	ADST_Barrel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DST_Barrel.DST_Barrel_C.OnDestructibleDestroyed_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADST_Barrel_C::STATIC_OnDestructibleDestroyed_Event_1(class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DST_Barrel.DST_Barrel_C.OnDestructibleDestroyed_Event_1");

	ADST_Barrel_C_OnDestructibleDestroyed_Event_1_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DST_Barrel.DST_Barrel_C.ExecuteUbergraph_DST_Barrel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADST_Barrel_C::STATIC_ExecuteUbergraph_DST_Barrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DST_Barrel.DST_Barrel_C.ExecuteUbergraph_DST_Barrel");

	ADST_Barrel_C_ExecuteUbergraph_DST_Barrel_Params params;
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
