#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_04_IB_Compound_Sentries_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 04_IB_Compound_Sentries.04_IB_Compound_Sentries_C
// 0x0000 (0x0238 - 0x0238)
class U04_IB_Compound_Sentries_C : public UTeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 04_IB_Compound_Sentries.04_IB_Compound_Sentries_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
