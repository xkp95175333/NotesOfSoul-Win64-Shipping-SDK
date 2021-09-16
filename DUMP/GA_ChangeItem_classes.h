// BlueprintGeneratedClass GA_ChangeItem.GA_ChangeItem_C
// Size: 0x4b8 (Inherited: 0x490)
struct UGA_ChangeItem_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UObject* Received Object; // 0x498(0x08)
	struct UKxInventoryObject* Cur Actived Item; // 0x4a0(0x08)
	struct UKxInventoryComponent* Inventory Comp; // 0x4a8(0x08)
	struct ABP_Flashlight_C* FlashlightInstance; // 0x4b0(0x08)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_ChangeItem.GA_ChangeItem_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ChangeItem.GA_ChangeItem_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ChangeItem(int32_t EntryPoint); // Function GA_ChangeItem.GA_ChangeItem_C.ExecuteUbergraph_GA_ChangeItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

