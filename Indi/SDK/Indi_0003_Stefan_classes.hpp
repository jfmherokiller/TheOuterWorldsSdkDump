#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0003_Stefan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0003_Stefan.0003_Stefan_C
// 0x0010 (0x1130 - 0x1120)
class A0003_Stefan_C : public ATownie_Resident_Male_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0003_Stefan.0003_Stefan_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
