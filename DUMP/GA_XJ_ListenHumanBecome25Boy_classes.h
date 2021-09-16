// BlueprintGeneratedClass GA_XJ_ListenHumanBecome25Boy.GA_XJ_ListenHumanBecome25Boy_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_XJ_ListenHumanBecome25Boy_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	bool AllHumanBecome25Boy; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct ANOS_GMArenaBase* NOS_GMBase; // 0x4a0(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_ListenHumanBecome25Boy.GA_XJ_ListenHumanBecome25Boy_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CE_Loop(); // Function GA_XJ_ListenHumanBecome25Boy.GA_XJ_ListenHumanBecome25Boy_C.CE_Loop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XJ_ListenHumanBecome25Boy.GA_XJ_ListenHumanBecome25Boy_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_ListenHumanBecome25Boy(int32_t EntryPoint); // Function GA_XJ_ListenHumanBecome25Boy.GA_XJ_ListenHumanBecome25Boy_C.ExecuteUbergraph_GA_XJ_ListenHumanBecome25Boy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

