#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0003_Grace_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0003_Grace.0003_Grace_C
// 0x0008 (0x1128 - 0x1120)
class A0003_Grace_C : public ATownie_Resident_Female_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0003_Grace.0003_Grace_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
