// Enum ACLPlugin.ACLCompressionLevel
enum class ACLCompressionLevel : uint8 {
	ACLCL_Lowest = 0,
	ACLCL_Low = 1,
	ACLCL_Medium = 2,
	ACLCL_High = 3,
	ACLCL_Highest = 4,
	ACLCL_MAX = 5
};

// Enum ACLPlugin.ACLVectorFormat
enum class ACLVectorFormat : uint8 {
	ACLVF_Vector3_97 = 0,
	ACLVF_Vector3_Variable = 1,
	ACLVF_Vector3_MAX = 2
};

// Enum ACLPlugin.ACLRotationFormat
enum class ACLRotationFormat : uint8 {
	ACLRF_Quat_129 = 0,
	ACLRF_QuatDropW_97 = 1,
	ACLRF_QuatDropW_Variable = 2,
	ACLRF_MAX = 3
};

// Enum ACLPlugin.ACLVisualFidelityChangeResult
enum class ACLVisualFidelityChangeResult : uint8 {
	Dispatched = 0,
	Completed = 1,
	Failed = 2,
	ACLVisualFidelityChangeResult_MAX = 3
};

// Enum ACLPlugin.ACLVisualFidelity
enum class ACLVisualFidelity : uint8 {
	Highest = 0,
	Medium = 1,
	Lowest = 2,
	ACLVisualFidelity_MAX = 3
};

