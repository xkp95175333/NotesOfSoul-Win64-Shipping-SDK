// AnimBlueprintGeneratedClass SM_XF_SYPD_AB.SM_XF_SYPD_AB_C
// Size: 0x4d0 (Inherited: 0x2c0)
struct USM_XF_SYPD_AB_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2c8(0x1d8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x4a0(0x30)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SM_XF_SYPD_AB.SM_XF_SYPD_AB_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_SM_XF_SYPD_AB(int32_t EntryPoint); // Function SM_XF_SYPD_AB.SM_XF_SYPD_AB_C.ExecuteUbergraph_SM_XF_SYPD_AB // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

