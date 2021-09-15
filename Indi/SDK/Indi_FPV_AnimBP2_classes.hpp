#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FPV_AnimBP2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_AnimBP2.FPV_AnimBP2_C
// 0x52DA (0x597A - 0x06A0)
class UFPV_AnimBP2_C : public UFPVAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x52DA];                                    // 0x06A0(0x52DA) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_AnimBP2.FPV_AnimBP2_C");
		return ptr;
	}


	void STATIC_IsPlayingMontageOnDeath(bool* Result);
	void STATIC_IsPlayingMontageOnFullyBody(bool* Result);
	void STATIC_UpdateWeaponAnimations();
	void STATIC_UpdateVariables(float Delta);
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_744D66AD4264B2B3A2D923A82A5CC216();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_011FBCB9470888D366327097D2C4622F();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_EB0D7049426D41B2D8C815B69BF930D9();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_6FEE0C0E4DCC01A75FE539ADF7E2A543();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_475B389544A2AE58A9C9C0BB7B43661F();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_438867824E92E6A6126A1C999B7E6622();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_DB3802D942E00737D748CAAAE07D1BC7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_3F9D194F4DA0ECDAF2E13EA148863A25();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_0D7D5146408A922B06762DBB9AAC008A();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_5A48FE094EB2D486EB747BBBA5D0BEB2();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_D6A48A63436A54FF31E53BB2D5C1C100();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_BA43C67746C048D61862349365F4DF26();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_BlendListByBool_E257E04645621D0B5AA855BB140E4EAC();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_8D99D3404442856569F87FAC93FF519F();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_RotationOffsetBlendSpace_5469D11B490CFD934EACD6ACDAC3C7C9();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_D4050A8149AACE25F4284489BEFFEE40();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_1452710C488AF2AB4C8A168208ADB031();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_A87EA53B4241AD8FB018EABA19D925BC();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_34C09A16446CAD108D2D18A4CDD4C6B2();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_8DD794D343413FC836851E8147525ED0();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_C16E017D4032063B009869A89CC97F3B();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_700F798D4CF1CE0090E113B77AC51F78();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_LayeredBoneBlend_CDDE03BF431D63B906681F9085DB2FF7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_C808514449864397697391AD712402F7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_ModifyBone_8C768CE6486F081FDDC89F870BF05669();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_02297E7A46C7333EF5B2AF83448E7DDA();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_79F906B042635C33C671639AA7359422();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_ModifyBone_92ECF0944465C24CD12526852F98C86F();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_RotationOffsetBlendSpace_970AC589472C3955744193AA9FEE4BA0();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_BlendListByBool_12BF9B7B480C92B19A4D0CA8FBDF9C90();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_A3DB140E4847E00472F7478BEF5BACB1();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_BlendListByBool_70B3E24542E3D403D11C67BC1CCF7D03();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_RotationOffsetBlendSpace_BB67755249EB784741D586915A6A2638();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_9F63D97B494933A39EB154986D74A53A();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_558B2A9043B0627DA0E543B0E6A2B300();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_FF847FC74D1FB979EDAB279968197FC3();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_CA437A75462404B364BF5BB335072D3B();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_A37382D748FA59995EFB9C9E59535F2D();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_FBE345234802265512F99DBA843CE40C();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_95F99F3845AC3F1A3EDD89AA5E70D42C();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_LayeredBoneBlend_C6D616EA433282CF9F287A8474513C2F();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_744857BB4685E5589ADCBB971D2BEA7B();
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_OnJumped();
	void STATIC_OnLanded(float FallDistance);
	void STATIC_OnStartCrouch();
	void STATIC_OnStopCrouch();
	void STATIC_OnDodged(EDodgeDirection DodgeDirection);
	void STATIC_OnBlockStart();
	void STATIC_OnBlockEnd();
	void STATIC_BlueprintUpdateAnimation(float* DeltaTimeX);
	void STATIC_OnNewWeaponAnimations(class UWeaponAnimations** NewWeaponAnimations);
	void STATIC_OnBlockHit(bool bBlockedMeleeAttack);
	void STATIC_ExecuteUbergraph_FPV_AnimBP2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
