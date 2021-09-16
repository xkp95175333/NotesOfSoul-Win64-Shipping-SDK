// AnimBlueprintGeneratedClass ABJ_XJ_Cloth_DW.ABJ_XJ_Cloth_DW_C
// Size: 0x2260 (Inherited: 0x2c0)
struct UABJ_XJ_Cloth_DW_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12; // 0x300(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11; // 0x570(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10; // 0x7e0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9; // 0xa50(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8; // 0xcc0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7; // 0xf30(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0x11a0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0x1410(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x1680(0x270)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x18f0(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1910(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x1930(0x270)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x1ba0(0x1d8)
	char pad_1D78[0x8]; // 0x1d78(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x1d80(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x1ff0(0x270)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABJ_XJ_Cloth_DW.ABJ_XJ_Cloth_DW_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABJ_XJ_Cloth_DW(int32_t EntryPoint); // Function ABJ_XJ_Cloth_DW.ABJ_XJ_Cloth_DW_C.ExecuteUbergraph_ABJ_XJ_Cloth_DW // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

