// AnimBlueprintGeneratedClass ABP_XP_ZZFL.ABP_XP_ZZFL_C
// Size: 0x1ff0 (Inherited: 0x2c0)
struct UABP_XP_ZZFL_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11; // 0x300(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10; // 0x570(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9; // 0x7e0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8; // 0xa50(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7; // 0xcc0(0x270)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0xf30(0x1d8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1108(0x20)
	char pad_1128[0x8]; // 0x1128(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0x1130(0x270)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x13a0(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0x13c0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x1630(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x18a0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x1b10(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x1d80(0x270)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_XP_ZZFL.ABP_XP_ZZFL_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_XP_ZZFL(int32_t EntryPoint); // Function ABP_XP_ZZFL.ABP_XP_ZZFL_C.ExecuteUbergraph_ABP_XP_ZZFL // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

