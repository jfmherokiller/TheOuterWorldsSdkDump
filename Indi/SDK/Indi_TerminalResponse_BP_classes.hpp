#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TerminalResponse_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TerminalResponse_BP.TerminalResponse_BP_C
// 0x0020 (0x0298 - 0x0278)
class UTerminalResponse_BP_C : public UConversationResponseWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0278(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TerminalResponse_BP.TerminalResponse_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_OnResponseSkillsChanged(bool* bContainsSkillCheck);
	void STATIC_OnSetSelectableOption(bool* bSelectable);
	void STATIC_OnSetSkillCheckRequiredCompanion(bool* bSelectable);
	void STATIC_ExecuteUbergraph_TerminalResponse_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
