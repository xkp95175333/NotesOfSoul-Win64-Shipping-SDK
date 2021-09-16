// BlueprintGeneratedClass BP_GuildTeskInfoCom.BP_GuildTeskInfoCom_C
// Size: 0x198 (Inherited: 0x151)
struct UBP_GuildTeskInfoCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	bool bDayMission; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct FDailyMissionState MissionInfo; // 0x168(0x20)
	struct TArray<struct UBP_GuildRewardCom_C*> RewardArray; // 0x188(0x10)

	void OnReceive(); // Function BP_GuildTeskInfoCom.BP_GuildTeskInfoCom_C.OnReceive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Receive(); // Function BP_GuildTeskInfoCom.BP_GuildTeskInfoCom_C.Receive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_GuildTeskInfoCom.BP_GuildTeskInfoCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_GuildTeskInfoCom.BP_GuildTeskInfoCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildTeskInfoCom.BP_GuildTeskInfoCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildTeskInfoCom(int32_t EntryPoint); // Function BP_GuildTeskInfoCom.BP_GuildTeskInfoCom_C.ExecuteUbergraph_BP_GuildTeskInfoCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

