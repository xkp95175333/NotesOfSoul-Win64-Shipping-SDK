// BlueprintGeneratedClass GA_Jump.GA_Jump_C
// Size: 0x4c8 (Inherited: 0x490)
struct UGA_Jump_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct TArray<struct AActor*> HittedActors; // 0x498(0x10)
	struct UNOS_WaitRangeTarget* WaitRangeTargetTask; // 0x4a8(0x08)
	int32_t JumpForwardVelocity; // 0x4b0(0x04)
	float JumpGravity; // 0x4b4(0x04)
	struct UAudioComponent* JumpSound; // 0x4b8(0x08)
	struct UNOS_AbilitySystemComponent* GhostAbilityComp; // 0x4c0(0x08)

	void PlayGhostJumpSound(); // Function GA_Jump.GA_Jump_C.PlayGhostJumpSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Switch Gravity(); // Function GA_Jump.GA_Jump_C.Switch Gravity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetGhostFogState(bool bActive); // Function GA_Jump.GA_Jump_C.GetGhostFogState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostFogState(bool bAciveState); // Function GA_Jump.GA_Jump_C.SetGhostFogState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_Jump.GA_Jump_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void CalculateJumpZVelocity(); // Function GA_Jump.GA_Jump_C.CalculateJumpZVelocity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChange_080738F3444B13F71FD95C92E84FF3D1(enum class EMovementMode NewMovementMode); // Function GA_Jump.GA_Jump_C.OnChange_080738F3444B13F71FD95C92E84FF3D1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_F2AA358341F2E4D391A49F9E94E299B2(); // Function GA_Jump.GA_Jump_C.OnFinish_F2AA358341F2E4D391A49F9E94E299B2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_C817331343CAF4025E5AEA911C24FE86(); // Function GA_Jump.GA_Jump_C.Added_C817331343CAF4025E5AEA911C24FE86 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_Jump.GA_Jump_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Jump.GA_Jump_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Jump(int32_t EntryPoint); // Function GA_Jump.GA_Jump_C.ExecuteUbergraph_GA_Jump // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

