#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DST_Barrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DST_Barrel.DST_Barrel_C
// 0x0058 (0x05B8 - 0x0560)
class ADST_Barrel_C : public ADestructible_Abstract_C
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0560(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DST_Barrel.DST_Barrel_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnDestructibleDestroyed_Event_1(class AActor* Instigator);
	void STATIC_ExecuteUbergraph_DST_Barrel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
