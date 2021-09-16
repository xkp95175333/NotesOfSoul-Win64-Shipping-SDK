// AnimBlueprintGeneratedClass ABP_GhostBian.ABP_GhostBian_C
// Size: 0x700 (Inherited: 0x2c0)
struct UABP_GhostBian_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8(0x118)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x410(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x568(0x28)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x590(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x630(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x678(0x28)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x6a0(0x58)
	float xiaopi; // 0x6f8(0x04)
	int32_t Active Child Index; // 0x6fc(0x04)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function ABP_GhostBian.ABP_GhostBian_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_GhostBian(int32_t EntryPoint); // Function ABP_GhostBian.ABP_GhostBian_C.ExecuteUbergraph_ABP_GhostBian // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

