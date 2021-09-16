// BlueprintGeneratedClass BP_CommonDialogBoxCom.BP_CommonDialogBoxCom_C
// Size: 0x190 (Inherited: 0x151)
struct UBP_CommonDialogBoxCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* DialogContent; // 0x160(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x168(0x08)
	struct UUIText* DialogTitle; // 0x170(0x08)
	struct FMulticastInlineDelegate OnClickConfrimBTN; // 0x178(0x10)
	struct UUIText* ConfrimButtonText; // 0x188(0x08)

	void SetContent(struct FText Title, struct FText Content, struct FText ButtonText); // Function BP_CommonDialogBoxCom.BP_CommonDialogBoxCom_C.SetContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCommonDialogBox(); // Function BP_CommonDialogBoxCom.BP_CommonDialogBoxCom_C.InitCommonDialogBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_CommonDialogBoxCom.BP_CommonDialogBoxCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnConfrim(); // Function BP_CommonDialogBoxCom.BP_CommonDialogBoxCom_C.OnConfrim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClose(); // Function BP_CommonDialogBoxCom.BP_CommonDialogBoxCom_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DelaySetContent(struct FText Title, struct FText Content, struct FText ButtonText); // Function BP_CommonDialogBoxCom.BP_CommonDialogBoxCom_C.DelaySetContent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_CommonDialogBoxCom(int32_t EntryPoint); // Function BP_CommonDialogBoxCom.BP_CommonDialogBoxCom_C.ExecuteUbergraph_BP_CommonDialogBoxCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnClickConfrimBTN__DelegateSignature(); // Function BP_CommonDialogBoxCom.BP_CommonDialogBoxCom_C.OnClickConfrimBTN__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

