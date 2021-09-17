// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_HowlBuff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CE_HowlBuff.CE_HowlBuff_C.ReceiveApplyEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRestoredFromSave              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_HowlBuff_C::STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_HowlBuff.CE_HowlBuff_C.ReceiveApplyEffect");

	UCE_HowlBuff_C_ReceiveApplyEffect_Params params;
	params.Target = Target;
	params.Ratio = Ratio;
	params.bRestoredFromSave = bRestoredFromSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CE_HowlBuff.CE_HowlBuff_C.ExecuteUbergraph_CE_HowlBuff
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_HowlBuff_C::STATIC_ExecuteUbergraph_CE_HowlBuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_HowlBuff.CE_HowlBuff_C.ExecuteUbergraph_CE_HowlBuff");

	UCE_HowlBuff_C_ExecuteUbergraph_CE_HowlBuff_Params params;
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
