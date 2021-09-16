// BlueprintGeneratedClass GA_SwordRideJump.GA_SwordRideJump_C
// Size: 0x498 (Inherited: 0x490)
struct UGA_SwordRideJump_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_SwordRideJump.GA_SwordRideJump_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void OnChange_C17AB06D4B064FB638D816B889CFF0E1(enum class EMovementMode NewMovementMode); // Function GA_SwordRideJump.GA_SwordRideJump_C.OnChange_C17AB06D4B064FB638D816B889CFF0E1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_SwordRideJump.GA_SwordRideJump_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SwordRideJump.GA_SwordRideJump_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_SwordRideJump(int32_t EntryPoint); // Function GA_SwordRideJump.GA_SwordRideJump_C.ExecuteUbergraph_GA_SwordRideJump // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

