#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Helmet_CorpTrooper_UDL_T2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Helmet_CorpTrooper_UDL_T2.Helmet_CorpTrooper_UDL_T2_C
// 0x0000 (0x02B0 - 0x02B0)
class UHelmet_CorpTrooper_UDL_T2_C : public UHelmet_CorpTrooper_T2_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Helmet_CorpTrooper_UDL_T2.Helmet_CorpTrooper_UDL_T2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif