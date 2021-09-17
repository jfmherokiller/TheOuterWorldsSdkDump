// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EXAM_Power_Regulator_Housing_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C.GetInteraction
// (BlueprintAuthorityOnly, Net)
// Parameters:
// struct FInteractionDescription* Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInteractPayload*       Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float*                         InteractDistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInteractionType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractionType AEXAM_Power_Regulator_Housing_C::GetInteraction(struct FInteractionDescription* Description, struct FInteractPayload* Payload, float* InteractDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C.GetInteraction");

	AEXAM_Power_Regulator_Housing_C_GetInteraction_Params params;
	params.Description = Description;
	params.Payload = Payload;
	params.InteractDistance = InteractDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C.GetInteractLocString
// ()
// Parameters:
// struct FLocString              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLocString AEXAM_Power_Regulator_Housing_C::GetInteractLocString()
{
	static auto fn = UObject::FindObject<UFunction>("Function EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C.GetInteractLocString");

	AEXAM_Power_Regulator_Housing_C_GetInteractLocString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEXAM_Power_Regulator_Housing_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C.UserConstructionScript");

	AEXAM_Power_Regulator_Housing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
