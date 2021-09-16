// BlueprintGeneratedClass GA_PlaySoloAnim.GA_PlaySoloAnim_C
// Size: 0x4a4 (Inherited: 0x490)
struct UGA_PlaySoloAnim_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FVector BeginLocation; // 0x498(0x0c)

	void OnCancelled_3A86511B408148874482489916BC4D3B(); // Function GA_PlaySoloAnim.GA_PlaySoloAnim_C.OnCancelled_3A86511B408148874482489916BC4D3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_3A86511B408148874482489916BC4D3B(); // Function GA_PlaySoloAnim.GA_PlaySoloAnim_C.OnInterrupted_3A86511B408148874482489916BC4D3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_3A86511B408148874482489916BC4D3B(); // Function GA_PlaySoloAnim.GA_PlaySoloAnim_C.OnBlendOut_3A86511B408148874482489916BC4D3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_3A86511B408148874482489916BC4D3B(); // Function GA_PlaySoloAnim.GA_PlaySoloAnim_C.OnCompleted_3A86511B408148874482489916BC4D3B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_PlaySoloAnim.GA_PlaySoloAnim_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function GA_PlaySoloAnim.GA_PlaySoloAnim_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_PlaySoloAnim(int32_t EntryPoint); // Function GA_PlaySoloAnim.GA_PlaySoloAnim_C.ExecuteUbergraph_GA_PlaySoloAnim // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

