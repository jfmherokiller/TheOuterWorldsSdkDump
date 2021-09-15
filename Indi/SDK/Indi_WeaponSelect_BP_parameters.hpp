#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WeaponSelect_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponSelect_BP.WeaponSelect_BP_C.SetBackgroundVisibility
struct UWeaponSelect_BP_C_SetBackgroundVisibility_Params
{
	TArray<class UWeaponRadialBackgroundSection_BP_C*> Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.UpdateBackgroundVisibility
struct UWeaponSelect_BP_C_UpdateBackgroundVisibility_Params
{
	TArray<class UWeaponRadialBackgroundSection_BP_C*> TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexToTest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.GetBackgroundSection
struct UWeaponSelect_BP_C_GetBackgroundSection_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWeaponRadialBackgroundSection_BP_C*         AsHUDRadial_Section_BP;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.OnIntro
struct UWeaponSelect_BP_C_OnIntro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.Construct
struct UWeaponSelect_BP_C_Construct_Params
{
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.Tick
struct UWeaponSelect_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.OnSetWeaponEquippedDelegate_Event_1
struct UWeaponSelect_BP_C_OnSetWeaponEquippedDelegate_Event_1_Params
{
	int                                                WeaponIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.OnSetAmmoEquippedDelegate_Event_1
struct UWeaponSelect_BP_C_OnSetAmmoEquippedDelegate_Event_1_Params
{
	bool                                               bEquipped;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.OnSectionSelected
struct UWeaponSelect_BP_C_OnSectionSelected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.BndEvt__Radial_K2Node_ComponentBoundEvent_1_SectionSelectedSignature__DelegateSignature
struct UWeaponSelect_BP_C_BndEvt__Radial_K2Node_ComponentBoundEvent_1_SectionSelectedSignature__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSelect_BP.WeaponSelect_BP_C.ExecuteUbergraph_WeaponSelect_BP
struct UWeaponSelect_BP_C_ExecuteUbergraph_WeaponSelect_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
