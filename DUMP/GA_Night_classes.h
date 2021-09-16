// BlueprintGeneratedClass GA_Night.GA_Night_C
// Size: 0x508 (Inherited: 0x490)
struct UGA_Night_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float Duration; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct UAbilityTask_WaitInputPress* Async Task; // 0x4a0(0x08)
	struct ANOS_PlayerBase* OriginActor; // 0x4a8(0x08)
	struct UAbilityTask_WaitDelay* NightTask; // 0x4b0(0x08)
	struct UAbilityTask_WaitDelay* NightEffectTask; // 0x4b8(0x08)
	struct ANOS_GSLangRenSha* GS_LR; // 0x4c0(0x08)
	bool NewVar_1; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct ANOS_PlayerBase* ActorToConvert; // 0x4d0(0x08)
	struct UAbilityTask_WaitDelay* LangRenCdTask; // 0x4d8(0x08)
	float ElementHealth; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct FString AvatorType; // 0x4e8(0x10)
	int32_t Random; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct UAbilityTask_WaitDelay* Delete; // 0x500(0x08)

	void GetConvertActor(struct ANOS_PlayerBase* Actor, struct ANOS_PlayerBase* ConvertActor); // Function GA_Night.GA_Night_C.GetConvertActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SwitchUI(struct ANOS_PlayerBase* Actor); // Function GA_Night.GA_Night_C.SwitchUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_6F41AB3F468A1C47FAF5C5ADA2164733(); // Function GA_Night.GA_Night_C.OnFinish_6F41AB3F468A1C47FAF5C5ADA2164733 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_Night.GA_Night_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnShield(); // Function GA_Night.GA_Night_C.SpawnShield // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Night(int32_t EntryPoint); // Function GA_Night.GA_Night_C.ExecuteUbergraph_GA_Night // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

