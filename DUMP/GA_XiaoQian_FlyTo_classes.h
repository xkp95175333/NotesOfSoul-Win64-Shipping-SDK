// BlueprintGeneratedClass GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C
// Size: 0x4c0 (Inherited: 0x490)
struct UGA_XiaoQian_FlyTo_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FVector TargetLocation; // 0x498(0x0c)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct ABP_NieXiaoQian_C* Xiao Qian; // 0x4a8(0x08)
	struct UAbilityTask_ApplyRootMotionMoveToForce* FlyTask; // 0x4b0(0x08)
	struct UNOS_PlayMontageAndWaitForEvent* Montage Task; // 0x4b8(0x08)

	void EventReceived_B646B2984A16CBDDD3076FA4348884D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.EventReceived_B646B2984A16CBDDD3076FA4348884D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_B646B2984A16CBDDD3076FA4348884D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.OnCancelled_B646B2984A16CBDDD3076FA4348884D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_B646B2984A16CBDDD3076FA4348884D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.OnInterrupted_B646B2984A16CBDDD3076FA4348884D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_B646B2984A16CBDDD3076FA4348884D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.OnBlendOut_B646B2984A16CBDDD3076FA4348884D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_B646B2984A16CBDDD3076FA4348884D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.OnCompleted_B646B2984A16CBDDD3076FA4348884D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_5A0F1F0549EA54D88BF12D9FF2367BD6(float TimeWaited); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.OnPress_5A0F1F0549EA54D88BF12D9FF2367BD6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_3B315B2740A73661EAE8D8AB8FD95F4B(); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.OnSync_3B315B2740A73661EAE8D8AB8FD95F4B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOutAndDestinationReached_69AD87854A759D3096415599DAB04C8B(); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.OnTimedOutAndDestinationReached_69AD87854A759D3096415599DAB04C8B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTimedOut_69AD87854A759D3096415599DAB04C8B(); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.OnTimedOut_69AD87854A759D3096415599DAB04C8B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoQian_FlyTo(int32_t EntryPoint); // Function GA_XiaoQian_FlyTo.GA_XiaoQian_FlyTo_C.ExecuteUbergraph_GA_XiaoQian_FlyTo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

