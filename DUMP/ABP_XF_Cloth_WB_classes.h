// AnimBlueprintGeneratedClass ABP_XF_Cloth_WB.ABP_XF_Cloth_WB_C
// Size: 0x1d94 (Inherited: 0x2c0)
struct UABP_XF_Cloth_WB_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9; // 0x4d0(0x270)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8; // 0x780(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7; // 0x9f0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0xc60(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0xed0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x1140(0x270)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x13b0(0x80)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x1430(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x16a0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x1910(0x270)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1b80(0xc8)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x1c48(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1d10(0x80)
	float Alpha; // 0x1d90(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_XF_Cloth_WB.ABP_XF_Cloth_WB_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_XF_Cloth_WB(int32_t EntryPoint); // Function ABP_XF_Cloth_WB.ABP_XF_Cloth_WB_C.ExecuteUbergraph_ABP_XF_Cloth_WB // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

