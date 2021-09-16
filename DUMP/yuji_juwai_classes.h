// AnimBlueprintGeneratedClass yuji_juwai.yuji_juwai_C
// Size: 0xa7c (Inherited: 0x2c0)
struct Uyuji_juwai_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x2f8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x378(0x80)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x3f8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x498(0x80)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x518(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x538(0x20)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_4; // 0x558(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_3; // 0x680(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x7a8(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x8d0(0x128)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9f8(0x80)
	int32_t Active Child Index; // 0xa78(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function yuji_juwai.yuji_juwai_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void setHumanindex(int32_t humanindex); // Function yuji_juwai.yuji_juwai_C.setHumanindex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhost(bool IsGhost); // Function yuji_juwai.yuji_juwai_C.SetGhost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterid(int32_t ConfigID); // Function yuji_juwai.yuji_juwai_C.SetCharacterid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_yuji_juwai(int32_t EntryPoint); // Function yuji_juwai.yuji_juwai_C.ExecuteUbergraph_yuji_juwai // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

