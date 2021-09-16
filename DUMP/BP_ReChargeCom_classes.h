// BlueprintGeneratedClass BP_ReChargeCom.BP_ReChargeCom_C
// Size: 0x1f0 (Inherited: 0x151)
struct UBP_ReChargeCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t MoneyValue; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct UUIText* RechargeTitleText; // 0x168(0x08)
	struct UUIText* NumText; // 0x170(0x08)
	struct UUIItem* Panel; // 0x178(0x08)
	struct UUIItem* MoneyPanel; // 0x180(0x08)
	struct UUIItem* RechargeResult; // 0x188(0x08)
	struct UUISprite* ResultIcon; // 0x190(0x08)
	struct UUIText* ResultText; // 0x198(0x08)
	struct TArray<struct FRechargeData> MoneyChildMap; // 0x1a0(0x10)
	struct ULGUIBasePanel* IntegrationCom; // 0x1b0(0x08)
	struct UUISprite* EndLine; // 0x1b8(0x08)
	struct TArray<struct UTexture2D*> WaitTextureList; // 0x1c0(0x10)
	int32_t WaitTextureCount; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct UUIItem* CurNumPanel; // 0x1d8(0x08)
	struct UUIItem* RechargeWait; // 0x1e0(0x08)
	struct UUIItem* ResultButton; // 0x1e8(0x08)

	void UpdateData(); // Function BP_ReChargeCom.BP_ReChargeCom_C.UpdateData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_ReChargeCom.BP_ReChargeCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitRecharge(); // Function BP_ReChargeCom.BP_ReChargeCom_C.InitRecharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_ReChargeCom.BP_ReChargeCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ReChargeCom.BP_ReChargeCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_ReChargeCom.BP_ReChargeCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OpenRechargePanel(); // Function BP_ReChargeCom.BP_ReChargeCom_C.OpenRechargePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseRechargePanel(); // Function BP_ReChargeCom.BP_ReChargeCom_C.CloseRechargePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRechargeResult(bool Succeed); // Function BP_ReChargeCom.BP_ReChargeCom_C.OnRechargeResult // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetRecharge(); // Function BP_ReChargeCom.BP_ReChargeCom_C.ResetRecharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void WaitRecharge(bool bWait); // Function BP_ReChargeCom.BP_ReChargeCom_C.WaitRecharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ContactCustomerService(); // Function BP_ReChargeCom.BP_ReChargeCom_C.ContactCustomerService // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAnchorOffsetX(float Value); // Function BP_ReChargeCom.BP_ReChargeCom_C.SetAnchorOffsetX // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAnchorOffsetY(float Value); // Function BP_ReChargeCom.BP_ReChargeCom_C.SetAnchorOffsetY // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateMoneyInfo(); // Function BP_ReChargeCom.BP_ReChargeCom_C.UpdateMoneyInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ReChargeCom(int32_t EntryPoint); // Function BP_ReChargeCom.BP_ReChargeCom_C.ExecuteUbergraph_BP_ReChargeCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

