// AnimBlueprintGeneratedClass ABP_NXQ_Weapon_CS_Skeleton.ABP_NXQ_Weapon_CS_Skeleton_C
// Size: 0xcf0 (Inherited: 0x2c0)
struct UABP_NXQ_Weapon_CS_Skeleton_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2f8(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x318(0x20)
	char pad_338[0x8]; // 0x338(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x340(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x5b0(0x270)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x820(0x270)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xa90(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb58(0x80)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xbd8(0x118)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function ABP_NXQ_Weapon_CS_Skeleton.ABP_NXQ_Weapon_CS_Skeleton_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_NXQ_Weapon_CS_Skeleton(int32_t EntryPoint); // Function ABP_NXQ_Weapon_CS_Skeleton.ABP_NXQ_Weapon_CS_Skeleton_C.ExecuteUbergraph_ABP_NXQ_Weapon_CS_Skeleton // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

