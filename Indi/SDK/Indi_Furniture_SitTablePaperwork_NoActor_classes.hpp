#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Furniture_SitTablePaperwork_NoActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Furniture_SitTablePaperwork_NoActor.Furniture_SitTablePaperwork_NoActor_C
// 0x0010 (0x03A8 - 0x0398)
class AFurniture_SitTablePaperwork_NoActor_C : public AFurniture_SitTable_Base_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Furniture_SitTablePaperwork_NoActor.Furniture_SitTablePaperwork_NoActor_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
