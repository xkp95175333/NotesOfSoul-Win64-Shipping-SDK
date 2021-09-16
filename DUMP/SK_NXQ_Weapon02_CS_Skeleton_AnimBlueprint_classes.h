// AnimBlueprintGeneratedClass SK_NXQ_Weapon02_CS_Skeleton_AnimBlueprint.SK_NXQ_Weapon02_CS_Skeleton_AnimBlueprint_C
// Size: 0x924 (Inherited: 0x2c0)
struct USK_NXQ_Weapon02_CS_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x2f8(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x400(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x420(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x528(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x630(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x738(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x758(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7d8(0x80)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x858(0xc8)
	float AnimLerpAlpha; // 0x920(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_NXQ_Weapon02_CS_Skeleton_AnimBlueprint.SK_NXQ_Weapon02_CS_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_SK_NXQ_Weapon02_CS_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function SK_NXQ_Weapon02_CS_Skeleton_AnimBlueprint.SK_NXQ_Weapon02_CS_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_NXQ_Weapon02_CS_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

