#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeshDescription_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MeshDescription.MeshDescription
// 0x0000 (0x0030 - 0x0030)
class UMeshDescription : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshDescription.MeshDescription");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
