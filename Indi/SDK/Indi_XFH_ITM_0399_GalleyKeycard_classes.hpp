#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_ITM_0399_GalleyKeycard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XFH_ITM_0399_GalleyKeycard.XFH_ITM_0399_GalleyKeycard_C
// 0x0000 (0x01D0 - 0x01D0)
class UXFH_ITM_0399_GalleyKeycard_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XFH_ITM_0399_GalleyKeycard.XFH_ITM_0399_GalleyKeycard_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
