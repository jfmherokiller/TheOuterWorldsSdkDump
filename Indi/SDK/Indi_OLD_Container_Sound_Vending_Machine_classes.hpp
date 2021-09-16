#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_OLD_Container_Sound_Vending_Machine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OLD_Container_Sound_Vending_Machine.OLD_Container_Sound_Vending_Machine_C
// 0x0008 (0x01E0 - 0x01D8)
class UOLD_Container_Sound_Vending_Machine_C : public UOCLAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OLD_Container_Sound_Vending_Machine.OLD_Container_Sound_Vending_Machine_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_OLD_Container_Sound_Vending_Machine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
