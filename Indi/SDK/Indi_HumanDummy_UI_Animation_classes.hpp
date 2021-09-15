#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_HumanDummy_UI_Animation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass HumanDummy_UI_Animation.HumanDummy_UI_Animation_C
// 0x0E68 (0x1428 - 0x05C0)
class UHumanDummy_UI_Animation_C : public UPreviewCharacterAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xE68];                                     // 0x05C0(0x0E68) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HumanDummy_UI_Animation.HumanDummy_UI_Animation_C");
		return ptr;
	}


	void STATIC_AnimNotify_EnableLeftHandIK();
	void STATIC_AnimNotify_DisableLeftHandIK();
	void STATIC_ExecuteUbergraph_HumanDummy_UI_Animation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
