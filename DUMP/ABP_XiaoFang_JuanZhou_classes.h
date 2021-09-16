// AnimBlueprintGeneratedClass ABP_XiaoFang_JuanZhou.ABP_XiaoFang_JuanZhou_C
// Size: 0x6b8 (Inherited: 0x2c0)
struct UABP_XiaoFang_JuanZhou_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2c8(0x1d8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x4a0(0x48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4e8(0xc8)
	struct FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive; // 0x5b0(0x38)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x5e8(0x50)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x638(0x50)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x688(0x30)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_XiaoFang_JuanZhou.ABP_XiaoFang_JuanZhou_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_XiaoFang_JuanZhou(int32_t EntryPoint); // Function ABP_XiaoFang_JuanZhou.ABP_XiaoFang_JuanZhou_C.ExecuteUbergraph_ABP_XiaoFang_JuanZhou // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

