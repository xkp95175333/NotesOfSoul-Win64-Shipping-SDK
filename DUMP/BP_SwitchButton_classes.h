// BlueprintGeneratedClass BP_SwitchButton.BP_SwitchButton_C
// Size: 0x170 (Inherited: 0x151)
struct UBP_SwitchButton_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	enum class E_SwitchButtonType ButtonType; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UUIToggleComponent* UIToggleComponent; // 0x168(0x08)

	void ClickVFX(bool Select); // Function BP_SwitchButton.BP_SwitchButton_C.ClickVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSprite(struct ULGUISpriteData* NormalSprite, struct ULGUISpriteData* HighlightedSprite, struct ULGUISpriteData* PressedSprote); // Function BP_SwitchButton.BP_SwitchButton_C.SetSprite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitializeSprite(); // Function BP_SwitchButton.BP_SwitchButton_C.InitializeSprite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchTexture(); // Function BP_SwitchButton.BP_SwitchButton_C.SwitchTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_SwitchButton.BP_SwitchButton_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SwitchButton.BP_SwitchButton_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SwitchButton(int32_t EntryPoint); // Function BP_SwitchButton.BP_SwitchButton_C.ExecuteUbergraph_BP_SwitchButton // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

