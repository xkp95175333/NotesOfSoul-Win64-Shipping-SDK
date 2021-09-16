// AnimBlueprintGeneratedClass ABP_NXQ_Cloth_YZ_01.ABP_NXQ_Cloth_YZ_01_C
// Size: 0x9f0 (Inherited: 0x2c0)
struct UABP_NXQ_Cloth_YZ_01_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4d0(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x4f0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x760(0x270)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9d0(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_NXQ_Cloth_YZ_01.ABP_NXQ_Cloth_YZ_01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_NXQ_Cloth_YZ_01(int32_t EntryPoint); // Function ABP_NXQ_Cloth_YZ_01.ABP_NXQ_Cloth_YZ_01_C.ExecuteUbergraph_ABP_NXQ_Cloth_YZ_01 // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

