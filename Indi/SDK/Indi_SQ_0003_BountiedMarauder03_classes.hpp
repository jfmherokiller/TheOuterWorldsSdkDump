#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SQ_0003_BountiedMarauder03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SQ_0003_BountiedMarauder03.SQ_0003_BountiedMarauder03_C
// 0x0008 (0x1128 - 0x1120)
class ASQ_0003_BountiedMarauder03_C : public ATownie_Janitor_Male_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SQ_0003_BountiedMarauder03.SQ_0003_BountiedMarauder03_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
