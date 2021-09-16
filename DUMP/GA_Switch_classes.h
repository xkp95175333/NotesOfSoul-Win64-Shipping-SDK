// BlueprintGeneratedClass GA_Switch.GA_Switch_C
// Size: 0x4cc (Inherited: 0x490)
struct UGA_Switch_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UAbilityTask_WaitDelay* LangRenCdTask; // 0x498(0x08)
	struct ANOS_PlayerBase* ActorToConvert; // 0x4a0(0x08)
	struct ANOS_GSLangRenSha* GS_LR; // 0x4a8(0x08)
	struct ANOS_PlayerBase* OriginActor; // 0x4b0(0x08)
	float Duration; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct ANOS_PSLangRenSha* LRSPS; // 0x4c0(0x08)
	float LRSTransformStealthTime; // 0x4c8(0x04)

	void SetActorHidden(struct AActor* Actor, bool IsHidden); // Function GA_Switch.GA_Switch_C.SetActorHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Log with Ability Name(struct FString str); // Function GA_Switch.GA_Switch_C.Log with Ability Name // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetConvertActor(struct ANOS_PlayerBase* Actor, struct ANOS_PlayerBase* ConvertActor); // Function GA_Switch.GA_Switch_C.GetConvertActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnFinish_AF94B9B94DA128C953995FB5A0883B98(); // Function GA_Switch.GA_Switch_C.OnFinish_AF94B9B94DA128C953995FB5A0883B98 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Switch.GA_Switch_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ConvertActor(struct ANOS_PlayerBase* OptionActor); // Function GA_Switch.GA_Switch_C.ConvertActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_Switch.GA_Switch_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetHiddenPost (bool IsHidden, struct ANOS_PlayerBase* Actor); // Function GA_Switch.GA_Switch_C.SetHiddenPost  // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetActorTransform(struct FTransform Location, struct AActor* Actor); // Function GA_Switch.GA_Switch_C.SetActorTransform // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransformWolfDealing(struct AActor* Actor); // Function GA_Switch.GA_Switch_C.TransformWolfDealing // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Switch(int32_t EntryPoint); // Function GA_Switch.GA_Switch_C.ExecuteUbergraph_GA_Switch // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

