// BlueprintGeneratedClass BP_DayButtonSetting.BP_DayButtonSetting_C
// Size: 0x230 (Inherited: 0x151)
struct UBP_DayButtonSetting_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t Index; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FString Day; // 0x168(0x10)
	struct FString DayOfLunar; // 0x178(0x10)
	struct FString CanString; // 0x188(0x10)
	struct FString CanNotString; // 0x198(0x10)
	struct UUIButtonComponent* Button; // 0x1a8(0x08)
	struct FColor DisableColor; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TArray<struct FString> CanSTtrArray; // 0x1b8(0x10)
	struct TArray<struct FString> CanNotStrArray; // 0x1c8(0x10)
	bool IsToday; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct FMulticastInlineDelegate CallSign; // 0x1e0(0x10)
	bool IsSign; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	struct FColor NewVar_1; // 0x1f4(0x04)
	struct AUITextureActor* NewEnableTexture; // 0x1f8(0x08)
	struct AUITextActor* NewCanText; // 0x200(0x08)
	struct AUITextActor* NewCanNotText; // 0x208(0x08)
	struct AUITextActor* NewDateNumText; // 0x210(0x08)
	struct AUITextActor* NewLunarDateText; // 0x218(0x08)
	struct AUITextureActor* RedTexture; // 0x220(0x08)
	struct AUITextureActor* SignLiuGuang; // 0x228(0x08)

	void UpdateStateImage(bool IsSign); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.UpdateStateImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set(); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.Set // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetEventStr(struct TArray<struct FString> CanSTtrArray, struct TArray<struct FString> CanNotStrArray); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.GetEventStr // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Initialize(int32_t Index, struct FString Day, struct FString DayOfLunar, struct TArray<struct FString> CanString, struct TArray<struct FString> CanNotString); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.Initialize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FString CheckName(struct FString A); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.CheckName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FString GetLunarDay(int32_t Index); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.GetLunarDay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FString GetMonthLunarFromNum(int32_t Index); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.GetMonthLunarFromNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetButtonEnableEvent(bool Value); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.SetButtonEnableEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TrySign(); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.TrySign // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DayButtonSetting(int32_t EntryPoint); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.ExecuteUbergraph_BP_DayButtonSetting // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void CallSign__DelegateSignature(int32_t SignDay); // Function BP_DayButtonSetting.BP_DayButtonSetting_C.CallSign__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

