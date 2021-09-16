// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_OCL_CAC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OCL_CAC.OCL_CAC_C.Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsEmpty                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOCL_CAC_C::STATIC_Update(bool IsEmpty, bool* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_CAC.OCL_CAC_C.Update");

	UOCL_CAC_C_Update_Params params;
	params.IsEmpty = IsEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unused != nullptr)
		*Unused = params.Unused;
}


// Function OCL_CAC.OCL_CAC_C.Setup
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UOCLComponent*           OCL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Unused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOCL_CAC_C::STATIC_Setup(class UOCLComponent* OCL, bool* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_CAC.OCL_CAC_C.Setup");

	UOCL_CAC_C_Setup_Params params;
	params.OCL = OCL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unused != nullptr)
		*Unused = params.Unused;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
