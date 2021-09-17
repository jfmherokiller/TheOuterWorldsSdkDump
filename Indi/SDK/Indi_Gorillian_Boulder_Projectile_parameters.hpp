#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_Boulder_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gorillian_Boulder_Projectile.Gorillian_Boulder_Projectile_C.UserConstructionScript
struct AGorillian_Boulder_Projectile_C_UserConstructionScript_Params
{
};

// Function Gorillian_Boulder_Projectile.Gorillian_Boulder_Projectile_C.ReceiveHit
struct AGorillian_Boulder_Projectile_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Gorillian_Boulder_Projectile.Gorillian_Boulder_Projectile_C.ReceiveBeginPlay
struct AGorillian_Boulder_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function Gorillian_Boulder_Projectile.Gorillian_Boulder_Projectile_C.ExecuteUbergraph_Gorillian_Boulder_Projectile
struct AGorillian_Boulder_Projectile_C_ExecuteUbergraph_Gorillian_Boulder_Projectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
