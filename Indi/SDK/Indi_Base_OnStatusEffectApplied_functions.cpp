// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_OnStatusEffectApplied_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_OnStatusEffectApplied.Base_OnStatusEffectApplied_C.RunDecisionTree
// ()
// Parameters:
// class AIndianaAiCharacter**    Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAIEventInfo**           EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDecisionTreeRequestPriority   OutPriority                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UDecisionTreeRequestData*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UDecisionTreeRequestData*> UBase_OnStatusEffectApplied_C::RunDecisionTree(class AIndianaAiCharacter** Owner, struct FName* EventType, class UAIEventInfo** EventInfo, EDecisionTreeRequestPriority* OutPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_OnStatusEffectApplied.Base_OnStatusEffectApplied_C.RunDecisionTree");

	UBase_OnStatusEffectApplied_C_RunDecisionTree_Params params;
	params.Owner = Owner;
	params.EventType = EventType;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPriority != nullptr)
		*OutPriority = params.OutPriority;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
