// BlueprintGeneratedClass TongYongRongQi.TongYongRongQi_C
// Size: 0x238 (Inherited: 0x220)
struct ATongYongRongQi_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UNiagaraComponent* NS_RongQi_XiShou; // 0x228(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)

	void OnNotifyEnd_90E7CBBF4969FCE994A3DBBD22CA72B9(struct FName NotifyName); // Function TongYongRongQi.TongYongRongQi_C.OnNotifyEnd_90E7CBBF4969FCE994A3DBBD22CA72B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_90E7CBBF4969FCE994A3DBBD22CA72B9(struct FName NotifyName); // Function TongYongRongQi.TongYongRongQi_C.OnNotifyBegin_90E7CBBF4969FCE994A3DBBD22CA72B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_90E7CBBF4969FCE994A3DBBD22CA72B9(struct FName NotifyName); // Function TongYongRongQi.TongYongRongQi_C.OnInterrupted_90E7CBBF4969FCE994A3DBBD22CA72B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_90E7CBBF4969FCE994A3DBBD22CA72B9(struct FName NotifyName); // Function TongYongRongQi.TongYongRongQi_C.OnBlendOut_90E7CBBF4969FCE994A3DBBD22CA72B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_90E7CBBF4969FCE994A3DBBD22CA72B9(struct FName NotifyName); // Function TongYongRongQi.TongYongRongQi_C.OnCompleted_90E7CBBF4969FCE994A3DBBD22CA72B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function TongYongRongQi.TongYongRongQi_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void PlayLocalAnim(float Rate); // Function TongYongRongQi.TongYongRongQi_C.PlayLocalAnim // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_TongYongRongQi(int32_t EntryPoint); // Function TongYongRongQi.TongYongRongQi_C.ExecuteUbergraph_TongYongRongQi // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

