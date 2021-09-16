// AnimBlueprintGeneratedClass ABP_YCX_Cloth_CS_01_Cloth_Skeleton.ABP_YCX_Cloth_CS_01_Cloth_Skeleton_C
// Size: 0x798 (Inherited: 0x2c0)
struct UABP_YCX_Cloth_CS_01_Cloth_Skeleton_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4d0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4f0(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x510(0x270)
	struct FKawaiiPhysicsSettings Physics Settings; // 0x780(0x18)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_YCX_Cloth_CS_01_Cloth_Skeleton.ABP_YCX_Cloth_CS_01_Cloth_Skeleton_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_YCX_Cloth_CS_01_Cloth_Skeleton(int32_t EntryPoint); // Function ABP_YCX_Cloth_CS_01_Cloth_Skeleton.ABP_YCX_Cloth_CS_01_Cloth_Skeleton_C.ExecuteUbergraph_ABP_YCX_Cloth_CS_01_Cloth_Skeleton // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

