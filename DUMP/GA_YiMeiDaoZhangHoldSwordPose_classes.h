// BlueprintGeneratedClass GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C
// Size: 0x4c8 (Inherited: 0x4a0)
struct UGA_YiMeiDaoZhangHoldSwordPose_C : UGA_RGetReady_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	bool DoOnce; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct ABP_YiMeiDaoZhang_C* BP_YiMeiDaoZhang; // 0x4b0(0x08)
	struct UNOS_PlayMontageAndWaitForEvent* Task_AMStart; // 0x4b8(0x08)
	int32_t InitedConfig; // 0x4c0(0x04)
	float Config_Duration; // 0x4c4(0x04)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void InitData(); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_D0D32BF24183693BBA9E88B500072FA8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.EventReceived_D0D32BF24183693BBA9E88B500072FA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_D0D32BF24183693BBA9E88B500072FA8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.OnCancelled_D0D32BF24183693BBA9E88B500072FA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_D0D32BF24183693BBA9E88B500072FA8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.OnInterrupted_D0D32BF24183693BBA9E88B500072FA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_D0D32BF24183693BBA9E88B500072FA8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.OnBlendOut_D0D32BF24183693BBA9E88B500072FA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_D0D32BF24183693BBA9E88B500072FA8(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.OnCompleted_D0D32BF24183693BBA9E88B500072FA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_21576C28400A7B1776A37586971D1BEA(); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.Added_21576C28400A7B1776A37586971D1BEA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_820B0D924B9FD5CD317844942439024C(float TimeWaited); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.OnPress_820B0D924B9FD5CD317844942439024C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_22BA2F9448F0D6502B72CA9B1D011026(float TimeWaited); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.OnPress_22BA2F9448F0D6502B72CA9B1D011026 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_YiMeiDaoZhangHoldSwordPose(int32_t EntryPoint); // Function GA_YiMeiDaoZhangHoldSwordPose.GA_YiMeiDaoZhangHoldSwordPose_C.ExecuteUbergraph_GA_YiMeiDaoZhangHoldSwordPose // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

