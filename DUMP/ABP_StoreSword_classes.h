// AnimBlueprintGeneratedClass ABP_StoreSword.ABP_StoreSword_C
// Size: 0x4d0 (Inherited: 0x2c0)
struct UABP_StoreSword_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_StoreSword.ABP_StoreSword_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_StoreSword(int32_t EntryPoint); // Function ABP_StoreSword.ABP_StoreSword_C.ExecuteUbergraph_ABP_StoreSword // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

