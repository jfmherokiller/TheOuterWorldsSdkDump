#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Basic.hpp"
#include "Indi_MeshDescription_classes.hpp"
#include "Indi_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t
{
	ThreeTriangles                 = 0,
	FourTriangles                  = 1,
	ETriangleTessellationMode_MAX  = 2
};


// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t
{
	All                            = 0,
	CenterPolygonOnly              = 1,
	SidePolygonsOnly               = 2,
	EInsetPolygonsMode_MAX         = 3
};


// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t
{
	NewEdgesSoft                   = 0,
	NewEdgesHard                   = 1,
	AllEdgesSoft                   = 2,
	AllEdgesHard                   = 3,
	EPolygonEdgeHardness_MAX       = 4
};


// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t
{
	None                           = 0,
	FVector4                       = 1,
	FVector                        = 2,
	FVector2D                      = 3,
	Float                          = 4,
	Int                            = 5,
	Bool                           = 6,
	FName                          = 7,
	EMeshElementAttributeType_MAX  = 8
};


// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t
{
	NoTopologyChange               = 0,
	TopologyChange                 = 1,
	EMeshTopologyChange_MAX        = 2
};


// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t
{
	FirstInterim                   = 0,
	Interim                        = 1,
	Final                          = 2,
	EMeshModificationType_MAX      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EditableMesh.VertexPair
// 0x0008
struct FVertexPair
{
	struct FVertexID                                   VertexID0;                                                // 0x0000(0x0004) (BlueprintVisible)
	struct FVertexID                                   VertexID1;                                                // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonToSplit
// 0x0018
struct FPolygonToSplit
{
	struct FPolygonID                                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	TArray<struct FVertexPair>                         VertexPairsToSplitAt;                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeValue
// 0x0050
struct FMeshElementAttributeValue
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeData
// 0x0060
struct FMeshElementAttributeData
{
	struct FName                                       AttributeName;                                            // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AttributeIndex;                                           // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMeshElementAttributeValue                  AttributeValue;                                           // 0x0000(0x0050) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeList
// 0x0010
struct FMeshElementAttributeList
{
	TArray<struct FMeshElementAttributeData>           Attributes;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.AttributesForVertex
// 0x0018
struct FAttributesForVertex
{
	struct FVertexID                                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	struct FMeshElementAttributeList                   VertexAttributes;                                         // 0x0000(0x0010) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
// 0x0018
struct FAttributesForVertexInstance
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // 0x0000(0x0004) (BlueprintVisible)
	struct FMeshElementAttributeList                   VertexInstanceAttributes;                                 // 0x0000(0x0010) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// 0x0010
struct FVertexAttributesForPolygonHole
{
	TArray<struct FMeshElementAttributeList>           VertexAttributeList;                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
// 0x0028
struct FVertexAttributesForPolygon
{
	struct FPolygonID                                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	TArray<struct FMeshElementAttributeList>           PerimeterVertexAttributeLists;                            // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVertexAttributesForPolygonHole>     VertexAttributeListsForEachHole;                          // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct EditableMesh.VerticesForEdge
// 0x000C
struct FVerticesForEdge
{
	struct FEdgeID                                     EdgeID;                                                   // 0x0000(0x0004) (BlueprintVisible)
	struct FVertexID                                   NewVertexID0;                                             // 0x0000(0x0004) (BlueprintVisible)
	struct FVertexID                                   NewVertexID1;                                             // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct EditableMesh.AttributesForEdge
// 0x0018
struct FAttributesForEdge
{
	struct FEdgeID                                     EdgeID;                                                   // 0x0000(0x0004) (BlueprintVisible)
	struct FMeshElementAttributeList                   EdgeAttributes;                                           // 0x0000(0x0010) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexToMove
// 0x0010
struct FVertexToMove
{
	struct FVertexID                                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	struct FVector                                     NewVertexPosition;                                        // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexAndAttributes
// 0x0018
struct FVertexAndAttributes
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // 0x0000(0x0004) (BlueprintVisible)
	struct FVertexID                                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	struct FMeshElementAttributeList                   PolygonVertexAttributes;                                  // 0x0000(0x0010) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
// 0x0034
struct FSubdividedQuadVertex
{
	int                                                VertexPositionIndex;                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextureCoordinate0;                                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextureCoordinate1;                                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexColor;                                              // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VertexNormal;                                             // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VertexTangent;                                            // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VertexBinormalSign;                                       // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0004(0x0030) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdividedQuad
// 0x00D0
struct FSubdividedQuad
{
	struct FSubdividedQuadVertex                       QuadVertex0;                                              // 0x0000(0x0034) (BlueprintVisible)
	struct FSubdividedQuadVertex                       QuadVertex1;                                              // 0x0000(0x0034) (BlueprintVisible)
	struct FSubdividedQuadVertex                       QuadVertex2;                                              // 0x0000(0x0034) (BlueprintVisible)
	struct FSubdividedQuadVertex                       QuadVertex3;                                              // 0x0000(0x0034) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x9C];                                      // 0x0034(0x009C) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
// 0x0010
struct FSubdivisionLimitSection
{
	TArray<struct FSubdividedQuad>                     SubdividedQuads;                                          // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.SubdividedWireEdge
// 0x000C
struct FSubdividedWireEdge
{
	int                                                EdgeVertex0PositionIndex;                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EdgeVertex1PositionIndex;                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdivisionLimitData
// 0x0030
struct FSubdivisionLimitData
{
	TArray<struct FVector>                             VertexPositions;                                          // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FSubdivisionLimitSection>            Sections;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FSubdividedWireEdge>                 SubdividedWireEdges;                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexToCreate
// 0x0018
struct FVertexToCreate
{
	struct FMeshElementAttributeList                   VertexAttributes;                                         // 0x0000(0x0010) (BlueprintVisible)
	struct FVertexID                                   OriginalVertexID;                                         // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
// 0x0020
struct FVertexInstanceToCreate
{
	struct FVertexID                                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	struct FMeshElementAttributeList                   VertexInstanceAttributes;                                 // 0x0000(0x0010) (BlueprintVisible)
	struct FVertexInstanceID                           OriginalVertexInstanceID;                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonHoleVertices
// 0x0010
struct FPolygonHoleVertices
{
	TArray<struct FVertexAndAttributes>                HoleVertices;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.PolygonToCreate
// 0x0030
struct FPolygonToCreate
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // 0x0000(0x0004) (BlueprintVisible)
	TArray<struct FVertexAndAttributes>                PerimeterVertices;                                        // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FPolygonHoleVertices>                PolygonHoles;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FPolygonID                                  OriginalPolygonID;                                        // 0x0000(0x0004) (BlueprintVisible)
	EPolygonEdgeHardness                               PolygonEdgeHardness;                                      // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
// 0x0018
struct FPolygonGroupToCreate
{
	struct FMeshElementAttributeList                   PolygonGroupAttributes;                                   // 0x0000(0x0010) (BlueprintVisible)
	struct FPolygonGroupID                             OriginalPolygonGroupID;                                   // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct EditableMesh.EdgeToCreate
// 0x0030
struct FEdgeToCreate
{
	struct FVertexID                                   VertexID0;                                                // 0x0000(0x0004) (BlueprintVisible)
	struct FVertexID                                   VertexID1;                                                // 0x0000(0x0004) (BlueprintVisible)
	TArray<struct FPolygonID>                          ConnectedPolygons;                                        // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FMeshElementAttributeList                   EdgeAttributes;                                           // 0x0000(0x0010) (BlueprintVisible)
	struct FEdgeID                                     OriginalEdgeID;                                           // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// 0x0008
struct FVertexIndexAndInstanceID
{
	int                                                ContourIndex;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVertexInstanceID                           VertexInstanceID;                                         // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// 0x0010
struct FVertexInstancesForPolygonHole
{
	TArray<struct FVertexIndexAndInstanceID>           VertexIndicesAndInstanceIDs;                              // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// 0x0028
struct FChangeVertexInstancesForPolygon
{
	struct FPolygonID                                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	TArray<struct FVertexIndexAndInstanceID>           PerimeterVertexIndicesAndInstanceIDs;                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVertexInstancesForPolygonHole>      VertexIndicesAndInstanceIDsForEachHole;                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
// 0x0008
struct FPolygonGroupForPolygon
{
	struct FPolygonID                                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	struct FPolygonGroupID                             PolygonGroupID;                                           // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct EditableMesh.RenderingPolygonGroup
// 0x0048
struct FRenderingPolygonGroup
{
	uint32_t                                           RenderingSectionIndex;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTriangles;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0004(0x0044) MISSED OFFSET
};

// ScriptStruct EditableMesh.TriangleID
// 0x0000 (0x0004 - 0x0004)
struct FTriangleID : public FElementID
{

};

// ScriptStruct EditableMesh.RenderingPolygon
// 0x0018
struct FRenderingPolygon
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // 0x0000(0x0004)
	TArray<struct FTriangleID>                         TriangulatedPolygonTriangleIndices;                       // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
