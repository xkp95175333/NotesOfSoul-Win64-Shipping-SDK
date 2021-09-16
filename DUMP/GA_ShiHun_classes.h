// BlueprintGeneratedClass GA_ShiHun.GA_ShiHun_C
// Size: 0x4b0 (Inherited: 0x490)
struct UGA_ShiHun_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* Human; // 0x498(0x08)
	struct FActiveGameplayEffectHandle InteractingGEHandle; // 0x4a0(0x08)
	struct UAbilityTask_PlayMontageAndWait* Task_Montage; // 0x4a8(0x08)

	void PlayerInteractTurn(); // Function GA_ShiHun.GA_ShiHun_C.PlayerInteractTurn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetShiHunMontage(struct UAnimMontage* Value); // Function GA_ShiHun.GA_ShiHun_C.GetShiHunMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void IsAbleToShiHun(bool bIsAble); // Function GA_ShiHun.GA_ShiHun_C.IsAbleToShiHun // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CanShiHun(bool CanShiHun); // Function GA_ShiHun.GA_ShiHun_C.CanShiHun // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnCancelled_C69A91EC4953C32A1D57E293FB2DF239(); // Function GA_ShiHun.GA_ShiHun_C.OnCancelled_C69A91EC4953C32A1D57E293FB2DF239 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_C69A91EC4953C32A1D57E293FB2DF239(); // Function GA_ShiHun.GA_ShiHun_C.OnInterrupted_C69A91EC4953C32A1D57E293FB2DF239 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_C69A91EC4953C32A1D57E293FB2DF239(); // Function GA_ShiHun.GA_ShiHun_C.OnBlendOut_C69A91EC4953C32A1D57E293FB2DF239 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_C69A91EC4953C32A1D57E293FB2DF239(); // Function GA_ShiHun.GA_ShiHun_C.OnCompleted_C69A91EC4953C32A1D57E293FB2DF239 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_AE2BF7D44DF54C32019CFC86DE771C08(); // Function GA_ShiHun.GA_ShiHun_C.OnSync_AE2BF7D44DF54C32019CFC86DE771C08 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_ShiHun.GA_ShiHun_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ShiHun.GA_ShiHun_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MultiSetLocation(); // Function GA_ShiHun.GA_ShiHun_C.MultiSetLocation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ShiHun(int32_t EntryPoint); // Function GA_ShiHun.GA_ShiHun_C.ExecuteUbergraph_GA_ShiHun // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

