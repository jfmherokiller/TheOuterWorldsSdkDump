// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CommonOCLLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CommonOCLLibrary.CommonOCLLibrary_C.OCL_Library_ToggleOpenCloseState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UOCLComponent*           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Lock                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Seal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreLockStatus               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreStartEvent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreEndEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsOpening                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsClosing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonOCLLibrary_C::STATIC_OCL_Library_ToggleOpenCloseState(class UOCLComponent* Target, class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool InstantAnimation, class UObject* __WorldContext, bool* IsOpen, bool* IsOpening, bool* IsClosed, bool* IsClosing)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonOCLLibrary.CommonOCLLibrary_C.OCL_Library_ToggleOpenCloseState");

	UCommonOCLLibrary_C_OCL_Library_ToggleOpenCloseState_Params params;
	params.Target = Target;
	params.Initiator = Initiator;
	params.Force = Force;
	params.Lock = Lock;
	params.Seal = Seal;
	params.IgnoreLockStatus = IgnoreLockStatus;
	params.IgnoreStartEvent = IgnoreStartEvent;
	params.IgnoreEndEvent = IgnoreEndEvent;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
	if (IsOpening != nullptr)
		*IsOpening = params.IsOpening;
	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
	if (IsClosing != nullptr)
		*IsClosing = params.IsClosing;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
