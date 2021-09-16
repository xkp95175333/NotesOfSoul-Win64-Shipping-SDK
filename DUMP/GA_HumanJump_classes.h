// BlueprintGeneratedClass GA_HumanJump.GA_HumanJump_C
// Size: 0x4d4 (Inherited: 0x4c8)
struct UGA_HumanJump_C : UGA_Jump_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	float GrowthCoefficient; // 0x4d0(0x04)

	void GetSprintPower(float Data); // Function GA_HumanJump.GA_HumanJump_C.GetSprintPower // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_HumanJump.GA_HumanJump_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void CalculateJumpZVelocity(); // Function GA_HumanJump.GA_HumanJump_C.CalculateJumpZVelocity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetJumpExpend(float JumpExpend); // Function GA_HumanJump.GA_HumanJump_C.GetJumpExpend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HumanJump.GA_HumanJump_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_HumanJump.GA_HumanJump_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_HumanJump(int32_t EntryPoint); // Function GA_HumanJump.GA_HumanJump_C.ExecuteUbergraph_GA_HumanJump // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

