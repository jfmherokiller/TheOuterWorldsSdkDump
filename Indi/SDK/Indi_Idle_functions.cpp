// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Idle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Idle.Idle_C.RunDecisionTree
// ()
// Parameters:
// class AIndianaAiCharacter**    Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAIEventInfo**           EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDecisionTreeRequestPriority   OutPriority                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UDecisionTreeRequestData*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UDecisionTreeRequestData*> UIdle_C::RunDecisionTree(class AIndianaAiCharacter** Owner, struct FName* EventType, class UAIEventInfo** EventInfo, EDecisionTreeRequestPriority* OutPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Idle.Idle_C.RunDecisionTree");

	UIdle_C_RunDecisionTree_Params params;
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
