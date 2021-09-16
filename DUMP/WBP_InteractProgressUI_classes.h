// WidgetBlueprintGeneratedClass WBP_InteractProgressUI.WBP_InteractProgressUI_C
// Size: 0x28c (Inherited: 0x260)
struct UWBP_InteractProgressUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* ProgressBar_183; // 0x268(0x08)
	struct UObject* ActionCom; // 0x270(0x08)
	struct FTimerHandle AddTimer; // 0x278(0x08)
	float Time; // 0x280(0x04)
	struct FName Mode; // 0x284(0x08)

	void ChangeTimeFunc(float AddTime); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.ChangeTimeFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResumeProgress(); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.ResumeProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PauseProgress(); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.PauseProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeTotalTImeFunc(float AddTime); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.ChangeTotalTImeFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	float GetPercent_1(); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void AddPercent(); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.AddPercent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_Reduce(); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.CE_Reduce // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Destruct(); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeTime(float AddTime); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.ChangeTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_InteractProgressUI(int32_t EntryPoint); // Function WBP_InteractProgressUI.WBP_InteractProgressUI_C.ExecuteUbergraph_WBP_InteractProgressUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

