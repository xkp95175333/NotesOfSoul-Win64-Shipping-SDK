// BlueprintGeneratedClass BP_OneFriendInvite.BP_OneFriendInvite_C
// Size: 0x1b0 (Inherited: 0x151)
struct UBP_OneFriendInvite_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	bool IsSelect; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UBP_FriendInvite_C* Parent; // 0x168(0x08)
	int32_t FriendID; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct UUISprite* FillImage; // 0x178(0x08)
	struct FTimerHandle CountDownTimer; // 0x180(0x08)
	float ContinueTime; // 0x188(0x04)
	enum class EInviteType InviteType; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	int32_t TeamID; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct FText Name; // 0x198(0x18)

	void LeaveRoom(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.LeaveRoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRefuseInvitation(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.OnRefuseInvitation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Accept Invitation(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.On Accept Invitation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSelect(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.OnSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RefreshPrefab(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.RefreshPrefab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Countdown(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.Countdown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterMatch_Event_1(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.OnEnterMatch_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartMatchSelection_Event_1(); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.OnStartMatchSelection_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneFriendInvite(int32_t EntryPoint); // Function BP_OneFriendInvite.BP_OneFriendInvite_C.ExecuteUbergraph_BP_OneFriendInvite // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

