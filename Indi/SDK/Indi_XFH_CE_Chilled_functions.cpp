// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_CE_Chilled_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function XFH_CE_Chilled.XFH_CE_Chilled_C.ReceiveClearEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXFH_CE_Chilled_C::STATIC_ReceiveClearEffect(class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function XFH_CE_Chilled.XFH_CE_Chilled_C.ReceiveClearEffect");

	UXFH_CE_Chilled_C_ReceiveClearEffect_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XFH_CE_Chilled.XFH_CE_Chilled_C.ReceiveApplyEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRestoredFromSave              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXFH_CE_Chilled_C::STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function XFH_CE_Chilled.XFH_CE_Chilled_C.ReceiveApplyEffect");

	UXFH_CE_Chilled_C_ReceiveApplyEffect_Params params;
	params.Target = Target;
	params.Ratio = Ratio;
	params.bRestoredFromSave = bRestoredFromSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XFH_CE_Chilled.XFH_CE_Chilled_C.ExecuteUbergraph_XFH_CE_Chilled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXFH_CE_Chilled_C::STATIC_ExecuteUbergraph_XFH_CE_Chilled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XFH_CE_Chilled.XFH_CE_Chilled_C.ExecuteUbergraph_XFH_CE_Chilled");

	UXFH_CE_Chilled_C_ExecuteUbergraph_XFH_CE_Chilled_Params params;
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
