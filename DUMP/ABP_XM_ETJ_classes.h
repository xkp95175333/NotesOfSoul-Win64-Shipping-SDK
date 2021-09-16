// AnimBlueprintGeneratedClass ABP_XM_ETJ.ABP_XM_ETJ_C
// Size: 0x618 (Inherited: 0x2c0)
struct UABP_XM_ETJ_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4d0(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x598(0x80)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_XM_ETJ.ABP_XM_ETJ_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_XM_ETJ(int32_t EntryPoint); // Function ABP_XM_ETJ.ABP_XM_ETJ_C.ExecuteUbergraph_ABP_XM_ETJ // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

