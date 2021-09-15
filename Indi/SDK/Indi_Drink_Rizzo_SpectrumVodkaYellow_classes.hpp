#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Drink_Rizzo_SpectrumVodkaYellow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Drink_Rizzo_SpectrumVodkaYellow.Drink_Rizzo_SpectrumVodkaYellow_C
// 0x0008 (0x0238 - 0x0230)
class UDrink_Rizzo_SpectrumVodkaYellow_C : public UConsumableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Drink_Rizzo_SpectrumVodkaYellow.Drink_Rizzo_SpectrumVodkaYellow_C");
		return ptr;
	}


	void STATIC_SetObjective(class AActor* Objective, const class FString& ObjectiveName);
	void STATIC_ExecuteUbergraph_Drink_Rizzo_SpectrumVodkaYellow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
