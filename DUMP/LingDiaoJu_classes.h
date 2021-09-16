// BlueprintGeneratedClass LingDiaoJu.LingDiaoJu_C
// Size: 0x240 (Inherited: 0x228)
struct ALingDiaoJu_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct USoundBase* Sound; // 0x230(0x08)
	struct ULGUIPrefab* ScreenUIRoot; // 0x238(0x08)

	void ReceiveBeginPlay(); // Function LingDiaoJu.LingDiaoJu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void GM(struct FString GMCommand); // Function LingDiaoJu.LingDiaoJu_C.GM // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartMatch(int32_t MatchType, int32_t CampType); // Function LingDiaoJu.LingDiaoJu_C.StartMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_LingDiaoJu(int32_t EntryPoint); // Function LingDiaoJu.LingDiaoJu_C.ExecuteUbergraph_LingDiaoJu // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

