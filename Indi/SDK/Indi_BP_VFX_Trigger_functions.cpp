// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_VFX_Trigger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Update_Beam_Endpoints
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UParticleSystemComponent* PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_VFX_Trigger_C::STATIC_Update_Beam_Endpoints(class UParticleSystemComponent* PS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Update_Beam_Endpoints");

	ABP_VFX_Trigger_C_Update_Beam_Endpoints_Params params;
	params.PS = PS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Bind_Events
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UParticleSystemComponent* PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<TEnumAsByte<EN_Particle_Event_Bindings>> Bindings                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_VFX_Trigger_C::STATIC_Bind_Events(class UParticleSystemComponent* PS, TArray<TEnumAsByte<EN_Particle_Event_Bindings>>* Bindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Bind_Events");

	ABP_VFX_Trigger_C_Bind_Events_Params params;
	params.PS = PS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bindings != nullptr)
		*Bindings = params.Bindings;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_VFX_Trigger_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.UserConstructionScript");

	ABP_VFX_Trigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Particle_Collide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VFX_Trigger_C::STATIC_Particle_Collide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Particle_Collide");

	ABP_VFX_Trigger_C_Particle_Collide_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Particle_Burst
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VFX_Trigger_C::STATIC_Particle_Burst(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Particle_Burst");

	ABP_VFX_Trigger_C_Particle_Burst_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Particle_Death
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VFX_Trigger_C::STATIC_Particle_Death(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Particle_Death");

	ABP_VFX_Trigger_C_Particle_Death_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.ParticleSpawn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VFX_Trigger_C::STATIC_ParticleSpawn(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.ParticleSpawn");

	ABP_VFX_Trigger_C_ParticleSpawn_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_VFX_Trigger_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.ReceiveBeginPlay");

	ABP_VFX_Trigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Trigger
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_VFX_Trigger_C::STATIC_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Trigger");

	ABP_VFX_Trigger_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Update_Endpoints
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_VFX_Trigger_C::STATIC_Update_Endpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Update_Endpoints");

	ABP_VFX_Trigger_C_Update_Endpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Store_Endpoint_Locations
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_VFX_Trigger_C::STATIC_Store_Endpoint_Locations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Store_Endpoint_Locations");

	ABP_VFX_Trigger_C_Store_Endpoint_Locations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Restore_Endpoint_Loactions
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_VFX_Trigger_C::STATIC_Restore_Endpoint_Loactions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Restore_Endpoint_Loactions");

	ABP_VFX_Trigger_C_Restore_Endpoint_Loactions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Deactivate
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_VFX_Trigger_C::STATIC_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.Deactivate");

	ABP_VFX_Trigger_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.SpawnAK
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_VFX_Trigger_C::STATIC_SpawnAK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.SpawnAK");

	ABP_VFX_Trigger_C_SpawnAK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VFX_Trigger.BP_VFX_Trigger_C.ExecuteUbergraph_BP_VFX_Trigger
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VFX_Trigger_C::STATIC_ExecuteUbergraph_BP_VFX_Trigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VFX_Trigger.BP_VFX_Trigger_C.ExecuteUbergraph_BP_VFX_Trigger");

	ABP_VFX_Trigger_C_ExecuteUbergraph_BP_VFX_Trigger_Params params;
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
