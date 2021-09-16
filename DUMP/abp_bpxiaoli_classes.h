// AnimBlueprintGeneratedClass abp_bpxiaoli.abp_bpxiaoli_C
// Size: 0xe7c (Inherited: 0x2c0)
struct Uabp_bpxiaoli_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8(0x118)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x410(0x80)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x490(0x158)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x5e8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x688(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x708(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x750(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7d0(0x80)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x850(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x918(0x80)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_4; // 0x998(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_3; // 0xac0(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0xbe8(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0xd10(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xe38(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xe58(0x20)
	int32_t Active Child Index; // 0xe78(0x04)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function abp_bpxiaoli.abp_bpxiaoli_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_abp_bpxiaoli(int32_t EntryPoint); // Function abp_bpxiaoli.abp_bpxiaoli_C.ExecuteUbergraph_abp_bpxiaoli // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

