// BlueprintGeneratedClass RollTextureCom.RollTextureCom_C
// Size: 0x198 (Inherited: 0x151)
struct URollTextureCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t Index; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct UTexture2D* Texture; // 0x168(0x08)
	struct UBP_BulletinBoardAndTagsPanelCom_C* Parent; // 0x170(0x08)
	struct UUIButtonComponent* RollTextureButton; // 0x178(0x08)
	struct FColor HighlightRollColor; // 0x180(0x04)
	struct FColor NormalRollColor; // 0x184(0x04)
	struct FMulticastInlineDelegate OnClickRollBtn; // 0x188(0x10)

	void SetButtonState(bool bIsHighLight); // Function RollTextureCom.RollTextureCom_C.SetButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(int32_t Index, struct UTexture2D* Texture, struct UBP_BulletinBoardAndTagsPanelCom_C* Parent); // Function RollTextureCom.RollTextureCom_C.SetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitRollTextureCom(); // Function RollTextureCom.RollTextureCom_C.InitRollTextureCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function RollTextureCom.RollTextureCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClickRollBtn(); // Function RollTextureCom.RollTextureCom_C.ClickRollBtn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnParentTextureUpdate(int32_t Index); // Function RollTextureCom.RollTextureCom_C.OnParentTextureUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_RollTextureCom(int32_t EntryPoint); // Function RollTextureCom.RollTextureCom_C.ExecuteUbergraph_RollTextureCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnClickRollBtn__DelegateSignature(int32_t Index, struct UTexture2D* Texture); // Function RollTextureCom.RollTextureCom_C.OnClickRollBtn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

