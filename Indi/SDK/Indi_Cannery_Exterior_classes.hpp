#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Cannery_Exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cannery_Exterior.Cannery_Exterior_C
// 0x0018 (0x03A8 - 0x0390)
class ACannery_Exterior_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0390(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cannery_Exterior.Cannery_Exterior_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_StopSignsOnLowPower();
	void STATIC_ExecuteUbergraph_Cannery_Exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
