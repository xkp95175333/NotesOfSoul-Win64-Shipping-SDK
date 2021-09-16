// BlueprintGeneratedClass BP_LangRenSha.BP_LangRenSha_C
// Size: 0x718 (Inherited: 0x700)
struct ABP_LangRenSha_C : ANOS_GMLangRenSha {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x708(0x08)
	struct FTimerHandle StopSessionHandle; // 0x710(0x08)

	void OnEndGame(bool bHumanWin); // Function BP_LangRenSha.BP_LangRenSha_C.OnEndGame // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnStopSession(); // Function BP_LangRenSha.BP_LangRenSha_C.OnStopSession // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStopSesion(); // Function BP_LangRenSha.BP_LangRenSha_C.OnStopSesion // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_LangRenSha(int32_t EntryPoint); // Function BP_LangRenSha.BP_LangRenSha_C.ExecuteUbergraph_BP_LangRenSha // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

