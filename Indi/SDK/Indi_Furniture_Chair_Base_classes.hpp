#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Furniture_Chair_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Furniture_Chair_Base.Furniture_Chair_Base_C
// 0x0000 (0x0398 - 0x0398)
class AFurniture_Chair_Base_C : public AFurnitureActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Furniture_Chair_Base.Furniture_Chair_Base_C");
		return ptr;
	}


	bool CanInteract(class AIndianaCharacter* Initiator, const struct FInteractPayload& Payload);
	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
