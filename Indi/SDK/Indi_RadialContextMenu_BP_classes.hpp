#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RadialContextMenu_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass RadialContextMenu_BP.RadialContextMenu_BP_C
// 0x001C (0x02FC - 0x02E0)
class URadialContextMenu_BP_C : public URadialContextMenuWidget
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x02E0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialContextMenu_BP.RadialContextMenu_BP_C");
		return ptr;
	}


	bool OnOutro(struct FScriptDelegate* AnimationCompleteCallback);
	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_RadialContextMenu_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
