#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Destructible_Abstract_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Destructible_Abstract.Destructible_Abstract_C
// 0x0028 (0x0560 - 0x0538)
class ADestructible_Abstract_C : public ADestructible
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0538(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Destructible_Abstract.Destructible_Abstract_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveDeployOrder();
	void STATIC_OnDestructiblePristine_Event_Base();
	void STATIC_OnDestructibleDamaged_Event_Base(class AActor* Instigator);
	void STATIC_OnDestructibleDestroyed_Event_Base(class AActor* Instigator);
	void STATIC_ExecuteUbergraph_Destructible_Abstract(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
