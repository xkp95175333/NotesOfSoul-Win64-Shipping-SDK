// WidgetBlueprintGeneratedClass WBP_VoiceSwitch.WBP_VoiceSwitch_C
// Size: 0x9f0 (Inherited: 0x260)
struct UWBP_VoiceSwitch_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Ghost; // 0x268(0x08)
	struct UButton* Human; // 0x270(0x08)
	struct UTextBlock* TextBlockGhost; // 0x278(0x08)
	struct UTextBlock* TextBlockHuman; // 0x280(0x08)
	struct FButtonStyle ButtonG; // 0x288(0x278)
	struct FButtonStyle Normal; // 0x500(0x278)
	struct FButtonStyle ButtonH; // 0x778(0x278)

	void SwitchVoice(enum class EVoiceChannel VoiceChannel); // Function WBP_VoiceSwitch.WBP_VoiceSwitch_C.SwitchVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_VoiceSwitch.WBP_VoiceSwitch_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_VoiceSwitch(int32_t EntryPoint); // Function WBP_VoiceSwitch.WBP_VoiceSwitch_C.ExecuteUbergraph_WBP_VoiceSwitch // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

