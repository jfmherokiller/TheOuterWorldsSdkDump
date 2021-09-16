#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Helmet_CorpRecruit_T3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Helmet_CorpRecruit_T3.Helmet_CorpRecruit_T3_C
// 0x0000 (0x02B0 - 0x02B0)
class UHelmet_CorpRecruit_T3_C : public UHelmet_CorpRecruit_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Helmet_CorpRecruit_T3.Helmet_CorpRecruit_T3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
