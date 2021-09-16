// BlueprintGeneratedClass BP_SwitchTexture.BP_SwitchTexture_C
// Size: 0x180 (Inherited: 0x151)
struct UBP_SwitchTexture_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> Texture2D; // 0x160(0x10)
	struct UUISprite* Prefab; // 0x170(0x08)
	int32_t Number; // 0x178(0x04)
	int32_t NewVar_1; // 0x17c(0x04)

	void Down(); // Function BP_SwitchTexture.BP_SwitchTexture_C.Down // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Up(); // Function BP_SwitchTexture.BP_SwitchTexture_C.Up // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SwitchTexture.BP_SwitchTexture_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SwitchTexture(int32_t EntryPoint); // Function BP_SwitchTexture.BP_SwitchTexture_C.ExecuteUbergraph_BP_SwitchTexture // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

