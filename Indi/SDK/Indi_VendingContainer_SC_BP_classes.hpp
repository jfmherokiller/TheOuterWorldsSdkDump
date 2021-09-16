#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VendingContainer_SC_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VendingContainer_SC_BP.VendingContainer_SC_BP_C
// 0x0009 (0x07C9 - 0x07C0)
class AVendingContainer_SC_BP_C : public AVendingContainer_BP_C
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x07C0(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VendingContainer_SC_BP.VendingContainer_SC_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
