#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0901_Phineas_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0901_Phineas.0901_Phineas_C
// 0x0008 (0x1128 - 0x1120)
class A0901_Phineas_C : public ABase_Townie_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0901_Phineas.0901_Phineas_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
