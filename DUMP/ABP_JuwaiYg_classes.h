// AnimBlueprintGeneratedClass ABP_JuwaiYg.ABP_JuwaiYg_C
// Size: 0x760 (Inherited: 0x2c0)
struct UABP_JuwaiYg_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x2c8(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x390(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x410(0x80)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x490(0xc8)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x558(0x1d8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x730(0x30)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_JuwaiYg.ABP_JuwaiYg_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_JuwaiYg(int32_t EntryPoint); // Function ABP_JuwaiYg.ABP_JuwaiYg_C.ExecuteUbergraph_ABP_JuwaiYg // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

