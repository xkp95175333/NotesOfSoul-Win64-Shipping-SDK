// BlueprintGeneratedClass BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C
// Size: 0x2f58 (Inherited: 0x2f29)
struct ABP_YiMeiDaoZhang_C : ABP_PlayerHumanBase_C {
	char pad_2F29[0x7]; // 0x2f29(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f30(0x08)
	bool TakedSword; // 0x2f38(0x01)
	bool SwordIn; // 0x2f39(0x01)
	char pad_2F3A[0x6]; // 0x2f3a(0x06)
	struct UAudioComponent* GuangJiangHoldSound; // 0x2f40(0x08)
	struct TArray<int32_t> AllGuangJiangIDs; // 0x2f48(0x10)

	void SetHoldSoundComp(struct FName Key); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.SetHoldSoundComp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_F6BB47604D89196BAC406D883C6EADB0(struct FName NotifyName); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.OnNotifyEnd_F6BB47604D89196BAC406D883C6EADB0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_F6BB47604D89196BAC406D883C6EADB0(struct FName NotifyName); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.OnNotifyBegin_F6BB47604D89196BAC406D883C6EADB0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_F6BB47604D89196BAC406D883C6EADB0(struct FName NotifyName); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.OnInterrupted_F6BB47604D89196BAC406D883C6EADB0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_F6BB47604D89196BAC406D883C6EADB0(struct FName NotifyName); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.OnBlendOut_F6BB47604D89196BAC406D883C6EADB0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_F6BB47604D89196BAC406D883C6EADB0(struct FName NotifyName); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.OnCompleted_F6BB47604D89196BAC406D883C6EADB0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_TakeSword(); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.CE_TakeSword // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_TakeInSword(); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.Multi_TakeInSword // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_YiMeiDaoZhang(int32_t EntryPoint); // Function BP_YiMeiDaoZhang.BP_YiMeiDaoZhang_C.ExecuteUbergraph_BP_YiMeiDaoZhang // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

