// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Furniture_Chair_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Furniture_Chair_Base.Furniture_Chair_Base_C.CanInteract
// ()
// Parameters:
// class AIndianaCharacter*       Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractPayload        Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFurniture_Chair_Base_C::CanInteract(class AIndianaCharacter* Initiator, const struct FInteractPayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_Chair_Base.Furniture_Chair_Base_C.CanInteract");

	AFurniture_Chair_Base_C_CanInteract_Params params;
	params.Initiator = Initiator;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Furniture_Chair_Base.Furniture_Chair_Base_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AFurniture_Chair_Base_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_Chair_Base.Furniture_Chair_Base_C.UserConstructionScript");

	AFurniture_Chair_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
