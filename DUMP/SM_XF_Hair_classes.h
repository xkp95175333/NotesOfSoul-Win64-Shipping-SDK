// AnimBlueprintGeneratedClass SM_XF_Hair.SM_XF_Hair_C
// Size: 0x780 (Inherited: 0x2c0)
struct USM_XF_Hair_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4d0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4f0(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x510(0x270)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SM_XF_Hair.SM_XF_Hair_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_SM_XF_Hair(int32_t EntryPoint); // Function SM_XF_Hair.SM_XF_Hair_C.ExecuteUbergraph_SM_XF_Hair // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

