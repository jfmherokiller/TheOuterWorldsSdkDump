#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SmallBinContainer_B_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SmallBinContainer_B_BP.SmallBinContainer_B_BP_C
// 0x0000 (0x0628 - 0x0628)
class ASmallBinContainer_B_BP_C : public ASmallBinContainer_A_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SmallBinContainer_B_BP.SmallBinContainer_B_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
