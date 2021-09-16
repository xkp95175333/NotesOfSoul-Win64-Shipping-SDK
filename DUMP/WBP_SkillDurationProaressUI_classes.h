// WidgetBlueprintGeneratedClass WBP_SkillDurationProaressUI.WBP_SkillDurationProaressUI_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_SkillDurationProaressUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* SkillBar; // 0x268(0x08)
	struct USlider* SkillSlider; // 0x270(0x08)
	float Time; // 0x278(0x04)
	struct FName Mode; // 0x27c(0x08)
	char pad_284[0x4]; // 0x284(0x04)
	struct FTimerHandle AddTimer; // 0x288(0x08)
	float CurTime; // 0x290(0x04)
	float Percent; // 0x294(0x04)

	float Add(float A); // Function WBP_SkillDurationProaressUI.WBP_SkillDurationProaressUI_C.Add // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	float Reduce(float A); // Function WBP_SkillDurationProaressUI.WBP_SkillDurationProaressUI_C.Reduce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void BeginTimer(float CurTime, struct FName Mode); // Function WBP_SkillDurationProaressUI.WBP_SkillDurationProaressUI_C.BeginTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SkillDurationProaressUI.WBP_SkillDurationProaressUI_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_SkillDurationProaressUI.WBP_SkillDurationProaressUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Ticker(); // Function WBP_SkillDurationProaressUI.WBP_SkillDurationProaressUI_C.Ticker // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_SkillDurationProaressUI(int32_t EntryPoint); // Function WBP_SkillDurationProaressUI.WBP_SkillDurationProaressUI_C.ExecuteUbergraph_WBP_SkillDurationProaressUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

