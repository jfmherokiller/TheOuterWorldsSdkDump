#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Lab_CeilingLight4m_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lab_CeilingLight4m.BP_Lab_CeilingLight4m_C
// 0x0049 (0x03D1 - 0x0388)
class ABP_Lab_CeilingLight4m_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x49];                                      // 0x0388(0x0049) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lab_CeilingLight4m.BP_Lab_CeilingLight4m_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Lab_CeilingLight4m(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
