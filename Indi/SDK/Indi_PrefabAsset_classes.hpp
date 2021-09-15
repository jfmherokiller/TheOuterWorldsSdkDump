#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PrefabAsset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PrefabAsset.PrefabActor
// 0x0008 (0x0390 - 0x0388)
class APrefabActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabActor");
		return ptr;
	}


	void STATIC_SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
	void STATIC_SetMobility(TEnumAsByte<EComponentMobility> InMobility);
	class UPrefabAsset* GetPrefab();
	void STATIC_DestroyPrefabActor(bool bDestroyAttachedChildren);
};


// Class PrefabAsset.PrefabAsset
// 0x00A0 (0x00D0 - 0x0030)
class UPrefabAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabAsset");
		return ptr;
	}

};


// Class PrefabAsset.PrefabComponent
// 0x0030 (0x02E0 - 0x02B0)
class UPrefabComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabComponent");
		return ptr;
	}

};


// Class PrefabAsset.PrefabToolSettings
// 0x0010 (0x0040 - 0x0030)
class UPrefabToolSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabToolSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
