// BlueprintGeneratedClass BP_OperationGuildPanelCom.BP_OperationGuildPanelCom_C
// Size: 0x279 (Inherited: 0x151)
struct UBP_OperationGuildPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FVector2D CanvasScale; // 0x160(0x08)
	struct FVector2D CanvasSize; // 0x168(0x08)
	bool Root; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct FGuildUserData GuildUserInfo; // 0x178(0x100)
	bool bIsFriend; // 0x278(0x01)

	void Game(); // Function BP_OperationGuildPanelCom.BP_OperationGuildPanelCom_C.Game // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddFriend(); // Function BP_OperationGuildPanelCom.BP_OperationGuildPanelCom_C.AddFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OperationGuildPanelCom.BP_OperationGuildPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_OperationGuildPanelCom.BP_OperationGuildPanelCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetLocation(struct FGuildUserData UserData); // Function BP_OperationGuildPanelCom.BP_OperationGuildPanelCom_C.SetLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OperationGuildPanelCom(int32_t EntryPoint); // Function BP_OperationGuildPanelCom.BP_OperationGuildPanelCom_C.ExecuteUbergraph_BP_OperationGuildPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

