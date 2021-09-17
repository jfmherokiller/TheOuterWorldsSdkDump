// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ex_0022_LP_Ship_SCR_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ex_0022_LP_Ship_SCR.Ex_0022_LP_Ship_SCR_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEx_0022_LP_Ship_SCR_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ex_0022_LP_Ship_SCR.Ex_0022_LP_Ship_SCR_C.ReceiveBeginPlay");

	AEx_0022_LP_Ship_SCR_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ex_0022_LP_Ship_SCR.Ex_0022_LP_Ship_SCR_C.ExecuteUbergraph_Ex_0022_LP_Ship_SCR
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEx_0022_LP_Ship_SCR_C::STATIC_ExecuteUbergraph_Ex_0022_LP_Ship_SCR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ex_0022_LP_Ship_SCR.Ex_0022_LP_Ship_SCR_C.ExecuteUbergraph_Ex_0022_LP_Ship_SCR");

	AEx_0022_LP_Ship_SCR_C_ExecuteUbergraph_Ex_0022_LP_Ship_SCR_Params params;
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
