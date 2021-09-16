#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WorkbenchBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorkbenchBase_BP.WorkbenchBase_BP_C
// 0x0018 (0x03B0 - 0x0398)
class AWorkbenchBase_BP_C : public AWorkbench
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0398(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorkbenchBase_BP.WorkbenchBase_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ExecuteUbergraph_WorkbenchBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
