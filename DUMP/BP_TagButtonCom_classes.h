// BlueprintGeneratedClass BP_TagButtonCom.BP_TagButtonCom_C
// Size: 0x2b0 (Inherited: 0x151)
struct UBP_TagButtonCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t CategoryID; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct TMap<int32_t, struct FString> ChildCategorys; // 0x168(0x50)
	int32_t Level; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct UUIItem* DropDownBox; // 0x1c0(0x08)
	struct UBP_BulletinBoardAndTagsPanelCom_C* Parent; // 0x1c8(0x08)
	struct UUIButtonComponent* MainButton; // 0x1d0(0x08)
	struct UUIItem* ButtonDropDownBox; // 0x1d8(0x08)
	struct UUIText* ButtonText; // 0x1e0(0x08)
	struct UUIItem* Root; // 0x1e8(0x08)
	float DefaultWidth; // 0x1f0(0x04)
	float DefaultSpace; // 0x1f4(0x04)
	struct UUISprite* ButtonDropDownPic; // 0x1f8(0x08)
	struct TArray<struct UBP_TagButtonCom_C*> ChildBtns; // 0x200(0x10)
	struct FColor NormalCorlor; // 0x210(0x04)
	struct FColor HoverColor; // 0x214(0x04)
	struct FLinearColor NormalText; // 0x218(0x10)
	struct FColor HIghLightSpr; // 0x228(0x04)
	struct FLinearColor HighTextColor; // 0x22c(0x10)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct FString Name; // 0x240(0x10)
	bool bIsOpen; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TMap<struct FString, struct FText> LocalTextMap; // 0x258(0x50)
	struct UDataTable* LocalTextTable; // 0x2a8(0x08)

	void FindLocalText(struct FString Text, struct FText Array Element); // Function BP_TagButtonCom.BP_TagButtonCom_C.FindLocalText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitLocalText(); // Function BP_TagButtonCom.BP_TagButtonCom_C.InitLocalText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitWidget(); // Function BP_TagButtonCom.BP_TagButtonCom_C.InitWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetButtonState(bool bIsHighLight); // Function BP_TagButtonCom.BP_TagButtonCom_C.SetButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowDropArrow(bool Active); // Function BP_TagButtonCom.BP_TagButtonCom_C.ShowDropArrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSubBtn(); // Function BP_TagButtonCom.BP_TagButtonCom_C.InitSubBtn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(int32_t CategoryID, int32_t Level, struct FString Name, struct UBP_BulletinBoardAndTagsPanelCom_C* Parent); // Function BP_TagButtonCom.BP_TagButtonCom_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitTagButtonCom(); // Function BP_TagButtonCom.BP_TagButtonCom_C.InitTagButtonCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_TagButtonCom.BP_TagButtonCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TagButtonCom.BP_TagButtonCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickBtn(); // Function BP_TagButtonCom.BP_TagButtonCom_C.OnClickBtn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectCategoryNotify(int32_t Category); // Function BP_TagButtonCom.BP_TagButtonCom_C.SelectCategoryNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TagButtonCom(int32_t EntryPoint); // Function BP_TagButtonCom.BP_TagButtonCom_C.ExecuteUbergraph_BP_TagButtonCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

