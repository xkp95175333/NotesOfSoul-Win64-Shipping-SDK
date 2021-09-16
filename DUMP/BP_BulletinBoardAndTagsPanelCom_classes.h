// BlueprintGeneratedClass BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C
// Size: 0x338 (Inherited: 0x151)
struct UBP_BulletinBoardAndTagsPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	enum class EShopType EShopType; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UUIItem* Panels; // 0x168(0x08)
	struct ULGUIBasePanel* CurrentCom; // 0x170(0x08)
	struct ULGUIPrefab* MianPanel; // 0x178(0x08)
	struct ULGUIPrefab* ItemPanel; // 0x180(0x08)
	struct UDataTable* LocalData; // 0x188(0x08)
	int32_t RollIndex; // 0x190(0x04)
	struct FColor HoverColor; // 0x194(0x04)
	struct FColor NormalColor; // 0x198(0x04)
	struct FColor HIghLightSpr; // 0x19c(0x04)
	struct UUITexture* BulletinBoardBG; // 0x1a0(0x08)
	struct UDataTable* RollData; // 0x1a8(0x08)
	struct TArray<struct URollTextureCom_C*> RollTexture2DBtnArray; // 0x1b0(0x10)
	struct FColor NormalRollColor; // 0x1c0(0x04)
	struct FColor HighlightRollColor; // 0x1c4(0x04)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x1c8(0x08)
	struct FLinearColor NormalTextColor; // 0x1d0(0x10)
	struct FLinearColor HighTextColor; // 0x1e0(0x10)
	struct TMap<int32_t, struct FString> AllCategoryIDs; // 0x1f0(0x50)
	struct UUIItem* TagsPanel; // 0x240(0x08)
	struct TArray<struct UBP_TagButtonCom_C*> MenuBtns; // 0x248(0x10)
	struct FMulticastInlineDelegate OnSelectCategoryChanged; // 0x258(0x10)
	struct TArray<struct FNOS_Store> StoreData; // 0x268(0x10)
	struct FMulticastInlineDelegate OnRollTextureUpdate; // 0x278(0x10)
	struct UUIItem* IndexPanel; // 0x288(0x08)
	struct TMap<int32_t, struct UBP_BasePanel_C*> LGUIPanelComs; // 0x290(0x50)
	struct TMap<int32_t, struct ULGUIPrefab*> LGUIPrefabClassConfig; // 0x2e0(0x50)
	struct UDataTable* WidgetConfigTable; // 0x330(0x08)

	void GetDefaultClickID(int32_t ID1); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.GetDefaultClickID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CleanPanelComs(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.CleanPanelComs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickMenuBtn(int32_t CategoryID); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.OnClickMenuBtn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FindPanelCom(int32_t CategoryID, struct UBP_BasePanel_C* Value); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.FindPanelCom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CleanMenuBtns(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.CleanMenuBtns // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GenerateMenuBtn(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.GenerateMenuBtn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBulletinBoardAndTag(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.InitBulletinBoardAndTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HideCurrentCom(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.HideCurrentCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetShopType(enum class EShopType Type); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.SetShopType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeRollTexture2D(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.ChangeRollTexture2D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BindRollChangeEvent(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.BindRollChangeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCurrent(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.UpdateCurrent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BindCurrentUpdate(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.BindCurrentUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickRollBtn(int32_t Index, struct UTexture2D* Texture); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.ClickRollBtn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCharacterTypeChanged(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.OnCharacterTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectFirst(); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.SelectFirst // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BulletinBoardAndTagsPanelCom(int32_t EntryPoint); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.ExecuteUbergraph_BP_BulletinBoardAndTagsPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnRollTextureUpdate__DelegateSignature(int32_t Index); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.OnRollTextureUpdate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSelectCategoryChanged__DelegateSignature(int32_t CategoryID); // Function BP_BulletinBoardAndTagsPanelCom.BP_BulletinBoardAndTagsPanelCom_C.OnSelectCategoryChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

