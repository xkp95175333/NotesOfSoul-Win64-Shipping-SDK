// BlueprintGeneratedClass BP_CommonConfirmCom.BP_CommonConfirmCom_C
// Size: 0x190 (Inherited: 0x151)
struct UBP_CommonConfirmCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* TipsText; // 0x160(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x168(0x08)
	struct FMulticastInlineDelegate OnConfirmButtonClicked; // 0x170(0x10)
	struct FVector2D DefualtCancelBtnPosition; // 0x180(0x08)
	struct FVector2D DefualtConfirmBtnPosition; // 0x188(0x08)

	void MoveCursorToConfirm(); // Function BP_CommonConfirmCom.BP_CommonConfirmCom_C.MoveCursorToConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MoveCursorToCancel(); // Function BP_CommonConfirmCom.BP_CommonConfirmCom_C.MoveCursorToCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetContent(struct FText newText); // Function BP_CommonConfirmCom.BP_CommonConfirmCom_C.SetContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitConfirm(); // Function BP_CommonConfirmCom.BP_CommonConfirmCom_C.InitConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_CommonConfirmCom.BP_CommonConfirmCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickCancel(); // Function BP_CommonConfirmCom.BP_CommonConfirmCom_C.OnClickCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickConfirm(); // Function BP_CommonConfirmCom.BP_CommonConfirmCom_C.OnClickConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_CommonConfirmCom(int32_t EntryPoint); // Function BP_CommonConfirmCom.BP_CommonConfirmCom_C.ExecuteUbergraph_BP_CommonConfirmCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnConfirmButtonClicked__DelegateSignature(); // Function BP_CommonConfirmCom.BP_CommonConfirmCom_C.OnConfirmButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

