// WidgetBlueprintGeneratedClass WBP_SmallScore.WBP_SmallScore_C
// Size: 0x299 (Inherited: 0x260)
struct UWBP_SmallScore_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* ScoreType; // 0x268(0x08)
	struct UTextBlock* SmallScore; // 0x270(0x08)
	bool IsHuman; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FText score; // 0x280(0x18)
	enum class EAddFightScoreType FightScore; // 0x298(0x01)

	void Construct(); // Function WBP_SmallScore.WBP_SmallScore_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_SmallScore(int32_t EntryPoint); // Function WBP_SmallScore.WBP_SmallScore_C.ExecuteUbergraph_WBP_SmallScore // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

