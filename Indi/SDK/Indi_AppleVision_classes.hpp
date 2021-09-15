#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AppleVision_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy
// 0x0050 (0x0080 - 0x0030)
class UAppleVisionDetectFacesAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy");
		return ptr;
	}


	class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* CreateProxyObjectForDetectFaces(class UTexture* SourceImage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
