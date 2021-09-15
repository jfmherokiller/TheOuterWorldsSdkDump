// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompassEntry_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompassEntry_BP.CompassEntry_BP_C.SetDistanceValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompassEntry_BP_C::STATIC_SetDistanceValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassEntry_BP.CompassEntry_BP_C.SetDistanceValue");

	UCompassEntry_BP_C_SetDistanceValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassEntry_BP.CompassEntry_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompassEntry_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassEntry_BP.CompassEntry_BP_C.Construct");

	UCompassEntry_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassEntry_BP.CompassEntry_BP_C.InitProperties
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FEntryData*             EntryData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCompassEntry_BP_C::STATIC_InitProperties(struct FEntryData* EntryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassEntry_BP.CompassEntry_BP_C.InitProperties");

	UCompassEntry_BP_C_InitProperties_Params params;
	params.EntryData = EntryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassEntry_BP.CompassEntry_BP_C.ExecuteUbergraph_CompassEntry_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompassEntry_BP_C::STATIC_ExecuteUbergraph_CompassEntry_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassEntry_BP.CompassEntry_BP_C.ExecuteUbergraph_CompassEntry_BP");

	UCompassEntry_BP_C_ExecuteUbergraph_CompassEntry_BP_Params params;
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
