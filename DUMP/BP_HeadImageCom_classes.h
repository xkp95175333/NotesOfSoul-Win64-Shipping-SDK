// BlueprintGeneratedClass BP_HeadImageCom.BP_HeadImageCom_C
// Size: 0x240 (Inherited: 0x151)
struct UBP_HeadImageCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUITexture* DownArrow; // 0x160(0x08)
	struct UUITexture* UpArrow; // 0x168(0x08)
	struct UUIItem* Line; // 0x170(0x08)
	struct UDataTable* HumanDataTable; // 0x178(0x08)
	struct UDataTable* GhostDataTable; // 0x180(0x08)
	struct TArray<struct FCharacterInfo> HumanInfoList; // 0x188(0x10)
	struct TArray<struct FCharacterInfo> GhostInfoList; // 0x198(0x10)
	bool bHuman; // 0x1a8(0x01)
	bool bOpen; // 0x1a9(0x01)
	char pad_1AA[0x6]; // 0x1aa(0x06)
	struct TArray<struct UBP_RoleLineCom_C*> HumanComList; // 0x1b0(0x10)
	struct TArray<struct UBP_RoleLineCom_C*> GhostComList; // 0x1c0(0x10)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x1d0(0x08)
	int32_t CharacterID; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct UUIToggleComponent* Ghost; // 0x1e0(0x08)
	struct UUIToggleComponent* Human; // 0x1e8(0x08)
	struct UUIText* GhostText; // 0x1f0(0x08)
	struct UUIText* HumanText; // 0x1f8(0x08)
	struct FLinearColor HighTextColor; // 0x200(0x10)
	struct FLinearColor NormalTextColor; // 0x210(0x10)
	struct FColor HighSprintColor; // 0x220(0x04)
	struct FColor Normal Sprint Color; // 0x224(0x04)
	struct FColor NormalSprintColor; // 0x228(0x04)
	int32_t MaxLineNum; // 0x22c(0x04)
	struct UBP_BuyCharacterCom_C* BuyCharacterCom; // 0x230(0x08)
	struct UBP_RoleLineCom_C* CurLineCom; // 0x238(0x08)

	void ConfirmSelectCharacter(); // Function BP_HeadImageCom.BP_HeadImageCom_C.ConfirmSelectCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterIDByRoot(int32_t CharacterID); // Function BP_HeadImageCom.BP_HeadImageCom_C.SetCharacterIDByRoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckSelectCharacter(); // Function BP_HeadImageCom.BP_HeadImageCom_C.CheckSelectCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetToggleSelect(bool Select, struct UUIText* TextCom, struct UUIToggleComponent* ToggleCom); // Function BP_HeadImageCom.BP_HeadImageCom_C.SetToggleSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGhostCharacterList(); // Function BP_HeadImageCom.BP_HeadImageCom_C.UpdateGhostCharacterList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHumanCharacterList(); // Function BP_HeadImageCom.BP_HeadImageCom_C.UpdateHumanCharacterList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init Ghost Character List(); // Function BP_HeadImageCom.BP_HeadImageCom_C.Init Ghost Character List // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetInfoListByRange(int32_t Star, int32_t End, struct TArray<struct FCharacterInfo> List, struct TArray<struct FCharacterInfo> InfoList); // Function BP_HeadImageCom.BP_HeadImageCom_C.GetInfoListByRange // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanCharacterList(); // Function BP_HeadImageCom.BP_HeadImageCom_C.InitHumanCharacterList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_HeadImageCom.BP_HeadImageCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHeadImage(); // Function BP_HeadImageCom.BP_HeadImageCom_C.InitHeadImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_HeadImageCom.BP_HeadImageCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_HeadImageCom.BP_HeadImageCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClickLinePanel(); // Function BP_HeadImageCom.BP_HeadImageCom_C.ClickLinePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickHuman(bool IsOn); // Function BP_HeadImageCom.BP_HeadImageCom_C.OnClickHuman // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickGhost(bool IsOn); // Function BP_HeadImageCom.BP_HeadImageCom_C.OnClickGhost // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickByID(int32_t ID); // Function BP_HeadImageCom.BP_HeadImageCom_C.OnClickByID // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHumanConfig(); // Function BP_HeadImageCom.BP_HeadImageCom_C.UpdateHumanConfig // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGhostConfig(); // Function BP_HeadImageCom.BP_HeadImageCom_C.UpdateGhostConfig // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelByID(int32_t ID); // Function BP_HeadImageCom.BP_HeadImageCom_C.OnCancelByID // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectetLIineByItem(struct UBP_RoleLineCom_C* Cur); // Function BP_HeadImageCom.BP_HeadImageCom_C.SelectetLIineByItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_HeadImageCom(int32_t EntryPoint); // Function BP_HeadImageCom.BP_HeadImageCom_C.ExecuteUbergraph_BP_HeadImageCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

