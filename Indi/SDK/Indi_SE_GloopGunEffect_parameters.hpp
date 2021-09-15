#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SE_GloopGunEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SE_GloopGunEffect.SE_GloopGunEffect_C.ReceiveApplyEffect
struct USE_GloopGunEffect_C_ReceiveApplyEffect_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRestoredFromSave;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SE_GloopGunEffect.SE_GloopGunEffect_C.ReceiveClearEffect
struct USE_GloopGunEffect_C_ReceiveClearEffect_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SE_GloopGunEffect.SE_GloopGunEffect_C.ExecuteUbergraph_SE_GloopGunEffect
struct USE_GloopGunEffect_C_ExecuteUbergraph_SE_GloopGunEffect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
