// AnimBlueprintGeneratedClass SM_XY_BS_AB.SM_XY_BS_AB_C
// Size: 0xb60 (Inherited: 0x2c0)
struct USM_XY_BS_AB_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x4d0(0x650)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb20(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb40(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SM_XY_BS_AB.SM_XY_BS_AB_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_SM_XY_BS_AB(int32_t EntryPoint); // Function SM_XY_BS_AB.SM_XY_BS_AB_C.ExecuteUbergraph_SM_XY_BS_AB // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

