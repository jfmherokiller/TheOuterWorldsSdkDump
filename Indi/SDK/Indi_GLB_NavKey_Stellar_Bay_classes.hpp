#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GLB_NavKey_Stellar_Bay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GLB_NavKey_Stellar_Bay.GLB_NavKey_Stellar_Bay_C
// 0x0000 (0x01D0 - 0x01D0)
class UGLB_NavKey_Stellar_Bay_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GLB_NavKey_Stellar_Bay.GLB_NavKey_Stellar_Bay_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
