// AnimBlueprintGeneratedClass ABP_SM_YCX_Clothes_CS_Skeleton.ABP_SM_YCX_Clothes_CS_Skeleton_C
// Size: 0xb60 (Inherited: 0x2c0)
struct UABP_SM_YCX_Clothes_CS_Skeleton_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x4d0(0x650)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb20(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb40(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_SM_YCX_Clothes_CS_Skeleton.ABP_SM_YCX_Clothes_CS_Skeleton_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_SM_YCX_Clothes_CS_Skeleton(int32_t EntryPoint); // Function ABP_SM_YCX_Clothes_CS_Skeleton.ABP_SM_YCX_Clothes_CS_Skeleton_C.ExecuteUbergraph_ABP_SM_YCX_Clothes_CS_Skeleton // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

