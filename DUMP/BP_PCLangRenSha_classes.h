// BlueprintGeneratedClass BP_PCLangRenSha.BP_PCLangRenSha_C
// Size: 0x6c4 (Inherited: 0x6a8)
struct ABP_PCLangRenSha_C : ANOS_PCLangRenSha {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a8(0x08)
	struct UBP_UIControlComponent_C* BP_UIControlComponent; // 0x6b0(0x08)
	struct UNOS_GameplayAbility* Ability Class; // 0x6b8(0x08)
	int32_t Value; // 0x6c0(0x04)

	void InpActEvt_All_KeyBoardH_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.InpActEvt_All_KeyBoardH_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_All_KeyBoardB_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.InpActEvt_All_KeyBoardB_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void CreateLangrenUI(); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.CreateLangrenUI // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceivePossess(struct APawn* PossessedPawn); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchCamera(struct APawn* ConrolPawn); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.SwitchCamera // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SiwtchCamraManger(struct APawn* ControlPawn); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.SiwtchCamraManger // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearVoteCDBP(bool bClear); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.ClearVoteCDBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Hidden(); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.Hidden // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PCLangRenSha(int32_t EntryPoint); // Function BP_PCLangRenSha.BP_PCLangRenSha_C.ExecuteUbergraph_BP_PCLangRenSha // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

