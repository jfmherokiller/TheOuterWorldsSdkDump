#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemDegradationEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemDegradationEntry_BP.ItemDegradationEntry_BP_C
// 0x0028 (0x02F0 - 0x02C8)
class UItemDegradationEntry_BP_C : public UItemDegradationEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemDegradationEntry_BP.ItemDegradationEntry_BP_C");
		return ptr;
	}


	void STATIC_PlayIntroDamagedAnim();
	void STATIC_PlaySevereDamageAnim();
	void STATIC_KillAllAnims();
	void STATIC_ExecuteUbergraph_ItemDegradationEntry_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
