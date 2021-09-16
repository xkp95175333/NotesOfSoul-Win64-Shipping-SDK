// WidgetBlueprintGeneratedClass WBP_DeadSpectatorUI.WBP_DeadSpectatorUI_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_DeadSpectatorUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeAway; // 0x268(0x08)
	struct UWidgetAnimation* DisPlay; // 0x270(0x08)
	struct UImage* BlackBG; // 0x278(0x08)
	struct UCanvasPanel* TipPanel; // 0x280(0x08)
	struct UWBP_VoiceIcon_C* WBP_VoiceIcon; // 0x288(0x08)
	struct ABP_DeadSpectatorPlayer_C* DeadSpectatorPlayer; // 0x290(0x08)

	void RemoveThisUI(); // Function WBP_DeadSpectatorUI.WBP_DeadSpectatorUI_C.RemoveThisUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_DeadSpectatorUI.WBP_DeadSpectatorUI_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void FadeAwayEnd(); // Function WBP_DeadSpectatorUI.WBP_DeadSpectatorUI_C.FadeAwayEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_DeadSpectatorUI(int32_t EntryPoint); // Function WBP_DeadSpectatorUI.WBP_DeadSpectatorUI_C.ExecuteUbergraph_WBP_DeadSpectatorUI // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

