// BlueprintGeneratedClass GA_NanGongTalent.GA_NanGongTalent_C
// Size: 0x4c0 (Inherited: 0x4a0)
struct UGA_NanGongTalent_C : UGA_RGetReady_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	float StorageTime; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct UAbilityTask_WaitDelay* StorageTask; // 0x4b0(0x08)
	struct UWBP_InteractProgressUI_C* StorageUI; // 0x4b8(0x08)

	void OnRelease_EF48E774446E80E6DE15359A1E5DA534(float TimeHeld); // Function GA_NanGongTalent.GA_NanGongTalent_C.OnRelease_EF48E774446E80E6DE15359A1E5DA534 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_6F4B81064BD668E55813AFBF04586CFA(); // Function GA_NanGongTalent.GA_NanGongTalent_C.OnFinish_6F4B81064BD668E55813AFBF04586CFA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_E6B4D4C44DE9FF11708FD0AE75305FC9(); // Function GA_NanGongTalent.GA_NanGongTalent_C.OnSync_E6B4D4C44DE9FF11708FD0AE75305FC9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_NanGongTalent.GA_NanGongTalent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NanGongTalent.GA_NanGongTalent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_NanGongTalent(int32_t EntryPoint); // Function GA_NanGongTalent.GA_NanGongTalent_C.ExecuteUbergraph_GA_NanGongTalent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

