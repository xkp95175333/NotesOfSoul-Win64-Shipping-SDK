// WidgetBlueprintGeneratedClass WBP_InteractDefault.WBP_InteractDefault_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_InteractDefault_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Key; // 0x268(0x08)
	struct UTextBlock* TextBlock_Tip; // 0x270(0x08)
	int32_t ID; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FText InteractText; // 0x280(0x18)

	void PropInteracInfo(struct AActor* Actor, struct FText PrintText, bool isFind); // Function WBP_InteractDefault.WBP_InteractDefault_C.PropInteracInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FText GetInteractText(); // Function WBP_InteractDefault.WBP_InteractDefault_C.GetInteractText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_InteractDefault.WBP_InteractDefault_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_InteractDefault.WBP_InteractDefault_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OwnerID(int32_t OwnerID); // Function WBP_InteractDefault.WBP_InteractDefault_C.OwnerID // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_InteractDefault(int32_t EntryPoint); // Function WBP_InteractDefault.WBP_InteractDefault_C.ExecuteUbergraph_WBP_InteractDefault // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

