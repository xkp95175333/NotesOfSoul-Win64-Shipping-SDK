// BlueprintGeneratedClass BP_SignDayBoxSetting.BP_SignDayBoxSetting_C
// Size: 0x238 (Inherited: 0x151)
struct UBP_SignDayBoxSetting_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct UBP_DayButtonSetting_C*> DateArray; // 0x160(0x10)
	struct FVector2D 20201211Cord; // 0x170(0x08)
	int32_t 20201211Index; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FDateTime CurrentDate; // 0x180(0x08)
	struct FDateTime 20201211; // 0x188(0x08)
	int32_t DateIndex; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct UBP_DayButtonSetting_C* TodayButtonBox; // 0x198(0x08)
	struct AUIContainerActor* TimeViewControllerActor; // 0x1a0(0x08)
	struct UBP_DayButtonSetting_C* OnSetDateCheck; // 0x1a8(0x08)
	struct TMap<int32_t, struct UBP_DayButtonSetting_C*> CurrentMonthAllDay; // 0x1b0(0x50)
	struct TArray<int32_t> SignedIn; // 0x200(0x10)
	bool ISSigned; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct FMulticastInlineDelegate CallSigned; // 0x218(0x10)
	struct FDateTime NowTime; // 0x228(0x08)
	struct UDataTable* EventStr; // 0x230(0x08)

	void GetEvetnStrFormMonthAndDay(int32_t Month, int32_t Day, struct TArray<struct FString> CanString, struct TArray<struct FString> CanNotString); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.GetEvetnStrFormMonthAndDay // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetAllSignedDay(); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.GetAllSignedDay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetRoundAndIndex(int32_t Index, int32_t Num); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.GetRoundAndIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CheckAndFindCom(struct FDateTime CurrentDate); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.CheckAndFindCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FDateTime CheckMonthDay(int32_t A); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.CheckMonthDay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FString GetLunDay(int32_t Index); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.GetLunDay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FString GetLunarDay(int32_t Index); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.GetLunarDay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FString GetMonthLunarFromNum(int32_t Index); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.GetMonthLunarFromNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Initialize(struct FDateTime CurrentDate); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ButtonClickToSign(int32_t SignDay); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.ButtonClickToSign // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSignDataUpdate(struct FSignedDateInfo NewSignData); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.OnSignDataUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SignDayBoxSetting(int32_t EntryPoint); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.ExecuteUbergraph_BP_SignDayBoxSetting // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void CallSigned__DelegateSignature(int32_t Day); // Function BP_SignDayBoxSetting.BP_SignDayBoxSetting_C.CallSigned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

