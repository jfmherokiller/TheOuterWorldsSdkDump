#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Helmet_CorpTrooper_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Helmet_CorpTrooper_Base.Helmet_CorpTrooper_Base_C
// 0x0000 (0x02B0 - 0x02B0)
class UHelmet_CorpTrooper_Base_C : public UHelmet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Helmet_CorpTrooper_Base.Helmet_CorpTrooper_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
