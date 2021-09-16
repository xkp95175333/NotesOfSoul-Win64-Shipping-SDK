// WidgetBlueprintGeneratedClass WBP_PC_SC_SingleSkin.WBP_PC_SC_SingleSkin_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_PC_SC_SingleSkin_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_BG; // 0x268(0x08)
	struct UImage* Image_RoleSkin; // 0x270(0x08)
	int32_t Skin ID; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct UTexture2D*> Border; // 0x280(0x10)

	void BoxQuaility(enum class EClothQualityType NewParam); // Function WBP_PC_SC_SingleSkin.WBP_PC_SC_SingleSkin_C.BoxQuaility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_SC_SingleSkin.WBP_PC_SC_SingleSkin_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_SC_SingleSkin(int32_t EntryPoint); // Function WBP_PC_SC_SingleSkin.WBP_PC_SC_SingleSkin_C.ExecuteUbergraph_WBP_PC_SC_SingleSkin // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

