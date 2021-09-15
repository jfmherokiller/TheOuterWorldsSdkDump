#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerCalledShotCameraComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCalledShotCameraComponent.PlayerCalledShotCameraComponent_C
// 0x0000 (0x01F0 - 0x01F0)
class UPlayerCalledShotCameraComponent_C : public UCalledShotCameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCalledShotCameraComponent.PlayerCalledShotCameraComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
