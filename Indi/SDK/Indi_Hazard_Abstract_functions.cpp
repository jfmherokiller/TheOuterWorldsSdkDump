// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hazard_Abstract_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hazard_Abstract.Hazard_Abstract_C.Setup VFX to Volume
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Abstract_C::STATIC_Setup_VFX_to_Volume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Abstract.Hazard_Abstract_C.Setup VFX to Volume");

	AHazard_Abstract_C_Setup_VFX_to_Volume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Abstract.Hazard_Abstract_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Abstract_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Abstract.Hazard_Abstract_C.UserConstructionScript");

	AHazard_Abstract_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Abstract.Hazard_Abstract_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Abstract_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Abstract.Hazard_Abstract_C.ReceiveBeginPlay");

	AHazard_Abstract_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Abstract.Hazard_Abstract_C.OnHazardDisabled_Event_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Abstract_C::STATIC_OnHazardDisabled_Event_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Abstract.Hazard_Abstract_C.OnHazardDisabled_Event_Base");

	AHazard_Abstract_C_OnHazardDisabled_Event_Base_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Abstract.Hazard_Abstract_C.OnHazardEnabled_Event_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Abstract_C::STATIC_OnHazardEnabled_Event_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Abstract.Hazard_Abstract_C.OnHazardEnabled_Event_Base");

	AHazard_Abstract_C_OnHazardEnabled_Event_Base_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Abstract.Hazard_Abstract_C.OnHazardEnabling_Event_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Abstract_C::STATIC_OnHazardEnabling_Event_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Abstract.Hazard_Abstract_C.OnHazardEnabling_Event_Base");

	AHazard_Abstract_C_OnHazardEnabling_Event_Base_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Abstract.Hazard_Abstract_C.OnHazardDisabling_Event_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Abstract_C::STATIC_OnHazardDisabling_Event_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Abstract.Hazard_Abstract_C.OnHazardDisabling_Event_Base");

	AHazard_Abstract_C_OnHazardDisabling_Event_Base_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Abstract.Hazard_Abstract_C.ExecuteUbergraph_Hazard_Abstract
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Abstract_C::STATIC_ExecuteUbergraph_Hazard_Abstract(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Abstract.Hazard_Abstract_C.ExecuteUbergraph_Hazard_Abstract");

	AHazard_Abstract_C_ExecuteUbergraph_Hazard_Abstract_Params params;
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
