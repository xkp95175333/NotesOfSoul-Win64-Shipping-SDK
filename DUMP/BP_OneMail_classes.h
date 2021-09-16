// BlueprintGeneratedClass BP_OneMail.BP_OneMail_C
// Size: 0x210 (Inherited: 0x151)
struct UBP_OneMail_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int64_t MailId; // 0x160(0x08)
	bool IsOpen; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UBP_MailMain_C* BP_Mail; // 0x170(0x08)
	struct FText sender; // 0x178(0x18)
	struct FString Title; // 0x190(0x10)
	struct FString MailContent; // 0x1a0(0x10)
	bool IsChoose; // 0x1b0(0x01)
	bool isget; // 0x1b1(0x01)
	char pad_1B2[0x6]; // 0x1b2(0x06)
	struct TArray<struct FPBMailItem> ItemArray; // 0x1b8(0x10)
	struct UUISprite* ChooseButton; // 0x1c8(0x08)
	struct UUIText* OneMailText; // 0x1d0(0x08)
	struct UUIButtonComponent* OneMailButton; // 0x1d8(0x08)
	struct FText ZhanduiTitle; // 0x1e0(0x18)
	struct FString TitleID; // 0x1f8(0x10)
	int64_t SendTime; // 0x208(0x08)

	void SetSendTime(int64_t SendTime); // Function BP_OneMail.BP_OneMail_C.SetSendTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckCurrentMailID(int64_t CurMailid); // Function BP_OneMail.BP_OneMail_C.CheckCurrentMailID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddItemArray(struct FPBMailItem NewParam, struct TArray<struct FPBMailItem> NewParam1); // Function BP_OneMail.BP_OneMail_C.AddItemArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetReciveText(); // Function BP_OneMail.BP_OneMail_C.SetReciveText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsRead(); // Function BP_OneMail.BP_OneMail_C.SetIsRead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsReadorRecive(bool IsOpen, bool isget); // Function BP_OneMail.BP_OneMail_C.SetIsReadorRecive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChooseMail(); // Function BP_OneMail.BP_OneMail_C.ChooseMail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMailTextContent(struct FString MailContent); // Function BP_OneMail.BP_OneMail_C.SetMailTextContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Mail Main(); // Function BP_OneMail.BP_OneMail_C.Set Mail Main // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitParent(struct UBP_MailMain_C* BP_Mail); // Function BP_OneMail.BP_OneMail_C.InitParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_OneMail.BP_OneMail_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOneMailSender(struct FText newText); // Function BP_OneMail.BP_OneMail_C.SetOneMailSender // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOneMailTitle(struct FString newText); // Function BP_OneMail.BP_OneMail_C.SetOneMailTitle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMailid(int64_t MailId); // Function BP_OneMail.BP_OneMail_C.SetMailid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneMail.BP_OneMail_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneMail(int32_t EntryPoint); // Function BP_OneMail.BP_OneMail_C.ExecuteUbergraph_BP_OneMail // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

