#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_LegCripple_PostProcess_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_LegCripple_PostProcess.CE_LegCripple_PostProcess_C
// 0x0000 (0x0208 - 0x0208)
class UCE_LegCripple_PostProcess_C : public UPostProcessStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_LegCripple_PostProcess.CE_LegCripple_PostProcess_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
