#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hazard_Abstract_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Hazard_Abstract.Hazard_Abstract_C
// 0x00A8 (0x04F8 - 0x0450)
class AHazard_Abstract_C : public AHazard
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0450(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Abstract.Hazard_Abstract_C");
		return ptr;
	}


	void STATIC_Setup_VFX_to_Volume();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnHazardDisabled_Event_Base();
	void STATIC_OnHazardEnabled_Event_Base();
	void STATIC_OnHazardEnabling_Event_Base();
	void STATIC_OnHazardDisabling_Event_Base();
	void STATIC_ExecuteUbergraph_Hazard_Abstract(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
