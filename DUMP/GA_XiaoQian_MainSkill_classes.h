// BlueprintGeneratedClass GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C
// Size: 0x4cc (Inherited: 0x490)
struct UGA_XiaoQian_MainSkill_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_NieXiaoQian_C* OwnerPawn; // 0x498(0x08)
	bool IsCanShot; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	struct FVector Location; // 0x4a4(0x0c)
	struct UNOS_WaitTraceByObjectTypes* Async Task_1; // 0x4b0(0x08)
	struct ABP_AimedDecal_C* DecalActor; // 0x4b8(0x08)
	bool IsRemote; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	struct FActiveGameplayEffectHandle FreezeNorGE; // 0x4c4(0x08)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void OnPress_750326F54E6C43B2F1E940A5FDDAF8A0(float TimeWaited); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.OnPress_750326F54E6C43B2F1E940A5FDDAF8A0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_6FA4745A4EE2B411473B1A98EEC09DCC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.EventReceived_6FA4745A4EE2B411473B1A98EEC09DCC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_6FA4745A4EE2B411473B1A98EEC09DCC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.OnCancelled_6FA4745A4EE2B411473B1A98EEC09DCC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_6FA4745A4EE2B411473B1A98EEC09DCC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.OnInterrupted_6FA4745A4EE2B411473B1A98EEC09DCC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_6FA4745A4EE2B411473B1A98EEC09DCC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.OnBlendOut_6FA4745A4EE2B411473B1A98EEC09DCC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_6FA4745A4EE2B411473B1A98EEC09DCC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.OnCompleted_6FA4745A4EE2B411473B1A98EEC09DCC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceNoImpact_8CABD0D74455EA3395D2FBBCACA415A1(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.OnTraceNoImpact_8CABD0D74455EA3395D2FBBCACA415A1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceImpact_8CABD0D74455EA3395D2FBBCACA415A1(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.OnTraceImpact_8CABD0D74455EA3395D2FBBCACA415A1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_981A0A324BA693A32C38738904661581(float TimeWaited); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.OnPress_981A0A324BA693A32C38738904661581 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_B6733EF54DC519633D396B8424A9E71B(float TimeWaited); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.OnPress_B6733EF54DC519633D396B8424A9E71B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoQian_MainSkill(int32_t EntryPoint); // Function GA_XiaoQian_MainSkill.GA_XiaoQian_MainSkill_C.ExecuteUbergraph_GA_XiaoQian_MainSkill // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

