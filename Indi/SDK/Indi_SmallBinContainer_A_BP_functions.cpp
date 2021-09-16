// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SmallBinContainer_A_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SmallBinContainer_A_BP.SmallBinContainer_A_BP_C.GetLightingConfig
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   MaterialSlot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASmallBinContainer_A_BP_C::STATIC_GetLightingConfig(class UStaticMeshComponent** Mesh, struct FName* MaterialSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallBinContainer_A_BP.SmallBinContainer_A_BP_C.GetLightingConfig");

	ASmallBinContainer_A_BP_C_GetLightingConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (MaterialSlot != nullptr)
		*MaterialSlot = params.MaterialSlot;
}


// Function SmallBinContainer_A_BP.SmallBinContainer_A_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASmallBinContainer_A_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallBinContainer_A_BP.SmallBinContainer_A_BP_C.UserConstructionScript");

	ASmallBinContainer_A_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
