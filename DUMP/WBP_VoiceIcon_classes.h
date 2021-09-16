// WidgetBlueprintGeneratedClass WBP_VoiceIcon.WBP_VoiceIcon_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_VoiceIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Mic; // 0x268(0x08)
	struct UOverlay* Overlay_44; // 0x270(0x08)

	void SetAudioLconShow(bool IsShow); // Function WBP_VoiceIcon.WBP_VoiceIcon_C.SetAudioLconShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAudioIconLight(bool IsLight); // Function WBP_VoiceIcon.WBP_VoiceIcon_C.SetAudioIconLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_VoiceIcon.WBP_VoiceIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_VoiceIcon.WBP_VoiceIcon_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_VoiceIcon(int32_t EntryPoint); // Function WBP_VoiceIcon.WBP_VoiceIcon_C.ExecuteUbergraph_WBP_VoiceIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

