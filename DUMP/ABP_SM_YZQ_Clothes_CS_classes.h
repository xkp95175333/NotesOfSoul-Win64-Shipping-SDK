// AnimBlueprintGeneratedClass ABP_SM_YZQ_Clothes_CS.ABP_SM_YZQ_Clothes_CS_C
// Size: 0x1d88 (Inherited: 0x2c0)
struct UABP_SM_YZQ_Clothes_CS_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2c8(0x1d8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4a0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4c0(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10; // 0x4e0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9; // 0x750(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8; // 0x9c0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7; // 0xc30(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0xea0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0x1110(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x1380(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x15f0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x1860(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x1ad0(0x270)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1d40(0x30)
	struct FKawaiiPhysicsSettings Physics Settings; // 0x1d70(0x18)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_SM_YZQ_Clothes_CS.ABP_SM_YZQ_Clothes_CS_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_SM_YZQ_Clothes_CS(int32_t EntryPoint); // Function ABP_SM_YZQ_Clothes_CS.ABP_SM_YZQ_Clothes_CS_C.ExecuteUbergraph_ABP_SM_YZQ_Clothes_CS // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

