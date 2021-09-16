// AnimBlueprintGeneratedClass AP_DFQ_CS_Hair.AP_DFQ_CS_Hair_C
// Size: 0xb68 (Inherited: 0x2c0)
struct UAP_DFQ_CS_Hair_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x300(0x650)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x950(0x1d8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb28(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb48(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function AP_DFQ_CS_Hair.AP_DFQ_CS_Hair_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_AP_DFQ_CS_Hair(int32_t EntryPoint); // Function AP_DFQ_CS_Hair.AP_DFQ_CS_Hair_C.ExecuteUbergraph_AP_DFQ_CS_Hair // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

