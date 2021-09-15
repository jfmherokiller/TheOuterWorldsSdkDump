#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MRMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0030 - 0x0030)
class UMeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}


	void STATIC_StopReconstruction();
	void STATIC_StartReconstruction();
	void STATIC_PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void STATIC_DisconnectMRMesh();
	void STATIC_ConnectMRMesh(class UMRMeshComponent* Mesh);
};


// Class MRMesh.MRMeshComponent
// 0x0040 (0x0650 - 0x0610)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0610(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}


	bool IsConnected();
	void STATIC_ForceNavMeshUpdate();
	void STATIC_Clear();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
