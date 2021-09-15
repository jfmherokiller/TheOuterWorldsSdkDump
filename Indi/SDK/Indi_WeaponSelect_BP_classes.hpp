#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WeaponSelect_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WeaponSelect_BP.WeaponSelect_BP_C
// 0x00B4 (0x04EC - 0x0438)
class UWeaponSelect_BP_C : public UWeaponSelectWidget
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x0438(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponSelect_BP.WeaponSelect_BP_C");
		return ptr;
	}


	void STATIC_SetBackgroundVisibility(int Index, bool Enabled, TArray<class UWeaponRadialBackgroundSection_BP_C*>* Array);
	void STATIC_UpdateBackgroundVisibility(TArray<class UWeaponRadialBackgroundSection_BP_C*> TargetArray, int IndexToTest);
	void STATIC_GetBackgroundSection(class UObject* Object, class UWeaponRadialBackgroundSection_BP_C** AsHUDRadial_Section_BP);
	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
	void STATIC_Construct();
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_OnSetWeaponEquippedDelegate_Event_1(int WeaponIndex);
	void STATIC_OnSetAmmoEquippedDelegate_Event_1(bool bEquipped, int AmmoIndex);
	void STATIC_OnSectionSelected(int Index);
	void STATIC_BndEvt__Radial_K2Node_ComponentBoundEvent_1_SectionSelectedSignature__DelegateSignature(int Index);
	void STATIC_ExecuteUbergraph_WeaponSelect_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
