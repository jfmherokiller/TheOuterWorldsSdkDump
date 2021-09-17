#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TEMP_Intercom_A_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TEMP_Intercom_A_BP.TEMP_Intercom_A_BP_C
// 0x0017 (0x0680 - 0x0669)
class ATEMP_Intercom_A_BP_C : public AIntercom_BP_C
{
public:
	unsigned char                                      UnknownData00[0x17];                                      // 0x0669(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TEMP_Intercom_A_BP.TEMP_Intercom_A_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_TEMP_Intercom_A_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
