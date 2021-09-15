#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CauseDamageReticle_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CauseDamageReticle_BP.CauseDamageReticle_BP_C
// 0x0020 (0x0300 - 0x02E0)
class UCauseDamageReticle_BP_C : public UCauseDamageReticleWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CauseDamageReticle_BP.CauseDamageReticle_BP_C");
		return ptr;
	}


	void STATIC_ShowHitAnim();
	void STATIC_ShowWeakAnim();
	void STATIC_ShowKillAnim();
	void STATIC_ExecuteUbergraph_CauseDamageReticle_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
