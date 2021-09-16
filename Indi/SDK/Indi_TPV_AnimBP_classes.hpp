#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TPV_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_AnimBP.TPV_AnimBP_C
// 0xF6E8 (0x10A68 - 0x1380)
class UTPV_AnimBP_C : public UBipedAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xF6E8];                                    // 0x1380(0xF6E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_AnimBP.TPV_AnimBP_C");
		return ptr;
	}


	void STATIC_UpdateRunAnims();
	void STATIC_DetermineIsCompanion();
	void STATIC_UpdateAnimationParams();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_939EE45941EFE602CC0802AD03EA7B1E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_D4B745F64CD60BDF7024B5BF2BB098A1();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_5C05219E40DC57EDFD63E9B7DC7627C1();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_8815402E44818C05E7681DAEC1C20CE8();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_E303F7BF414714B3E7EBB2A723787EA0();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_49F63C0746D73044FD82A09363BFD147();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_F70B1E614600BC447DCE04AB9FD87FD7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_304C835C4E7A57F75F8C388365A31CD7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_62D2CE1C463BF61507E0ED89B444BDE7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_214346484B3A36999BA02A9B451B8C2E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_B67A6EAF4686EF1959055EBADE46BC8D();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_6957E8B54858B4C4CD198BA065F312A0();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_59684B7C42E5985211FB37B5B2134B5B();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_00C0533F4ABCABB5D5A8D9B4FC39F441();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_8FEDEDFB4B330E58AAF01AA98837A141();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_6FEBA916472971A4656BAA92CAAF9B53();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_5F74C27A4BD1D7B790F0DEBC0B9E2CD4();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_C2F849024B28AEDFF4D30B8A1E497AE8();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_C2E9D85B47FA026547869B855DD08896();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_4CB8C8A84FE7683F8A119AAB36F287AC();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_BED69BA94BE38B3B5184E6B648737434();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_91BAF07147C6BEE5BF1FD78CDE6245B0();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_TransitionResult_DBC148CD49E60E71E633F788B472A925();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_BlendListByBool_8C80ACC34717E9A34932CD951C50D702();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_AnimBP_AnimGraphNode_BlendListByBool_2913B9454A186EC9D73D759E12A0C594();
	void STATIC_BlueprintUpdateAnimation(float* DeltaTimeX);
	void STATIC_AnimNotify_RandomIdle();
	void STATIC_AnimNotify_ResetRandomIdle();
	void STATIC_AnimNotify_EnableLeftHandIK();
	void STATIC_AnimNotify_DisableLeftHandIK();
	void STATIC_OnNewLocomotionAnimationSet(class ULocomotionAnimationSet** NewLocomtionAnimationSet);
	void STATIC_SetPersonality(class UTPVPersonalitySet** Personality);
	void STATIC_OnRebuildAnimationSetData();
	void STATIC_AnimNotify_CombatReadyTransition();
	void STATIC_AnimNotify_CombatIdleStateTransition();
	void STATIC_AnimNotify_RandomIdleEnd();
	void STATIC_OnNewWeaponAnimations(class UWeaponAnimations** NewWeaponAnimations);
	void STATIC_AnimNotify_JumpStateComplete();
	void STATIC_AnimNotify_SlamShake();
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_TPV_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
