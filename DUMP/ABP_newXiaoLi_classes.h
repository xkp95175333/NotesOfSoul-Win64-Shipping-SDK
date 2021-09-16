// AnimBlueprintGeneratedClass ABP_newXiaoLi.ABP_newXiaoLi_C
// Size: 0xa9f (Inherited: 0x2c0)
struct UABP_newXiaoLi_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x2f8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x378(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3f8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x478(0x80)
	struct FAnimNode_MultiWayBlend AnimGraphNode_MultiWayBlend; // 0x4f8(0x50)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x548(0x158)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x6a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x6c8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x6f0(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x718(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x748(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7c8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7f8(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x8a8(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x8f0(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xa48(0x28)
	struct FVector Velocity; // 0xa70(0x0c)
	char pad_A7C[0x4]; // 0xa7c(0x04)
	struct ABP_XiaoLi_C* xiaoli; // 0xa80(0x08)
	float Speed; // 0xa88(0x04)
	struct FVelocityBlend VelocityBlend; // 0xa8c(0x10)
	bool HasMovementInput; // 0xa9c(0x01)
	bool ShouldMove; // 0xa9d(0x01)
	bool IsStealth; // 0xa9e(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_newXiaoLi.ABP_newXiaoLi_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Calculate Velocity Blend(struct FVelocityBlend VelocityBlend); // Function ABP_newXiaoLi.ABP_newXiaoLi_C.Calculate Velocity Blend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Interp Velocity Blend(struct FVelocityBlend Cur, struct FVelocityBlend Tar, float InterpSpeed, float Del, struct FVelocityBlend VelocityBlend); // Function ABP_newXiaoLi.ABP_newXiaoLi_C.Interp Velocity Blend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_newXiaoLi.ABP_newXiaoLi_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintInitializeAnimation(); // Function ABP_newXiaoLi.ABP_newXiaoLi_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_newXiaoLi(int32_t EntryPoint); // Function ABP_newXiaoLi.ABP_newXiaoLi_C.ExecuteUbergraph_ABP_newXiaoLi // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

