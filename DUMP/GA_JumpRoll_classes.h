// BlueprintGeneratedClass GA_JumpRoll.GA_JumpRoll_C
// Size: 0x498 (Inherited: 0x490)
struct UGA_JumpRoll_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)

	void EventReceived_12B851DE48E8E5BD11EB96BFDC42284F(struct FGameplayEventData Payload); // Function GA_JumpRoll.GA_JumpRoll_C.EventReceived_12B851DE48E8E5BD11EB96BFDC42284F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_JumpRoll.GA_JumpRoll_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_JumpRoll.GA_JumpRoll_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_JumpRoll(int32_t EntryPoint); // Function GA_JumpRoll.GA_JumpRoll_C.ExecuteUbergraph_GA_JumpRoll // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

