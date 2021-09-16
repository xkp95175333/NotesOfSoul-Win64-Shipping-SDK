// BlueprintGeneratedClass GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C
// Size: 0x4ec (Inherited: 0x490)
struct UGA_PerspectiveLastHuman_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FTimerHandle Handle_Last; // 0x498(0x08)
	struct TArray<struct ANOS_PlayerHuman*> ValidHumans; // 0x4a0(0x10)
	struct ANOS_PlayerHuman* LastLastPerspective; // 0x4b0(0x08)
	struct ANOS_GMArenaBase* NOS_GMBase; // 0x4b8(0x08)
	struct ANOS_PlayerHuman* Human; // 0x4c0(0x08)
	bool 3Perspectiveing; // 0x4c8(0x01)
	bool 3DisConnecting; // 0x4c9(0x01)
	char pad_4CA[0x2]; // 0x4ca(0x02)
	float DisConnectingTime; // 0x4cc(0x04)
	struct ANOS_PSArenaBase* HumanPSArena; // 0x4d0(0x08)
	struct TArray<struct ANOS_PlayerHuman*> AddPerspectiveHumans; // 0x4d8(0x10)
	float 3NoMoveTimeCount; // 0x4e8(0x04)

	void RemovePerspective(struct ANOS_PlayerBase* Last); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.RemovePerspective // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_B52496A34196AB372703E6BE21817B11(); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.Added_B52496A34196AB372703E6BE21817B11 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_D749DEEB4543871B4B51D4B9095B0769(); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.Added_D749DEEB4543871B4B51D4B9095B0769 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_7D20794E459F32F06E6CDBA48E6B78CB(); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.Removed_7D20794E459F32F06E6CDBA48E6B78CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CE_Query(); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.CE_Query // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Check3NoMove(); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.Check3NoMove // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Check3DisConnecting(); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.Check3DisConnecting // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_PerspectiveLastHuman(int32_t EntryPoint); // Function GA_PerspectiveLastHuman.GA_PerspectiveLastHuman_C.ExecuteUbergraph_GA_PerspectiveLastHuman // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

