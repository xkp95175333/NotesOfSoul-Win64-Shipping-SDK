// BlueprintGeneratedClass BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C
// Size: 0x5e2 (Inherited: 0x5b0)
struct ABP_PartnerXiaoXiaoJiang_C : ANOS_PartnerXiaoXiaoJiang {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct FVector PatrolCenterPoint; // 0x5b8(0x0c)
	float Config_LifeSpan; // 0x5c4(0x04)
	float Config_MoveSpeed; // 0x5c8(0x04)
	bool SOnly_LastHug; // 0x5cc(0x01)
	bool SOnly_MarkDelete; // 0x5cd(0x01)
	char pad_5CE[0x2]; // 0x5ce(0x02)
	struct ANOS_PlayerHuman* Server_HugedHuman; // 0x5d0(0x08)
	struct FTimerHandle DoHugDetachTimer; // 0x5d8(0x08)
	bool CryEnd; // 0x5e0(0x01)
	bool NoHugCryEnd; // 0x5e1(0x01)

	void UpdateWalkSpeed(float MaxWalkSpeed); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.UpdateWalkSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_4CD6A76340A39000A51FC6A094E5855C(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnNotifyEnd_4CD6A76340A39000A51FC6A094E5855C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_4CD6A76340A39000A51FC6A094E5855C(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnNotifyBegin_4CD6A76340A39000A51FC6A094E5855C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_4CD6A76340A39000A51FC6A094E5855C(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnInterrupted_4CD6A76340A39000A51FC6A094E5855C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_4CD6A76340A39000A51FC6A094E5855C(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnBlendOut_4CD6A76340A39000A51FC6A094E5855C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_4CD6A76340A39000A51FC6A094E5855C(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnCompleted_4CD6A76340A39000A51FC6A094E5855C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_3AFB80174F5944E91B5F84A0749E4474(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnNotifyEnd_3AFB80174F5944E91B5F84A0749E4474 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_3AFB80174F5944E91B5F84A0749E4474(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnNotifyBegin_3AFB80174F5944E91B5F84A0749E4474 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_3AFB80174F5944E91B5F84A0749E4474(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnInterrupted_3AFB80174F5944E91B5F84A0749E4474 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_3AFB80174F5944E91B5F84A0749E4474(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnBlendOut_3AFB80174F5944E91B5F84A0749E4474 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_3AFB80174F5944E91B5F84A0749E4474(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnCompleted_3AFB80174F5944E91B5F84A0749E4474 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_C170CBC34305B9D07B580F9BDE769296(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnNotifyEnd_C170CBC34305B9D07B580F9BDE769296 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_C170CBC34305B9D07B580F9BDE769296(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnNotifyBegin_C170CBC34305B9D07B580F9BDE769296 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_C170CBC34305B9D07B580F9BDE769296(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnInterrupted_C170CBC34305B9D07B580F9BDE769296 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_C170CBC34305B9D07B580F9BDE769296(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnBlendOut_C170CBC34305B9D07B580F9BDE769296 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_C170CBC34305B9D07B580F9BDE769296(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnCompleted_C170CBC34305B9D07B580F9BDE769296 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_43C8CEFD47AFED6F97FF26838A58B80F(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnNotifyEnd_43C8CEFD47AFED6F97FF26838A58B80F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_43C8CEFD47AFED6F97FF26838A58B80F(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnNotifyBegin_43C8CEFD47AFED6F97FF26838A58B80F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_43C8CEFD47AFED6F97FF26838A58B80F(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnInterrupted_43C8CEFD47AFED6F97FF26838A58B80F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_43C8CEFD47AFED6F97FF26838A58B80F(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnBlendOut_43C8CEFD47AFED6F97FF26838A58B80F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_43C8CEFD47AFED6F97FF26838A58B80F(struct FName NotifyName); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.OnCompleted_43C8CEFD47AFED6F97FF26838A58B80F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_NoHugCryEnd(); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.Multi_NoHugCryEnd // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayBornAMEnded(); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.PlayBornAMEnded // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_DoAttach(struct ANOS_PlayerHuman* HugHuman, float HugDuration); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.Multi_DoAttach // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_DoHugAttach(struct ANOS_PlayerHuman* HugHuman, float HugDuration); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.CE_DoHugAttach // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_DoHugDetach(); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.CE_DoHugDetach // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_DoDetach(struct ANOS_PlayerHuman* HugHuman); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.Multi_DoDetach // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_ForceCancelHug(); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.CE_ForceCancelHug // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void XiaoXiaoJiangNoHugCountdownSetState(); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.XiaoXiaoJiangNoHugCountdownSetState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PartnerXiaoXiaoJiang(int32_t EntryPoint); // Function BP_PartnerXiaoXiaoJiang.BP_PartnerXiaoXiaoJiang_C.ExecuteUbergraph_BP_PartnerXiaoXiaoJiang // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

