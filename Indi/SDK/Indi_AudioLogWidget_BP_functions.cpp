// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AudioLogWidget_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AudioLogWidget_BP.AudioLogWidget_BP_C.ShowAudioLog
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentRenderOpacity           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioLogWidget_BP_C::STATIC_ShowAudioLog(bool* bShow, float* CurrentRenderOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioLogWidget_BP.AudioLogWidget_BP_C.ShowAudioLog");

	UAudioLogWidget_BP_C_ShowAudioLog_Params params;
	params.bShow = bShow;
	params.CurrentRenderOpacity = CurrentRenderOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioLogWidget_BP.AudioLogWidget_BP_C.ExecuteUbergraph_AudioLogWidget_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioLogWidget_BP_C::STATIC_ExecuteUbergraph_AudioLogWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioLogWidget_BP.AudioLogWidget_BP_C.ExecuteUbergraph_AudioLogWidget_BP");

	UAudioLogWidget_BP_C_ExecuteUbergraph_AudioLogWidget_BP_Params params;
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
