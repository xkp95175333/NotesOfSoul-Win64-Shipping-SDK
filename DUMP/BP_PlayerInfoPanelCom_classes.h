// BlueprintGeneratedClass BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C
// Size: 0x270 (Inherited: 0x151)
struct UBP_PlayerInfoPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FGuildUserData GuildUser; // 0x160(0x100)
	struct UBP_MembersPanelCom_C* RootPanel; // 0x260(0x08)
	struct UUIButtonComponent* Button; // 0x268(0x08)

	void GetTimeString(struct FString Time); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.GetTimeString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Click(); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.Click // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetColor(); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenOperation(struct ULGUIPointerEventData* NewParam); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.OpenOperation // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.InitInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PlayerInfoPanelCom(int32_t EntryPoint); // Function BP_PlayerInfoPanelCom.BP_PlayerInfoPanelCom_C.ExecuteUbergraph_BP_PlayerInfoPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

