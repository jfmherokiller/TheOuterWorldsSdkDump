#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RespecMachine_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RespecMachine_BP.RespecMachine_BP_C
// 0x0008 (0x03A0 - 0x0398)
class ARespecMachine_BP_C : public ARespecMachine
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RespecMachine_BP.RespecMachine_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
