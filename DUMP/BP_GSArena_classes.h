// BlueprintGeneratedClass BP_GSArena.BP_GSArena_C
// Size: 0x6a8 (Inherited: 0x600)
struct ABP_GSArena_C : ANOS_GSArena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x608(0x08)
	int32_t GameReadyCDForUI; // 0x610(0x04)
	int32_t JoinNum; // 0x614(0x04)
	struct ACameraActor* GhostCamera; // 0x618(0x08)
	struct ACameraActor* HumanCamera; // 0x620(0x08)
	struct FMulticastInlineDelegate OnCheckSurrender; // 0x628(0x10)
	struct ANOS_PlayerBase* Mvp; // 0x638(0x08)
	struct ABP_PCArena_C* As BP PCArena; // 0x640(0x08)
	struct TArray<struct ABP_CharacterModel_C*> As BP Character Model; // 0x648(0x10)
	struct TMap<int32_t, struct ANOS_PlayerBase*> PlayerBaseNumber ; // 0x658(0x50)

	void OnRep_GhostCamera(); // Function BP_GSArena.BP_GSArena_C.OnRep_GhostCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAllPawnLocation(int32_t Dimension 1, struct ANOS_PlayerBase* ItemToFind, struct FDelegate   , struct TArray<struct ANOS_PlayerBase*> Array); // Function BP_GSArena.BP_GSArena_C.SetAllPawnLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_HumanGather(); // Function BP_GSArena.BP_GSArena_C.OnRep_HumanGather // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FString GetPlayerName(struct AController*   , int32_t B); // Function BP_GSArena.BP_GSArena_C.GetPlayerName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartEscapeBP(); // Function BP_GSArena.BP_GSArena_C.OnStartEscapeBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_GSArena.BP_GSArena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_GameStateType(); // Function BP_GSArena.BP_GSArena_C.OnRep_GameStateType // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_PauseGameTime(); // Function BP_GSArena.BP_GSArena_C.OnRep_PauseGameTime // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameStateChange(enum class EKxGameStateType CurType); // Function BP_GSArena.BP_GSArena_C.OnGameStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GSArena(int32_t EntryPoint); // Function BP_GSArena.BP_GSArena_C.ExecuteUbergraph_BP_GSArena // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnCheckSurrender__DelegateSignature(int32_t AcceptNum, int32_t NotAcceptNum); // Function BP_GSArena.BP_GSArena_C.OnCheckSurrender__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

