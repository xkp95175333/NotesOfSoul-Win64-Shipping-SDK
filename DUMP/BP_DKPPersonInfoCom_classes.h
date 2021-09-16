// BlueprintGeneratedClass BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C
// Size: 0x288 (Inherited: 0x151)
struct UBP_DKPPersonInfoCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FGuildUserData PlayerInfo; // 0x160(0x100)
	struct UBP_SpoilsPanelCom_C* BP_ParentCom; // 0x260(0x08)
	struct UUIToggleGroupComponent* ToggleGroup; // 0x268(0x08)
	int32_t ChangeValue; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UBP_GuildPanelCom_C* GuildRoot; // 0x278(0x08)
	struct UUIItem* Root; // 0x280(0x08)

	void InputSubmit(struct FString inString); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.InputSubmit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDisInput(bool InActivate); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.OnDisInput // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisInput(struct ULGUIPointerEventData* pointerEventData); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.DisInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChange(int32_t des_uid, struct FGuildUserData NewPlayInfo); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.OnChange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FindDKP(); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.FindDKP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSelecet(bool InBool); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.UpdateSelecet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Cancel(); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.Cancel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OK(struct FText Note); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.OK // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ModifyDKP(); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.ModifyDKP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void DKPClick(struct ULGUIPointerEventData* pointerEventData); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.DKPClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DKPPersonInfoCom(int32_t EntryPoint); // Function BP_DKPPersonInfoCom.BP_DKPPersonInfoCom_C.ExecuteUbergraph_BP_DKPPersonInfoCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

