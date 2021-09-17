#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_ITM_04_Clarence_Eye_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XFH_ITM_04_Clarence_Eye.XFH_ITM_04_Clarence_Eye_C
// 0x0000 (0x01D0 - 0x01D0)
class UXFH_ITM_04_Clarence_Eye_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XFH_ITM_04_Clarence_Eye.XFH_ITM_04_Clarence_Eye_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
