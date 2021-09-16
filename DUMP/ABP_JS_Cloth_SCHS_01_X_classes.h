// AnimBlueprintGeneratedClass ABP_JS_Cloth_SCHS_01_X.ABP_JS_Cloth_SCHS_01_X_C
// Size: 0x13b0 (Inherited: 0x2c0)
struct UABP_JS_Cloth_SCHS_01_X_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4d0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4f0(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0x510(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0x780(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x9f0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0xc60(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0xed0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x1140(0x270)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_JS_Cloth_SCHS_01_X.ABP_JS_Cloth_SCHS_01_X_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_JS_Cloth_SCHS_01_X(int32_t EntryPoint); // Function ABP_JS_Cloth_SCHS_01_X.ABP_JS_Cloth_SCHS_01_X_C.ExecuteUbergraph_ABP_JS_Cloth_SCHS_01_X // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

