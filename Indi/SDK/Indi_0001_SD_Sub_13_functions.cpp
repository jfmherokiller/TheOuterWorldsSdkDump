// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_SD_Sub_13_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 0001_SD_Sub_13.0001_SD_Sub_C.ShipPowerOn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0001_SD_Sub_C::STATIC_ShipPowerOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_SD_Sub_13.0001_SD_Sub_C.ShipPowerOn");

	A0001_SD_Sub_C_ShipPowerOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_SD_Sub_13.0001_SD_Sub_C.SFX_Print_Captain_Cartridge
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0001_SD_Sub_C::STATIC_SFX_Print_Captain_Cartridge()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_SD_Sub_13.0001_SD_Sub_C.SFX_Print_Captain_Cartridge");

	A0001_SD_Sub_C_SFX_Print_Captain_Cartridge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_SD_Sub_13.0001_SD_Sub_C.ExecuteUbergraph_0001_SD_Sub_13
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0001_SD_Sub_C::STATIC_ExecuteUbergraph_0001_SD_Sub_13(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_SD_Sub_13.0001_SD_Sub_C.ExecuteUbergraph_0001_SD_Sub_13");

	A0001_SD_Sub_C_ExecuteUbergraph_0001_SD_Sub_13_Params params;
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
