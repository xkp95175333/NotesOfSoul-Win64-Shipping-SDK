// BlueprintGeneratedClass BP_DoubleContent.BP_DoubleContent_C
// Size: 0x1a0 (Inherited: 0x151)
struct UBP_DoubleContent_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TSoftObjectPtr<struct UTexture2D> Texture2D; // 0x160(0x28)
	struct FText Text; // 0x188(0x18)

	void AwakeBP(); // Function BP_DoubleContent.BP_DoubleContent_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_DoubleContent.BP_DoubleContent_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetUI(struct FText newText, struct TSoftObjectPtr<struct UObject> Asset); // Function BP_DoubleContent.BP_DoubleContent_C.SetUI // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DoubleContent(int32_t EntryPoint); // Function BP_DoubleContent.BP_DoubleContent_C.ExecuteUbergraph_BP_DoubleContent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

