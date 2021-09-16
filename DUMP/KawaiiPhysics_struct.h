// Enum KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8 {
	None,
	Spherical,
	Capsule,
	Planar,
	Box,
	ECollisionLimitType_MAX,
};

// Enum KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8 {
	X_Positive,
	X_Negative,
	Y_Positive,
	Y_Negative,
	Z_Positive,
	Z_Negative,
	EBoneForwardAxis_MAX,
};

// Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8 {
	None,
	X,
	Y,
	Z,
	EPlanarConstraint_MAX,
};

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// Size: 0x270 (Inherited: 0xc8)
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	struct FBoneReference RootBone; // 0xc8(0x10)
	struct TArray<struct FBoneReference> ExcludeBones; // 0xd8(0x10)
	int32_t TargetFramerate; // 0xe8(0x04)
	bool OverrideTargetFramerate; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0xf0(0x18)
	struct UCurveFloat* DampingCurve; // 0x108(0x08)
	struct UCurveFloat* WorldDampingLocationCurve; // 0x110(0x08)
	struct UCurveFloat* WorldDampingRotationCurve; // 0x118(0x08)
	struct UCurveFloat* StiffnessCurve; // 0x120(0x08)
	struct UCurveFloat* RadiusCurve; // 0x128(0x08)
	struct UCurveFloat* LimitAngleCurve; // 0x130(0x08)
	bool bUpdatePhysicsSettingsInGame; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float DummyBoneLength; // 0x13c(0x04)
	enum class EBoneForwardAxis BoneForwardAxis; // 0x140(0x01)
	enum class EPlanarConstraint PlanarConstraint; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x148(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x158(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x168(0x10)
	struct TArray<struct FBoxLimit> BoxLimits; // 0x178(0x10)
	struct UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset; // 0x188(0x08)
	struct TArray<struct FSphericalLimit> SphericalLimitsData; // 0x190(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimitsData; // 0x1a0(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimitsData; // 0x1b0(0x10)
	struct TArray<struct FBoxLimit> BoxLimitsData; // 0x1c0(0x10)
	float TeleportDistanceThreshold; // 0x1d0(0x04)
	float TeleportRotationThreshold; // 0x1d4(0x04)
	struct FVector Gravity; // 0x1d8(0x0c)
	bool bEnableWind; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	float WindScale; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct TArray<struct FKawaiiPhysicsModifyBone> ModifyBones; // 0x1f0(0x10)
	float TotalBoneLength; // 0x200(0x04)
	char pad_204[0xc]; // 0x204(0x0c)
	struct FTransform PreSkelCompTransform; // 0x210(0x30)
	bool bInitPhysicsSettings; // 0x240(0x01)
	char pad_241[0x2f]; // 0x241(0x2f)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// Size: 0xb0 (Inherited: 0x00)
struct FKawaiiPhysicsModifyBone {
	struct FBoneReference BoneRef; // 0x00(0x10)
	int32_t ParentIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> ChildIndexs; // 0x18(0x10)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x28(0x18)
	struct FVector Location; // 0x40(0x0c)
	struct FVector PrevLocation; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
	struct FQuat PrevRotation; // 0x60(0x10)
	struct FVector PoseLocation; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FQuat PoseRotation; // 0x80(0x10)
	struct FVector PoseScale; // 0x90(0x0c)
	float LengthFromRoot; // 0x9c(0x04)
	bool bDummy; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// Size: 0x18 (Inherited: 0x00)
struct FKawaiiPhysicsSettings {
	float Damping; // 0x00(0x04)
	float WorldDampingLocation; // 0x04(0x04)
	float WorldDampingRotation; // 0x08(0x04)
	float Stiffness; // 0x0c(0x04)
	float Radius; // 0x10(0x04)
	float LimitAngle; // 0x14(0x04)
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// Size: 0x50 (Inherited: 0x00)
struct FCollisionLimitBase {
	struct FBoneReference DrivingBone; // 0x00(0x10)
	struct FVector OffsetLocation; // 0x10(0x0c)
	struct FRotator OffsetRotation; // 0x1c(0x0c)
	struct FVector Location; // 0x28(0x0c)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FQuat Rotation; // 0x40(0x10)
};

// ScriptStruct KawaiiPhysics.BoxLimit
// Size: 0x60 (Inherited: 0x50)
struct FBoxLimit : FCollisionLimitBase {
	struct FVector BoxSize; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct KawaiiPhysics.PlanarLimit
// Size: 0x60 (Inherited: 0x50)
struct FPlanarLimit : FCollisionLimitBase {
	struct FPlane Plane; // 0x50(0x10)
};

// ScriptStruct KawaiiPhysics.CapsuleLimit
// Size: 0x60 (Inherited: 0x50)
struct FCapsuleLimit : FCollisionLimitBase {
	float Radius; // 0x50(0x04)
	float Length; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct KawaiiPhysics.SphericalLimit
// Size: 0x60 (Inherited: 0x50)
struct FSphericalLimit : FCollisionLimitBase {
	float Radius; // 0x50(0x04)
	enum class ESphericalLimitType LimitType; // 0x54(0x01)
	char pad_55[0xb]; // 0x55(0x0b)
};

// ScriptStruct KawaiiPhysics.CollisionLimitDataBase
// Size: 0x50 (Inherited: 0x00)
struct FCollisionLimitDataBase {
	struct FName DrivingBoneName; // 0x00(0x08)
	struct FVector OffsetLocation; // 0x08(0x0c)
	struct FRotator OffsetRotation; // 0x14(0x0c)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FQuat Rotation; // 0x30(0x10)
	struct FGuid Guid; // 0x40(0x10)
};

// ScriptStruct KawaiiPhysics.BoxLimitData
// Size: 0x60 (Inherited: 0x50)
struct FBoxLimitData : FCollisionLimitDataBase {
	struct FVector BoxSize; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct KawaiiPhysics.PlanarLimitData
// Size: 0x60 (Inherited: 0x50)
struct FPlanarLimitData : FCollisionLimitDataBase {
	struct FPlane Plane; // 0x50(0x10)
};

// ScriptStruct KawaiiPhysics.CapsuleLimitData
// Size: 0x60 (Inherited: 0x50)
struct FCapsuleLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50(0x04)
	float Length; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct KawaiiPhysics.SphericalLimitData
// Size: 0x60 (Inherited: 0x50)
struct FSphericalLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50(0x04)
	enum class ESphericalLimitType LimitType; // 0x54(0x01)
	char pad_55[0xb]; // 0x55(0x0b)
};

