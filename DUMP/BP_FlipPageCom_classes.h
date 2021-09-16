// BlueprintGeneratedClass BP_FlipPageCom.BP_FlipPageCom_C
// Size: 0x1a8 (Inherited: 0x151)
struct UBP_FlipPageCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t MaxPage; // 0x160(0x04)
	int32_t CurrentPage; // 0x164(0x04)
	struct UUIButtonComponent* MulSub; // 0x168(0x08)
	struct UUIButtonComponent* sub; // 0x170(0x08)
	struct UUIButtonComponent* Add; // 0x178(0x08)
	struct UUIButtonComponent* MulAdd; // 0x180(0x08)
	struct UUIText* CurrentPageText; // 0x188(0x08)
	struct UUIText* TotalPageText; // 0x190(0x08)
	struct FMulticastInlineDelegate PageChange; // 0x198(0x10)

	void AddPage(int32_t Value); // Function BP_FlipPageCom.BP_FlipPageCom_C.AddPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateButtonState(); // Function BP_FlipPageCom.BP_FlipPageCom_C.UpdateButtonState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetData(int32_t MaxPage, int32_t CurrentPage); // Function BP_FlipPageCom.BP_FlipPageCom_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitFlipPanel(); // Function BP_FlipPageCom.BP_FlipPageCom_C.InitFlipPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_FlipPageCom.BP_FlipPageCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickAdd(); // Function BP_FlipPageCom.BP_FlipPageCom_C.OnClickAdd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSub(); // Function BP_FlipPageCom.BP_FlipPageCom_C.OnClickSub // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickMulAdd(); // Function BP_FlipPageCom.BP_FlipPageCom_C.OnClickMulAdd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickMulSub(); // Function BP_FlipPageCom.BP_FlipPageCom_C.OnClickMulSub // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_FlipPageCom(int32_t EntryPoint); // Function BP_FlipPageCom.BP_FlipPageCom_C.ExecuteUbergraph_BP_FlipPageCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void PageChange__DelegateSignature(int32_t NewPage); // Function BP_FlipPageCom.BP_FlipPageCom_C.PageChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

