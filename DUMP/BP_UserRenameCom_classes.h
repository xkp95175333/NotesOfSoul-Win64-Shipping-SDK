// BlueprintGeneratedClass BP_UserRenameCom.BP_UserRenameCom_C
// Size: 0x1a0 (Inherited: 0x140)
struct UBP_UserRenameCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UUITextInputComponent* TextInput; // 0x148(0x08)
	struct UUIText* ErrorText; // 0x150(0x08)
	int32_t ErrorIndex; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TArray<struct FString> SensitiveWords; // 0x160(0x10)
	struct UUIButtonComponent* Btn_Confrim; // 0x170(0x08)
	struct FMulticastInlineDelegate RenameSuccess; // 0x178(0x10)
	int32_t RenameCardID; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct UBP_CommonDialogBoxCom_C* As BP Common Dialog Box Com; // 0x190(0x08)
	struct UUIItem* Dialog; // 0x198(0x08)

	void CheckRenameCard(); // Function BP_UserRenameCom.BP_UserRenameCom_C.CheckRenameCard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitPanel(); // Function BP_UserRenameCom.BP_UserRenameCom_C.InitPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckSensitiveWords(struct FString Input1, bool CanEdit); // Function BP_UserRenameCom.BP_UserRenameCom_C.CheckSensitiveWords // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnClose(); // Function BP_UserRenameCom.BP_UserRenameCom_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_UserRenameCom.BP_UserRenameCom_C.InitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEditNicknameRsp_Event_1(int32_t code); // Function BP_UserRenameCom.BP_UserRenameCom_C.OnEditNicknameRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnConfrim(); // Function BP_UserRenameCom.BP_UserRenameCom_C.OnConfrim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_UserRenameCom.BP_UserRenameCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_UserRenameCom.BP_UserRenameCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_UserRenameCom(int32_t EntryPoint); // Function BP_UserRenameCom.BP_UserRenameCom_C.ExecuteUbergraph_BP_UserRenameCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void RenameSuccess__DelegateSignature(); // Function BP_UserRenameCom.BP_UserRenameCom_C.RenameSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

