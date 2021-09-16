// WidgetBlueprintGeneratedClass WBP_PlayerNameTag.WBP_PlayerNameTag_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_PlayerNameTag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* MicOn; // 0x268(0x08)
	struct ACharacter* Character; // 0x270(0x08)
	struct FString UID; // 0x278(0x10)
	struct FString PlayerName; // 0x288(0x10)

	bool IsGhost(); // Function WBP_PlayerNameTag.WBP_PlayerNameTag_C.IsGhost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FText GetText_2(); // Function WBP_PlayerNameTag.WBP_PlayerNameTag_C.GetText_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnSpeakerUpdated01(struct TArray<struct FString> IDList); // Function WBP_PlayerNameTag.WBP_PlayerNameTag_C.OnSpeakerUpdated01 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PlayerNameTag.WBP_PlayerNameTag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void set visibility(); // Function WBP_PlayerNameTag.WBP_PlayerNameTag_C.set visibility // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PlayerNameTag(int32_t EntryPoint); // Function WBP_PlayerNameTag.WBP_PlayerNameTag_C.ExecuteUbergraph_WBP_PlayerNameTag // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

