// WidgetBlueprintGeneratedClass WBP_Nickname.WBP_Nickname_C
// Size: 0x2b0 (Inherited: 0x268)
struct UWBP_Nickname_C : UNOS_UI_Nickname {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UOverlay* Att; // 0x270(0x08)
	struct UImage* Attribute; // 0x278(0x08)
	struct UTextBlock* atttext; // 0x280(0x08)
	struct UTextBlock* ID; // 0x288(0x08)
	struct UImage* Image_758; // 0x290(0x08)
	struct UTextBlock* Name; // 0x298(0x08)
	struct UImage* Title; // 0x2a0(0x08)
	struct UImage* Voice; // 0x2a8(0x08)

	void SetID(); // Function WBP_Nickname.WBP_Nickname_C.SetID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Attribut(struct FText InText, struct FLinearColor TextColor, struct FLinearColor ImageColor); // Function WBP_Nickname.WBP_Nickname_C.Attribut // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HidedVoice(bool isHiden); // Function WBP_Nickname.WBP_Nickname_C.HidedVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetName(struct FText InText); // Function WBP_Nickname.WBP_Nickname_C.SetName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetTitle(struct UObject* Image); // Function WBP_Nickname.WBP_Nickname_C.SetTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAttribute(enum class EHumanType HumanType); // Function WBP_Nickname.WBP_Nickname_C.SetAttribute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_Nickname.WBP_Nickname_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Nickname.WBP_Nickname_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ShowVoice(); // Function WBP_Nickname.WBP_Nickname_C.ShowVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(enum class ESlateVisibility InVisibility); // Function WBP_Nickname.WBP_Nickname_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Nickname(int32_t EntryPoint); // Function WBP_Nickname.WBP_Nickname_C.ExecuteUbergraph_WBP_Nickname // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

