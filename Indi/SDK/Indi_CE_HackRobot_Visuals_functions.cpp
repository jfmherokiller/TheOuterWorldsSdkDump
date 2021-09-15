// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_HackRobot_Visuals_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveClearEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_HackRobot_Visuals_C::STATIC_ReceiveClearEffect(class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveClearEffect");

	UCE_HackRobot_Visuals_C_ReceiveClearEffect_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveApplyEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRestoredFromSave              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_HackRobot_Visuals_C::STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveApplyEffect");

	UCE_HackRobot_Visuals_C_ReceiveApplyEffect_Params params;
	params.Target = Target;
	params.Ratio = Ratio;
	params.bRestoredFromSave = bRestoredFromSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ExecuteUbergraph_CE_HackRobot_Visuals
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_HackRobot_Visuals_C::STATIC_ExecuteUbergraph_CE_HackRobot_Visuals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ExecuteUbergraph_CE_HackRobot_Visuals");

	UCE_HackRobot_Visuals_C_ExecuteUbergraph_CE_HackRobot_Visuals_Params params;
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
