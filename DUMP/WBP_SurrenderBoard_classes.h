// WidgetBlueprintGeneratedClass WBP_SurrenderBoard.WBP_SurrenderBoard_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_SurrenderBoard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* AceeptNum; // 0x268(0x08)
	struct UImage* Image_133; // 0x270(0x08)
	struct UImage* Image_233; // 0x278(0x08)
	struct UProgressBar* ProgressBar_152; // 0x280(0x08)
	struct UTextBlock* RefusedNum; // 0x288(0x08)
	struct UButton* Surrender; // 0x290(0x08)
	struct UButton* Surrender_2; // 0x298(0x08)
	float NOS_MaxTime; // 0x2a0(0x04)
	float NOS_CurrentTime; // 0x2a4(0x04)
	bool IsAccept; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	int32_t AcceptNum; // 0x2ac(0x04)
	int32_t RefusedNumInt; // 0x2b0(0x04)
	float NowTimeSecond; // 0x2b4(0x04)
	bool IsChoosed; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float CheckTimeValue; // 0x2bc(0x04)

	void UpdateAceeptData(int32_t AcceptNum, int32_t RefusedNumInt); // Function WBP_SurrenderBoard.WBP_SurrenderBoard_C.UpdateAceeptData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Update(int32_t AeecptNum, int32_t NotaeecptNum, float NOS_MaxTime, float NOS_CurrentTime); // Function WBP_SurrenderBoard.WBP_SurrenderBoard_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	float GetPercent_1(); // Function WBP_SurrenderBoard.WBP_SurrenderBoard_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_SurrenderBoard.WBP_SurrenderBoard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function WBP_SurrenderBoard.WBP_SurrenderBoard_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Surrender_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SurrenderBoard.WBP_SurrenderBoard_C.BndEvt__Surrender_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Surrender_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SurrenderBoard.WBP_SurrenderBoard_C.BndEvt__Surrender_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ButtonScureender(bool IsAccept); // Function WBP_SurrenderBoard.WBP_SurrenderBoard_C.ButtonScureender // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_SurrenderBoard(int32_t EntryPoint); // Function WBP_SurrenderBoard.WBP_SurrenderBoard_C.ExecuteUbergraph_WBP_SurrenderBoard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

