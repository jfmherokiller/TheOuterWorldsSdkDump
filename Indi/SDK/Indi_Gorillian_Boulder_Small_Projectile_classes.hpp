#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_Boulder_Small_Projectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gorillian_Boulder_Small_Projectile.Gorillian_Boulder_Small_Projectile_C
// 0x0010 (0x0678 - 0x0668)
class AGorillian_Boulder_Small_Projectile_C : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0668(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gorillian_Boulder_Small_Projectile.Gorillian_Boulder_Small_Projectile_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Gorillian_Boulder_Small_Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
