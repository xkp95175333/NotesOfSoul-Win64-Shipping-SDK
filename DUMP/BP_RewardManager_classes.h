// BlueprintGeneratedClass BP_RewardManager.BP_RewardManager_C
// Size: 0x1a8 (Inherited: 0x151)
struct UBP_RewardManager_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUISpriteActor* ControlledButton1; // 0x160(0x08)
	struct AUISpriteActor* ControlledButton2; // 0x168(0x08)
	struct AUISpriteActor* ControlledButton3; // 0x170(0x08)
	struct AUISpriteActor* ControlledButton4; // 0x178(0x08)
	struct TArray<struct UBP_RewardBox_C*> RewardBoxArray; // 0x180(0x10)
	struct AUITextActor* SignDayTextBox; // 0x190(0x08)
	struct AUIContainerActor* SignAdySetting; // 0x198(0x08)
	struct UBP_SignDayBoxSetting_C* SindaySettingCom; // 0x1a0(0x08)

	void FindCom(); // Function BP_RewardManager.BP_RewardManager_C.FindCom // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateButtonState(int32_t CurrentSignDay); // Function BP_RewardManager.BP_RewardManager_C.UpdateButtonState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_RewardManager.BP_RewardManager_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnGetReward(int32_t ID); // Function BP_RewardManager.BP_RewardManager_C.OnGetReward // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_RewardManager.BP_RewardManager_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_RewardManager.BP_RewardManager_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RewardManager(int32_t EntryPoint); // Function BP_RewardManager.BP_RewardManager_C.ExecuteUbergraph_BP_RewardManager // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

