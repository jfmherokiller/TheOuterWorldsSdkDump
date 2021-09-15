// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_LightPistol_Weapon_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void USC_LightPistol_Weapon_Base_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.UserConstructionScript");

	USC_LightPistol_Weapon_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void USC_LightPistol_Weapon_Base_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveBeginPlay");

	USC_LightPistol_Weapon_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveActorBeginOverlap
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USC_LightPistol_Weapon_Base_C::STATIC_ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveActorBeginOverlap");

	USC_LightPistol_Weapon_Base_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USC_LightPistol_Weapon_Base_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveTick");

	USC_LightPistol_Weapon_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ExecuteUbergraph_SC_LightPistol_Weapon_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USC_LightPistol_Weapon_Base_C::STATIC_ExecuteUbergraph_SC_LightPistol_Weapon_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ExecuteUbergraph_SC_LightPistol_Weapon_Base");

	USC_LightPistol_Weapon_Base_C_ExecuteUbergraph_SC_LightPistol_Weapon_Base_Params params;
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
