// AnimBlueprintGeneratedClass ABP_YCX_Weapon_BS_Skin_SC.ABP_YCX_Weapon_BS_Skin_SC_C
// Size: 0xb60 (Inherited: 0x2c0)
struct UABP_YCX_Weapon_BS_Skin_SC_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x4d0(0x650)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb20(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb40(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_YCX_Weapon_BS_Skin_SC.ABP_YCX_Weapon_BS_Skin_SC_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_YCX_Weapon_BS_Skin_SC(int32_t EntryPoint); // Function ABP_YCX_Weapon_BS_Skin_SC.ABP_YCX_Weapon_BS_Skin_SC_C.ExecuteUbergraph_ABP_YCX_Weapon_BS_Skin_SC // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

