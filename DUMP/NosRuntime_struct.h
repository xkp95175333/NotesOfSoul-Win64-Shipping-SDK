// Enum NosRuntime.EModifyCurveApply
enum class EModifyCurveApply : uint8 {
	Add,
	Scale,
	Blend,
	WeightedMovingAverage,
	RemapCurve,
	EModifyCurveApply_MAX,
};

// ScriptStruct NosRuntime.AnimNode_ModifyMapCurve
// Size: 0x98 (Inherited: 0x10)
struct FAnimNode_ModifyMapCurve : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct TMap<struct FName, float> CurveMapValues; // 0x20(0x50)
	struct TArray<struct FName> CurveNames; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	float Alpha; // 0x90(0x04)
	enum class EModifyCurveApply ApplyMode; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

