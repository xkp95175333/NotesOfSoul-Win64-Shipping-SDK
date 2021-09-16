// BlueprintGeneratedClass GA_Teleporter.GA_Teleporter_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_Teleporter_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FActiveGameplayEffectHandle InteractGEHandle; // 0x498(0x08)

	void OnCancelled_C24AB79542DF4BB6A15439B597B0954B(); // Function GA_Teleporter.GA_Teleporter_C.OnCancelled_C24AB79542DF4BB6A15439B597B0954B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_C24AB79542DF4BB6A15439B597B0954B(); // Function GA_Teleporter.GA_Teleporter_C.OnInterrupted_C24AB79542DF4BB6A15439B597B0954B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_C24AB79542DF4BB6A15439B597B0954B(); // Function GA_Teleporter.GA_Teleporter_C.OnBlendOut_C24AB79542DF4BB6A15439B597B0954B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_C24AB79542DF4BB6A15439B597B0954B(); // Function GA_Teleporter.GA_Teleporter_C.OnCompleted_C24AB79542DF4BB6A15439B597B0954B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_9CC45D9741303ACE798A06A9002EA059(float TimeHeld); // Function GA_Teleporter.GA_Teleporter_C.OnRelease_9CC45D9741303ACE798A06A9002EA059 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_6AA4C2294A66F88BF1943DAF2B3ED9A3(); // Function GA_Teleporter.GA_Teleporter_C.OnSync_6AA4C2294A66F88BF1943DAF2B3ED9A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_ABA4A2C147D0E72564A41F9EFAAD4E0D(); // Function GA_Teleporter.GA_Teleporter_C.OnSync_ABA4A2C147D0E72564A41F9EFAAD4E0D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_64665227454AEBFDCA7720A648AFDFDA(); // Function GA_Teleporter.GA_Teleporter_C.OnFinish_64665227454AEBFDCA7720A648AFDFDA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_74F4DE4A41A05BB6703DD49BFA7F9702(); // Function GA_Teleporter.GA_Teleporter_C.OnFinish_74F4DE4A41A05BB6703DD49BFA7F9702 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Teleporter.GA_Teleporter_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Teleporter.GA_Teleporter_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Teleporter(int32_t EntryPoint); // Function GA_Teleporter.GA_Teleporter_C.ExecuteUbergraph_GA_Teleporter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

