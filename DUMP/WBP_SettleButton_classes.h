// WidgetBlueprintGeneratedClass WBP_SettleButton.WBP_SettleButton_C
// Size: 0x300 (Inherited: 0x260)
struct UWBP_SettleButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_23; // 0x268(0x08)
	enum class E_SettleButtonType Type; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	int32_t UID; // 0x274(0x04)
	struct TSoftObjectPtr<struct UTexture2D> HeadLcon; // 0x278(0x28)
	struct TSoftObjectPtr<struct UTexture2D> HeadLconBox; // 0x2a0(0x28)
	struct FText PlayerName; // 0x2c8(0x18)
	struct FText UserCharacter; // 0x2e0(0x18)
	int32_t TargetId; // 0x2f8(0x04)
	int32_t SelfID; // 0x2fc(0x04)

	void SetReportInfo(struct TSoftObjectPtr<struct UTexture2D> HeadLcon, struct TSoftObjectPtr<struct UTexture2D> HeadLconBox, struct FText PlayerName, struct FText UserCharacter, int32_t TargetId, int32_t SelfID); // Function WBP_SettleButton.WBP_SettleButton_C.SetReportInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateReportPanel(); // Function WBP_SettleButton.WBP_SettleButton_C.CreateReportPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_SettleButton.WBP_SettleButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_22_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettleButton.WBP_SettleButton_C.BndEvt__Button_22_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_SettleButton(int32_t EntryPoint); // Function WBP_SettleButton.WBP_SettleButton_C.ExecuteUbergraph_WBP_SettleButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

