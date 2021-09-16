// BlueprintGeneratedClass BP_RoleLineCom.BP_RoleLineCom_C
// Size: 0x255 (Inherited: 0x151)
struct UBP_RoleLineCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct FCharacterInfo> CharacterInfoList; // 0x160(0x10)
	struct FCharacterInfo SelfInfo; // 0x170(0xa8)
	bool bVisible; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct TArray<struct UBP_HeadItemCom_C*> ItemComList; // 0x220(0x10)
	bool bAlways; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct UBP_HeadImageCom_C* BP_ParentCom; // 0x238(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x240(0x08)
	struct UBP_HeadItemCom_C* CurrentItemCom; // 0x248(0x08)
	int32_t CharacterID; // 0x250(0x04)
	bool bSelected; // 0x254(0x01)

	void UpdateData(); // Function BP_RoleLineCom.BP_RoleLineCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_RoleLineCom.BP_RoleLineCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitRoleLine(); // Function BP_RoleLineCom.BP_RoleLineCom_C.InitRoleLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_RoleLineCom.BP_RoleLineCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetVisble(bool Visble); // Function BP_RoleLineCom.BP_RoleLineCom_C.SetVisble // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectItemByItem(struct UBP_HeadItemCom_C* Com); // Function BP_RoleLineCom.BP_RoleLineCom_C.SelectItemByItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectItemByID(int32_t ID); // Function BP_RoleLineCom.BP_RoleLineCom_C.SelectItemByID // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CancelCurrentItem(); // Function BP_RoleLineCom.BP_RoleLineCom_C.CancelCurrentItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RoleLineCom(int32_t EntryPoint); // Function BP_RoleLineCom.BP_RoleLineCom_C.ExecuteUbergraph_BP_RoleLineCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

