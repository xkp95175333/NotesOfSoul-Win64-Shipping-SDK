// WidgetBlueprintGeneratedClass WBP_AddSceorPanel.WBP_AddSceorPanel_C
// Size: 0x2d0 (Inherited: 0x260)
struct UWBP_AddSceorPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* AddScoreText; // 0x268(0x08)
	struct UScrollBox* ExtraAddScoreBox; // 0x270(0x08)
	struct UImage* TypeImage; // 0x278(0x08)
	struct UTextBlock* TypeText; // 0x280(0x08)
	enum class E_AddScoreType ScoreType; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FText ScoreText; // 0x290(0x18)
	struct FText Gain; // 0x2a8(0x18)
	struct TArray<int32_t> AllFightScore; // 0x2c0(0x10)

	void Initialize(struct UTexture2D* Texture, struct FText InText, struct FText Type); // Function WBP_AddSceorPanel.WBP_AddSceorPanel_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_AddSceorPanel.WBP_AddSceorPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_AddSceorPanel(int32_t EntryPoint); // Function WBP_AddSceorPanel.WBP_AddSceorPanel_C.ExecuteUbergraph_WBP_AddSceorPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

