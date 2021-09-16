// BlueprintGeneratedClass BP_GSLangRenSha.BP_GSLangRenSha_C
// Size: 0x750 (Inherited: 0x708)
struct ABP_GSLangRenSha_C : ANOS_GSLangRenSha {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x710(0x08)
	int32_t JoinNum; // 0x718(0x04)
	char pad_71C[0x4]; // 0x71c(0x04)
	struct UWBP_EndSpeech_C* SpeechUI; // 0x720(0x08)
	struct UWBP_VoteMain_C* VoteUI; // 0x728(0x08)
	struct TArray<struct FWeightedBlendable> PostProcessArray; // 0x730(0x10)
	struct UMaterialInterface* NightSkillMaterial; // 0x740(0x08)
	struct UMaterialInterface* NightSceneMaterial; // 0x748(0x08)

	void ReceiveBeginPlay(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_CurSpeaker(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.OnRep_CurSpeaker // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_IsNight(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.OnRep_IsNight // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_GameStateType(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.OnRep_GameStateType // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bVoteCD(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.OnRep_bVoteCD // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PreVoteProcessBP(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.PreVoteProcessBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PostVoteProcessBP(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.PostVoteProcessBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_CurrentVotePhase(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.OnRep_CurrentVotePhase // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsNightSkillInCD(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.OnRep_bIsNightSkillInCD // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_PauseGameTime(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.OnRep_PauseGameTime // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsAllPlayerJoinInGames(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.OnRep_bIsAllPlayerJoinInGames // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_AllPawns(); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.OnRep_AllPawns // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetNoneSealTag(struct ANOS_PlayerHuman* Player, bool IsFreezeSeal); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.SetNoneSealTag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GSLangRenSha(int32_t EntryPoint); // Function BP_GSLangRenSha.BP_GSLangRenSha_C.ExecuteUbergraph_BP_GSLangRenSha // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

