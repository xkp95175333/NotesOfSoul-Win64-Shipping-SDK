// BlueprintGeneratedClass BP_OperationInfoCom.BP_OperationInfoCom_C
// Size: 0x268 (Inherited: 0x151)
struct UBP_OperationInfoCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	bool bVisible; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UUISprite* OperationBox; // 0x168(0x08)
	float PivotX; // 0x170(0x04)
	float PivotY; // 0x174(0x04)
	float anchorOffsetX; // 0x178(0x04)
	float anchorOffsetY; // 0x17c(0x04)
	struct FVector2D CanvasScale; // 0x180(0x08)
	float MaxWidth; // 0x188(0x04)
	float MaxHight; // 0x18c(0x04)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x190(0x08)
	bool bEnter; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	int32_t UserID; // 0x19c(0x04)
	int32_t MaxCount; // 0x1a0(0x04)
	struct FConfirmCoinData price; // 0x1a4(0x14)
	enum class ECommodityType CommodityType; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct UUIButtonComponent* ButtonSolve; // 0x1c0(0x08)
	struct UUIButtonComponent* ButtonUser; // 0x1c8(0x08)
	struct ULGUIPointerEventData* Event Data; // 0x1d0(0x08)
	struct UUIButtonComponent* ButtonGift; // 0x1d8(0x08)
	struct TArray<enum class ECommodityType> TypeCanCallUse; // 0x1e0(0x10)
	struct TArray<enum class ECommodityType> TypeCanCallSolve; // 0x1f0(0x10)
	struct TArray<enum class ECommodityType> TypeCanCallGift; // 0x200(0x10)
	int32_t EffectType; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct UDataTable* AllAccessoriesData; // 0x218(0x08)
	struct UDataTable* HumanSuitData; // 0x220(0x08)
	struct UDataTable* GhostSuitData; // 0x228(0x08)
	struct UDataTable* SpecialData; // 0x230(0x08)
	struct UDataTable* ExperienceData; // 0x238(0x08)
	struct UUIButtonComponent* ButtonDonate; // 0x240(0x08)
	struct TArray<int32_t> SpecialItems; // 0x248(0x10)
	int32_t RenameCardID; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UUIButtonComponent* ButtonSale; // 0x260(0x08)

	bool OnPointerDeselect(struct ULGUIBaseEventData* eventData); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OnPointerDeselect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnPointerSelect(struct ULGUIBaseEventData* eventData); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OnPointerSelect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SaleButtonCheck(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.SaleButtonCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DonateButtonCheck(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.DonateButtonCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GiftButtonCheck(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.GiftButtonCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SloveButtonCheck(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.SloveButtonCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UseButtonCheck(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.UseButtonCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsSpecialItem(int32_t ItemToFind, bool bIsSpecial); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.IsSpecialItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserItem(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.UserItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ItemDonate(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.ItemDonate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool IsSkinOwner(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.IsSkinOwner // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetButtomVisable(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.SetButtomVisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Up Data Data(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.Up Data Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPivot(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.SetPivot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitOperationInfo(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.InitOperationInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OpenItemInfo(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OpenItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseItemInfo(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.CloseItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MouseInputEvent(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.MouseInputEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEventEnter(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OnEventEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEventExit(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OnEventExit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnUserItem(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OnUserItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSolveItem(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OnSolveItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSendGift(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OnSendGift // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickDonate(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OnClickDonate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSendSale(); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.OnSendSale // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OperationInfoCom(int32_t EntryPoint); // Function BP_OperationInfoCom.BP_OperationInfoCom_C.ExecuteUbergraph_BP_OperationInfoCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

