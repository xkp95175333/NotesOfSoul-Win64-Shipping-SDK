// WidgetBlueprintGeneratedClass WBP_Vote.WBP_Vote_C
// Size: 0x2b1 (Inherited: 0x260)
struct UWBP_Vote_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_BG; // 0x268(0x08)
	struct UImage* Image_Skill; // 0x270(0x08)
	struct UTextBlock* TextBlock_78; // 0x278(0x08)
	struct UWBP_CD_C* WBP_CD; // 0x280(0x08)
	struct UTexture2D* Skill; // 0x288(0x08)
	struct UTexture2D* BG; // 0x290(0x08)
	struct FText Text; // 0x298(0x18)
	enum class E_LangRenShaCdType CDType; // 0x2b0(0x01)

	void SetEnabled(bool bInIsEnabled); // Function WBP_Vote.WBP_Vote_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Vote.WBP_Vote_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetNightSkillCD(bool EnterCD); // Function WBP_Vote.WBP_Vote_C.SetNightSkillCD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NeedClearCD(bool bClear); // Function WBP_Vote.WBP_Vote_C.NeedClearCD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Vote(int32_t EntryPoint); // Function WBP_Vote.WBP_Vote_C.ExecuteUbergraph_WBP_Vote // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

