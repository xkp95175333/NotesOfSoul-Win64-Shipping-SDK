// WidgetBlueprintGeneratedClass WBP_StateBox.WBP_StateBox_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_StateBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* DontBother_Btn; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_2; // 0x278(0x08)
	struct UImage* Image_3; // 0x280(0x08)
	struct UImage* Image_79; // 0x288(0x08)
	struct UButton* InGame_Btn; // 0x290(0x08)
	struct UButton* Offline_Btn; // 0x298(0x08)
	struct UButton* Online_Btn; // 0x2a0(0x08)
	struct UVerticalBox* StateBox; // 0x2a8(0x08)
	struct UWBP_FriendMain_C* WBP_FriendMain; // 0x2b0(0x08)

	void BndEvt__Online_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StateBox.WBP_StateBox_C.BndEvt__Online_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__InGame_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StateBox.WBP_StateBox_C.BndEvt__InGame_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Offline_Btn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StateBox.WBP_StateBox_C.BndEvt__Offline_Btn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_StateBox.WBP_StateBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnEditOnlinStateRsp_Event_1(int32_t code, enum class EKxOnlineState OnlineState); // Function WBP_StateBox.WBP_StateBox_C.OnEditOnlinStateRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_StateBox(int32_t EntryPoint); // Function WBP_StateBox.WBP_StateBox_C.ExecuteUbergraph_WBP_StateBox // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

