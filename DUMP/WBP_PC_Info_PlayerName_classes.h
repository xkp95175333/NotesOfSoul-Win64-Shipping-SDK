// WidgetBlueprintGeneratedClass WBP_PC_Info_PlayerName.WBP_PC_Info_PlayerName_C
// Size: 0x2c8 (Inherited: 0x26c)
struct UWBP_PC_Info_PlayerName_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* Button_ChangeName; // 0x278(0x08)
	struct UButton* Button_HeadImg; // 0x280(0x08)
	struct UImage* Image_HeadBorder; // 0x288(0x08)
	struct UImage* Image_HeadImg; // 0x290(0x08)
	struct UTextBlock* Text_PlayerName; // 0x298(0x08)
	bool OpenHeadSec; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UWBP_HeadSec_C* HeadSec; // 0x2a8(0x08)
	int32_t HeadIconID; // 0x2b0(0x04)
	int32_t HeadBorderID; // 0x2b4(0x04)
	struct FMulticastInlineDelegate OnChooseHeadImage; // 0x2b8(0x10)

	void UpdateHeadIcon(int32_t HeadID, int32_t HeadBoardID); // Function WBP_PC_Info_PlayerName.WBP_PC_Info_PlayerName_C.UpdateHeadIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_Info_PlayerName.WBP_PC_Info_PlayerName_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_HeadImg_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_Info_PlayerName.WBP_PC_Info_PlayerName_C.BndEvt__Button_HeadImg_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnConfimChoose(int32_t ID, int32_t HeadBorderID, struct TSoftObjectPtr<struct UTexture2D> head, struct TSoftObjectPtr<struct UTexture2D> HeadBoard); // Function WBP_PC_Info_PlayerName.WBP_PC_Info_PlayerName_C.OnConfimChoose // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_Info_PlayerName.WBP_PC_Info_PlayerName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_ChangeName_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_Info_PlayerName.WBP_PC_Info_PlayerName_C.BndEvt__Button_ChangeName_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_Info_PlayerName(int32_t EntryPoint); // Function WBP_PC_Info_PlayerName.WBP_PC_Info_PlayerName_C.ExecuteUbergraph_WBP_PC_Info_PlayerName // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnChooseHeadImage__DelegateSignature(int32_t HeadID, int32_t HeadBoederID); // Function WBP_PC_Info_PlayerName.WBP_PC_Info_PlayerName_C.OnChooseHeadImage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

