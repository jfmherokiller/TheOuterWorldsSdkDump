// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Spline_Spawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Sound_Initialize_Emitters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FName>           SFXSocketNames                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectedElement                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spline_Spawner_C::STATIC_Sound_Initialize_Emitters(int SelectedElement, TArray<struct FName>* SFXSocketNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Sound_Initialize_Emitters");

	ABP_Spline_Spawner_C_Sound_Initialize_Emitters_Params params;
	params.SelectedElement = SelectedElement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SFXSocketNames != nullptr)
		*SFXSocketNames = params.SFXSocketNames;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Sort_Socket_Names
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FName>           SocketNamesToSort              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           VFXSocketNames                 (Parm, OutParm, ZeroConstructor)
// TArray<struct FName>           SFXSocketNames                 (Parm, OutParm, ZeroConstructor)

void ABP_Spline_Spawner_C::STATIC_Sort_Socket_Names(TArray<struct FName>* SocketNamesToSort, TArray<struct FName>* VFXSocketNames, TArray<struct FName>* SFXSocketNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Sort_Socket_Names");

	ABP_Spline_Spawner_C_Sort_Socket_Names_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketNamesToSort != nullptr)
		*SocketNamesToSort = params.SocketNamesToSort;
	if (VFXSocketNames != nullptr)
		*VFXSocketNames = params.VFXSocketNames;
	if (SFXSocketNames != nullptr)
		*SFXSocketNames = params.SFXSocketNames;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Random_Mesh_Selection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SpecifyShip                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ShipSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ArrayElement                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Spline_Spawner_C::STATIC_Random_Mesh_Selection(bool SpecifyShip, int ShipSlot, int* ArrayElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Random_Mesh_Selection");

	ABP_Spline_Spawner_C_Random_Mesh_Selection_Params params;
	params.SpecifyShip = SpecifyShip;
	params.ShipSlot = ShipSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayElement != nullptr)
		*ArrayElement = params.ArrayElement;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.UserConstructionScript");

	ABP_Spline_Spawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Spline_Traverse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__FinishedFunc");

	ABP_Spline_Spawner_C_Spline_Traverse__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Spline_Traverse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__UpdateFunc");

	ABP_Spline_Spawner_C_Spline_Traverse__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__Spline_End__EventFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Spline_Traverse__Spline_End__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__Spline_End__EventFunc");

	ABP_Spline_Spawner_C_Spline_Traverse__Spline_End__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__Spline_Start__EventFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Spline_Traverse__Spline_Start__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__Spline_Start__EventFunc");

	ABP_Spline_Spawner_C_Spline_Traverse__Spline_Start__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Spline_Traverse_Mesh__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__FinishedFunc");

	ABP_Spline_Spawner_C_Spline_Traverse_Mesh__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Spline_Traverse_Mesh__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__UpdateFunc");

	ABP_Spline_Spawner_C_Spline_Traverse_Mesh__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__Spline_End__EventFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Spline_Traverse_Mesh__Spline_End__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__Spline_End__EventFunc");

	ABP_Spline_Spawner_C_Spline_Traverse_Mesh__Spline_End__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__Spline_Start__EventFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Spline_Traverse_Mesh__Spline_Start__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__Spline_Start__EventFunc");

	ABP_Spline_Spawner_C_Spline_Traverse_Mesh__Spline_Start__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Level_Spline
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Level_Spline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Level_Spline");

	ABP_Spline_Spawner_C_Level_Spline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Stop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Stop");

	ABP_Spline_Spawner_C_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Trigger
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Trigger");

	ABP_Spline_Spawner_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Spline_Spawner_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.ReceiveBeginPlay");

	ABP_Spline_Spawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Trigger_Enter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Spline_Spawner_C::STATIC_Trigger_Enter(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.Trigger_Enter");

	ABP_Spline_Spawner_C_Trigger_Enter_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spline_Spawner.BP_Spline_Spawner_C.ExecuteUbergraph_BP_Spline_Spawner
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spline_Spawner_C::STATIC_ExecuteUbergraph_BP_Spline_Spawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline_Spawner.BP_Spline_Spawner_C.ExecuteUbergraph_BP_Spline_Spawner");

	ABP_Spline_Spawner_C_ExecuteUbergraph_BP_Spline_Spawner_Params params;
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
