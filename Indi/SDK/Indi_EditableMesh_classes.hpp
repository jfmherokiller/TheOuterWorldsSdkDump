#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EditableMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EditableMesh.EditableMesh
// 0x05F8 (0x0628 - 0x0030)
class UEditableMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5F8];                                     // 0x0030(0x05F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMesh");
		return ptr;
	}


	void STATIC_WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID);
	void STATIC_TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID);
	void STATIC_TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID);
	void STATIC_TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons);
	void STATIC_TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs);
	void STATIC_StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);
	void STATIC_SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void STATIC_SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs);
	void STATIC_SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness);
	void STATIC_SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices);
	void STATIC_SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances);
	void STATIC_SetTextureCoordinateCount(int NumTexCoords);
	void STATIC_SetSubdivisionCount(int NewSubdivisionCount);
	void STATIC_SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons);
	void STATIC_SetEdgesVertices(TArray<struct FVerticesForEdge> VerticesForEdges);
	void STATIC_SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge);
	void STATIC_SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard);
	void STATIC_SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness);
	void STATIC_SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges);
	void STATIC_SetAllowUndo(bool bInAllowUndo);
	void STATIC_SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);
	void STATIC_SetAllowCompact(bool bInAllowCompact);
	void STATIC_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons);
	void STATIC_SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane> Planes, TArray<struct FPolygonID>* OutPolygons);
	class UEditableMesh* RevertInstance();
	void STATIC_Revert();
	void STATIC_RemovePolygonPerimeterVertices(const struct FPolygonID& PolygonID, int FirstVertexNumberToRemove, int NumVerticesToRemove, bool bDeleteOrphanedVertexInstances);
	void STATIC_RebuildRenderMesh();
	void STATIC_QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs);
	void STATIC_PropagateInstanceChanges();
	void STATIC_MoveVertices(TArray<struct FVertexToMove> VerticesToMove);
	struct FVertexID MakeVertexID(int VertexIndex);
	struct FPolygonID MakePolygonID(int PolygonIndex);
	struct FPolygonGroupID MakePolygonGroupID(int PolygonGroupIndex);
	struct FEdgeID MakeEdgeID(int EdgeIndex);
	bool IsValidVertex(const struct FVertexID& VertexID);
	bool IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID);
	bool IsValidPolygon(const struct FPolygonID& PolygonID);
	bool IsValidEdge(const struct FEdgeID& EdgeID);
	bool IsUndoAllowed();
	bool IsSpatialDatabaseAllowed();
	bool IsPreviewingSubdivisions();
	bool IsOrphanedVertex(const struct FVertexID& VertexID);
	bool IsCompactAllowed();
	bool IsCommittedAsInstance();
	bool IsCommitted();
	bool IsBeingModified();
	struct FVertexID InvalidVertexID();
	struct FPolygonID InvalidPolygonID();
	struct FPolygonGroupID InvalidPolygonGroupID();
	struct FEdgeID InvalidEdgeID();
	void STATIC_InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
	void STATIC_InsertPolygonPerimeterVertices(const struct FPolygonID& PolygonID, int InsertBeforeVertexNumber, TArray<struct FVertexAndAttributes> VerticesToInsert);
	void STATIC_InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void STATIC_InitializeAdapters();
	struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed);
	struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID);
	int GetVertexInstanceCount();
	void STATIC_GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	int GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID);
	struct FPolygonID GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int ConnectedPolygonNumber);
	int GetVertexCount();
	void STATIC_GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void STATIC_GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs);
	int GetVertexConnectedEdgeCount(const struct FVertexID& VertexID);
	struct FEdgeID GetVertexConnectedEdge(const struct FVertexID& VertexID, int ConnectedEdgeNumber);
	void STATIC_GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);
	int GetTextureCoordinateCount();
	struct FSubdivisionLimitData GetSubdivisionLimitData();
	int GetSubdivisionCount();
	int GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID);
	struct FMeshTriangle GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int PolygonTriangleNumber);
	void STATIC_GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs);
	void STATIC_GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs);
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int PolygonVertexNumber);
	int GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID);
	struct FVertexID GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int PolygonVertexNumber);
	void STATIC_GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs);
	int GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID);
	struct FEdgeID GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon);
	struct FPolygonID GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int PolygonNumber);
	void STATIC_GetPolygonHoleVertices(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FVertexID>* OutHoleVertexIDs);
	void STATIC_GetPolygonHoleVertexInstances(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FVertexInstanceID>* OutHoleVertexInstanceIDs);
	struct FVertexInstanceID GetPolygonHoleVertexInstance(const struct FPolygonID& PolygonID, int HoleNumber, int PolygonVertexNumber);
	int GetPolygonHoleVertexCount(const struct FPolygonID& PolygonID, int HoleNumber);
	struct FVertexID GetPolygonHoleVertex(const struct FPolygonID& PolygonID, int HoleNumber, int PolygonVertexNumber);
	void STATIC_GetPolygonHoleEdges(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FEdgeID>* OutHoleEdgeIDs);
	int GetPolygonHoleEdgeCount(const struct FPolygonID& PolygonID, int HoleNumber);
	struct FEdgeID GetPolygonHoleEdge(const struct FPolygonID& PolygonID, int HoleNumber, int HoleEdgeNumber);
	int GetPolygonHoleCount(const struct FPolygonID& PolygonID);
	int GetPolygonGroupCount();
	int GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID);
	int GetPolygonCount();
	void STATIC_GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons);
	struct FPolygonGroupID GetGroupForPolygon(const struct FPolygonID& PolygonID);
	struct FPolygonGroupID GetFirstValidPolygonGroup();
	void STATIC_GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1);
	struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int EdgeVertexNumber);
	struct FEdgeID GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	void STATIC_GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs);
	int GetEdgeCount();
	void STATIC_GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	int GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID);
	struct FPolygonID GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int ConnectedPolygonNumber);
	void STATIC_GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs);
	void STATIC_FlipPolygons(TArray<struct FPolygonID> PolygonIDs);
	int FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID);
	int FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1);
	void STATIC_FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit);
	int FindPolygonHoleVertexNumberForVertex(const struct FPolygonID& PolygonID, int HoleNumber, const struct FVertexID& VertexID);
	int FindPolygonHoleEdgeNumberForVertices(const struct FPolygonID& PolygonID, int HoleNumber, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1);
	void STATIC_ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons);
	void STATIC_ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs);
	void STATIC_ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs);
	void STATIC_EndModification(bool bFromUndo);
	void STATIC_DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);
	void STATIC_DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	void STATIC_DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	void STATIC_DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs);
	void STATIC_DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete);
	void STATIC_DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices);
	void STATIC_DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	void STATIC_CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
	void STATIC_CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs);
	void STATIC_CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void STATIC_CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs);
	void STATIC_CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void STATIC_CreateMissingPolygonHoleEdges(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void STATIC_CreateEmptyVertexRange(int NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
	void STATIC_CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void STATIC_ComputePolygonTriangulation(const struct FPolygonID& PolygonID, TArray<struct FMeshTriangle>* OutTriangles);
	void STATIC_ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs);
	struct FPlane ComputePolygonPlane(const struct FPolygonID& PolygonID);
	struct FVector ComputePolygonNormal(const struct FPolygonID& PolygonID);
	struct FVector ComputePolygonCenter(const struct FPolygonID& PolygonID);
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere();
	struct FBox ComputeBoundingBox();
	bool ComputeBarycentricWeightForPointOnPolygon(const struct FPolygonID& PolygonID, const struct FVector& PointOnPolygon, struct FMeshTriangle* OutTriangle, struct FVector* OutTriangleVertexWeights);
	class UEditableMesh* CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo);
	void STATIC_Commit();
	void STATIC_ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons);
	void STATIC_BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
	void STATIC_AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups);
	bool AnyChangesToUndo();
};


// Class EditableMesh.EditableMeshAdapter
// 0x0000 (0x0030 - 0x0030)
class UEditableMeshAdapter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshAdapter");
		return ptr;
	}

};


// Class EditableMesh.EditableMeshFactory
// 0x0000 (0x0030 - 0x0030)
class UEditableMeshFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshFactory");
		return ptr;
	}


	class UEditableMesh* MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int LODIndex);
};


// Class EditableMesh.EditableStaticMeshAdapter
// 0x00B8 (0x00E8 - 0x0030)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableStaticMeshAdapter");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
