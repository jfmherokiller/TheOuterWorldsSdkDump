#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BigWallMachine_E_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BigWallMachine_E.BigWallMachine_E_C
// 0x0064 (0x03EC - 0x0388)
class ABigWallMachine_E_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x0388(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BigWallMachine_E.BigWallMachine_E_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ExecuteUbergraph_BigWallMachine_E(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
