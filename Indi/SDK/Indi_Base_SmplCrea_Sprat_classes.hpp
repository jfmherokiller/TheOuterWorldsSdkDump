#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_SmplCrea_Sprat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_SmplCrea_Sprat.Base_SmplCrea_Sprat_C
// 0x0008 (0x1108 - 0x1100)
class ABase_SmplCrea_Sprat_C : public ABase_Ai_Character_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_SmplCrea_Sprat.Base_SmplCrea_Sprat_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
