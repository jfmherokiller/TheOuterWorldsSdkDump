#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Furniture_Chair_OfficeChairs_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Furniture_Chair_OfficeChairs_03.Furniture_Chair_OfficeChairs_03_C
// 0x0008 (0x03A0 - 0x0398)
class AFurniture_Chair_OfficeChairs_03_C : public AFurniture_Chair_Base_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Furniture_Chair_OfficeChairs_03.Furniture_Chair_OfficeChairs_03_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
