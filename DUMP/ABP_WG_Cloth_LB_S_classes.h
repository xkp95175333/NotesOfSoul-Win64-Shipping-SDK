// AnimBlueprintGeneratedClass ABP_WG_Cloth_LB_S.ABP_WG_Cloth_LB_S_C
// Size: 0x2740 (Inherited: 0x2c0)
struct UABP_WG_Cloth_LB_S_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_14; // 0x300(0x270)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x570(0x1d8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x748(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x768(0x20)
	char pad_788[0x8]; // 0x788(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13; // 0x790(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12; // 0xa00(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11; // 0xc70(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10; // 0xee0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9; // 0x1150(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8; // 0x13c0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7; // 0x1630(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0x18a0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0x1b10(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x1d80(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x1ff0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x2260(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x24d0(0x270)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_WG_Cloth_LB_S.ABP_WG_Cloth_LB_S_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_WG_Cloth_LB_S(int32_t EntryPoint); // Function ABP_WG_Cloth_LB_S.ABP_WG_Cloth_LB_S_C.ExecuteUbergraph_ABP_WG_Cloth_LB_S // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

