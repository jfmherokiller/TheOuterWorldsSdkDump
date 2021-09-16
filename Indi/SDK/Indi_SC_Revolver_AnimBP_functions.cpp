// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_Revolver_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SC_Revolver_AnimBP.SC_Revolver_AnimBP_C.ExecuteUbergraph_SC_Revolver_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USC_Revolver_AnimBP_C::STATIC_ExecuteUbergraph_SC_Revolver_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SC_Revolver_AnimBP.SC_Revolver_AnimBP_C.ExecuteUbergraph_SC_Revolver_AnimBP");

	USC_Revolver_AnimBP_C_ExecuteUbergraph_SC_Revolver_AnimBP_Params params;
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
