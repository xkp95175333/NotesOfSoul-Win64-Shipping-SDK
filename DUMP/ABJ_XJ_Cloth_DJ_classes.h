// AnimBlueprintGeneratedClass ABJ_XJ_Cloth_DJ.ABJ_XJ_Cloth_DJ_C
// Size: 0x3850 (Inherited: 0x2c0)
struct UABJ_XJ_Cloth_DJ_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_21; // 0x300(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_20; // 0x570(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_19; // 0x7e0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_18; // 0xa50(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_17; // 0xcc0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_16; // 0xf30(0x270)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x11a0(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x11c0(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_15; // 0x11e0(0x270)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x1450(0x1d8)
	char pad_1628[0x8]; // 0x1628(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_14; // 0x1630(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13; // 0x18a0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12; // 0x1b10(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11; // 0x1d80(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10; // 0x1ff0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9; // 0x2260(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8; // 0x24d0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7; // 0x2740(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0x29b0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0x2c20(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x2e90(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x3100(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x3370(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x35e0(0x270)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABJ_XJ_Cloth_DJ.ABJ_XJ_Cloth_DJ_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABJ_XJ_Cloth_DJ(int32_t EntryPoint); // Function ABJ_XJ_Cloth_DJ.ABJ_XJ_Cloth_DJ_C.ExecuteUbergraph_ABJ_XJ_Cloth_DJ // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

