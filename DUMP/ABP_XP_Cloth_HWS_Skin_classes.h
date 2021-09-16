// AnimBlueprintGeneratedClass ABP_XP_Cloth_HWS_Skin.ABP_XP_Cloth_HWS_Skin_C
// Size: 0x2740 (Inherited: 0x2c0)
struct UABP_XP_Cloth_HWS_Skin_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_14; // 0x300(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13; // 0x570(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12; // 0x7e0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11; // 0xa50(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10; // 0xcc0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9; // 0xf30(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8; // 0x11a0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7; // 0x1410(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0x1680(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0x18f0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x1b60(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x1dd0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x2040(0x270)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x22b0(0x1d8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2488(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x24a8(0x20)
	char pad_24C8[0x8]; // 0x24c8(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x24d0(0x270)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_XP_Cloth_HWS_Skin.ABP_XP_Cloth_HWS_Skin_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_XP_Cloth_HWS_Skin(int32_t EntryPoint); // Function ABP_XP_Cloth_HWS_Skin.ABP_XP_Cloth_HWS_Skin_C.ExecuteUbergraph_ABP_XP_Cloth_HWS_Skin // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

