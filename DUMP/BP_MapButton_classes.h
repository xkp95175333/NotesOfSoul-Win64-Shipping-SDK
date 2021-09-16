// BlueprintGeneratedClass BP_MapButton.BP_MapButton_C
// Size: 0x178 (Inherited: 0x140)
struct UBP_MapButton_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct AUIBaseActor* MapName; // 0x148(0x08)
	struct AUIBaseActor* MapPic; // 0x150(0x08)
	struct FText Map Name; // 0x158(0x18)
	struct UUISprite* Select; // 0x170(0x08)

	void ExitButton(); // Function BP_MapButton.BP_MapButton_C.ExitButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UPButton(); // Function BP_MapButton.BP_MapButton_C.UPButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DownButton(); // Function BP_MapButton.BP_MapButton_C.DownButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EnterButton(); // Function BP_MapButton.BP_MapButton_C.EnterButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseThis(); // Function BP_MapButton.BP_MapButton_C.CloseThis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickMapButton(); // Function BP_MapButton.BP_MapButton_C.ClickMapButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Map Info(struct FText MapName, struct UTexture* MapTexture); // Function BP_MapButton.BP_MapButton_C.Set Map Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MapButton.BP_MapButton_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MapButton(int32_t EntryPoint); // Function BP_MapButton.BP_MapButton_C.ExecuteUbergraph_BP_MapButton // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

