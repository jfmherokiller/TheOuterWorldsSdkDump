// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerHudEvents_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerHudEvents.PlayerHudEvents_C.SetObjective
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ObjectiveName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerHudEvents_C::STATIC_SetObjective(class AActor* Objective, const class FString& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudEvents.PlayerHudEvents_C.SetObjective");

	UPlayerHudEvents_C_SetObjective_Params params;
	params.Objective = Objective;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
