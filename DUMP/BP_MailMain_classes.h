// BlueprintGeneratedClass BP_MailMain.BP_MailMain_C
// Size: 0x288 (Inherited: 0x151)
struct UBP_MailMain_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* MailListPanel; // 0x160(0x08)
	int32_t MailCount; // 0x168(0x04)
	bool IsChooseAll; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	int64_t CurMailid; // 0x170(0x08)
	struct TArray<int64_t> MultiChooseId; // 0x178(0x10)
	struct TArray<struct ULGUIBasePanel*> AllMailComp; // 0x188(0x10)
	struct TArray<struct FPBMailItem> MailItem; // 0x198(0x10)
	struct TArray<int32_t> ReciveItemId; // 0x1a8(0x10)
	int32_t ItemNum; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct UTexture* New Texture; // 0x1c0(0x08)
	int32_t ItemCount; // 0x1c8(0x04)
	int32_t Item ID; // 0x1cc(0x04)
	int32_t GetNum; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct TArray<struct FPBMail> UnReadMail; // 0x1d8(0x10)
	struct TArray<struct FPBMail> UnGetMail; // 0x1e8(0x10)
	struct TArray<struct FPBMail> GetMail; // 0x1f8(0x10)
	struct TArray<struct FPBMail> AllMailShow; // 0x208(0x10)
	struct TArray<struct FItemData> Item Data; // 0x218(0x10)
	struct FText ZhanduiTitle; // 0x228(0x18)
	struct FText ZhanduiMailText; // 0x240(0x18)
	struct FText Temp; // 0x258(0x18)
	struct FText JiaoYiHangMailText; // 0x270(0x18)

	void Handle Jiao Yi Hang(struct FString Message, struct FString Title, int64_t SendTime); // Function BP_MailMain.BP_MailMain_C.Handle Jiao Yi Hang // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Handle Zhandui Message(); // Function BP_MailMain.BP_MailMain_C.Handle Zhandui Message // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearMailShow(); // Function BP_MailMain.BP_MailMain_C.ClearMailShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenHomeMain(); // Function BP_MailMain.BP_MailMain_C.OpenHomeMain // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAllItem(struct TArray<struct FPBMailItem> NewVar_1); // Function BP_MailMain.BP_MailMain_C.SetAllItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Recive Text(bool isget); // Function BP_MailMain.BP_MailMain_C.Set Recive Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveCurMail(bool IsReciveAll); // Function BP_MailMain.BP_MailMain_C.ReciveCurMail // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetChooseAll(); // Function BP_MailMain.BP_MailMain_C.SetChooseAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DelAllMailIcon(); // Function BP_MailMain.BP_MailMain_C.DelAllMailIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveMail(); // Function BP_MailMain.BP_MailMain_C.ReciveMail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeleteMail(); // Function BP_MailMain.BP_MailMain_C.DeleteMail // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DelMultiChooseId(int64_t MailId); // Function BP_MailMain.BP_MailMain_C.DelMultiChooseId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddMultiChooseId(int64_t MailId); // Function BP_MailMain.BP_MailMain_C.AddMultiChooseId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCurrentMailid(int64_t CurMailid); // Function BP_MailMain.BP_MailMain_C.SetCurrentMailid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Choose All Mail(); // Function BP_MailMain.BP_MailMain_C.Choose All Mail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Mail Count(); // Function BP_MailMain.BP_MailMain_C.Set Mail Count // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMailSender(struct FText newText); // Function BP_MailMain.BP_MailMain_C.SetMailSender // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMailTitle(struct FString Title); // Function BP_MailMain.BP_MailMain_C.SetMailTitle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMailMailText(struct FString MailText, struct FString MailTitle, int64_t SendTime); // Function BP_MailMain.BP_MailMain_C.SetMailMailText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAnim(); // Function BP_MailMain.BP_MailMain_C.UIAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseUI(); // Function BP_MailMain.BP_MailMain_C.CloseUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_MailMain.BP_MailMain_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MailMain.BP_MailMain_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_MailMain.BP_MailMain_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MailUpdate(); // Function BP_MailMain.BP_MailMain_C.MailUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BanPickClose(); // Function BP_MailMain.BP_MailMain_C.BanPickClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CodeError(int32_t code); // Function BP_MailMain.BP_MailMain_C.CodeError // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MailMain(int32_t EntryPoint); // Function BP_MailMain.BP_MailMain_C.ExecuteUbergraph_BP_MailMain // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

