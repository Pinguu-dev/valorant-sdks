// Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8 {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 4,
	EComputeNTBsOptions_MAX = 5
};

// ScriptStruct MeshDescription.ElementID
// Size: 0x04 (Inherited: 0x00)
struct FElementID {
	int32_t IDValue; // 0x00(0x04)
};

// ScriptStruct MeshDescription.PolygonGroupID
// Size: 0x04 (Inherited: 0x04)
struct FPolygonGroupID : FElementID {
};

// ScriptStruct MeshDescription.PolygonID
// Size: 0x04 (Inherited: 0x04)
struct FPolygonID : FElementID {
};

// ScriptStruct MeshDescription.VertexID
// Size: 0x04 (Inherited: 0x04)
struct FVertexID : FElementID {
};

// ScriptStruct MeshDescription.VertexInstanceID
// Size: 0x04 (Inherited: 0x04)
struct FVertexInstanceID : FElementID {
};

// ScriptStruct MeshDescription.EdgeID
// Size: 0x04 (Inherited: 0x04)
struct FEdgeID : FElementID {
};

// ScriptStruct MeshDescription.TriangleID
// Size: 0x04 (Inherited: 0x04)
struct FTriangleID : FElementID {
};

