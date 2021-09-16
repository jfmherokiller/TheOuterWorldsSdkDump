// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InteractableFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InteractableFunctionLibrary.InteractableFunctionLibrary_C.UpdateOCLCAC
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class AActor*>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsEmpty                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractableFunctionLibrary_C::STATIC_UpdateOCLCAC(bool IsEmpty, class UObject* __WorldContext, TArray<class AActor*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractableFunctionLibrary.InteractableFunctionLibrary_C.UpdateOCLCAC");

	UInteractableFunctionLibrary_C_UpdateOCLCAC_Params params;
	params.IsEmpty = IsEmpty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function InteractableFunctionLibrary.InteractableFunctionLibrary_C.SetupCAC
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class AActor*>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UOCLComponent*           OCL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractableFunctionLibrary_C::STATIC_SetupCAC(class UOCLComponent* OCL, class UObject* __WorldContext, TArray<class AActor*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractableFunctionLibrary.InteractableFunctionLibrary_C.SetupCAC");

	UInteractableFunctionLibrary_C_SetupCAC_Params params;
	params.OCL = OCL;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function InteractableFunctionLibrary.InteractableFunctionLibrary_C.FormatWithObjectName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Format                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractableFunctionLibrary_C::STATIC_FormatWithObjectName(const struct FText& Format, class UObject* Object, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractableFunctionLibrary.InteractableFunctionLibrary_C.FormatWithObjectName");

	UInteractableFunctionLibrary_C_FormatWithObjectName_Params params;
	params.Format = Format;
	params.Object = Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractableFunctionLibrary.InteractableFunctionLibrary_C.AssignMaterialInstanceBySlotName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMeshComponent*    MeshComponentIn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   MaterialSlotNameIn             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* MaterialInstanceOut            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInteractableFunctionLibrary_C::STATIC_AssignMaterialInstanceBySlotName(class UStaticMeshComponent* MeshComponentIn, const struct FName& MaterialSlotNameIn, class UObject* __WorldContext, class UMaterialInstanceDynamic** MaterialInstanceOut, class UMaterialInstanceDynamic** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractableFunctionLibrary.InteractableFunctionLibrary_C.AssignMaterialInstanceBySlotName");

	UInteractableFunctionLibrary_C_AssignMaterialInstanceBySlotName_Params params;
	params.MeshComponentIn = MeshComponentIn;
	params.MaterialSlotNameIn = MaterialSlotNameIn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstanceOut != nullptr)
		*MaterialInstanceOut = params.MaterialInstanceOut;
	if (Out != nullptr)
		*Out = params.Out;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
