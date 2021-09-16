// BlueprintGeneratedClass BP_Advertising.BP_Advertising_C
// Size: 0x188 (Inherited: 0x151)
struct UBP_Advertising_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> Texture2DArray; // 0x160(0x10)
	int32_t Index; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct UMediaTexture* MediaTexture; // 0x178(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x180(0x08)

	void SetMediaTexture(); // Function BP_Advertising.BP_Advertising_C.SetMediaTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetArrayIndex(int32_t Index); // Function BP_Advertising.BP_Advertising_C.SetArrayIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void End(bool Is); // Function BP_Advertising.BP_Advertising_C.End // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(); // Function BP_Advertising.BP_Advertising_C.Exit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Advertising.BP_Advertising_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void EndReached(); // Function BP_Advertising.BP_Advertising_C.EndReached // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Advertising(int32_t EntryPoint); // Function BP_Advertising.BP_Advertising_C.ExecuteUbergraph_BP_Advertising // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

