// BlueprintGeneratedClass GA_Shelter.GA_Shelter_C
// Size: 0x4c0 (Inherited: 0x490)
struct UGA_Shelter_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Char; // 0x498(0x08)
	struct ABP_ShelterBase_C* Shelter; // 0x4a0(0x08)
	struct FActiveGameplayEffectHandle InteractingGEHandle; // 0x4a8(0x08)
	int32_t InteractIndex; // 0x4b0(0x04)
	struct FRotator OriginalRotation; // 0x4b4(0x0c)

	void Trace Check(); // Function GA_Shelter.GA_Shelter_C.Trace Check // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActiveShelterCamera(); // Function GA_Shelter.GA_Shelter_C.ActiveShelterCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BasicCheck(struct UObject* Object); // Function GA_Shelter.GA_Shelter_C.BasicCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InShelter(); // Function GA_Shelter.GA_Shelter_C.InShelter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddShelterBuff(); // Function GA_Shelter.GA_Shelter_C.AddShelterBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_52CB13F94592547B36F8A3958C6A48A2(); // Function GA_Shelter.GA_Shelter_C.OnCancelled_52CB13F94592547B36F8A3958C6A48A2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_52CB13F94592547B36F8A3958C6A48A2(); // Function GA_Shelter.GA_Shelter_C.OnInterrupted_52CB13F94592547B36F8A3958C6A48A2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_52CB13F94592547B36F8A3958C6A48A2(); // Function GA_Shelter.GA_Shelter_C.OnBlendOut_52CB13F94592547B36F8A3958C6A48A2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_52CB13F94592547B36F8A3958C6A48A2(); // Function GA_Shelter.GA_Shelter_C.OnCompleted_52CB13F94592547B36F8A3958C6A48A2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_0A45139A435AB4C091355896CD15D487(); // Function GA_Shelter.GA_Shelter_C.OnFinish_0A45139A435AB4C091355896CD15D487 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_2AEC55C24D7EF74293DEBB8AC07E1F05(); // Function GA_Shelter.GA_Shelter_C.OnCancelled_2AEC55C24D7EF74293DEBB8AC07E1F05 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_2AEC55C24D7EF74293DEBB8AC07E1F05(); // Function GA_Shelter.GA_Shelter_C.OnInterrupted_2AEC55C24D7EF74293DEBB8AC07E1F05 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_2AEC55C24D7EF74293DEBB8AC07E1F05(); // Function GA_Shelter.GA_Shelter_C.OnBlendOut_2AEC55C24D7EF74293DEBB8AC07E1F05 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_2AEC55C24D7EF74293DEBB8AC07E1F05(); // Function GA_Shelter.GA_Shelter_C.OnCompleted_2AEC55C24D7EF74293DEBB8AC07E1F05 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_06E63FAA4366A1155C9413A4D9ACEEB5(float TimeWaited); // Function GA_Shelter.GA_Shelter_C.OnPress_06E63FAA4366A1155C9413A4D9ACEEB5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_14AC18644A7FEB7CBEB7C693AD214714(); // Function GA_Shelter.GA_Shelter_C.OnCancelled_14AC18644A7FEB7CBEB7C693AD214714 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_14AC18644A7FEB7CBEB7C693AD214714(); // Function GA_Shelter.GA_Shelter_C.OnInterrupted_14AC18644A7FEB7CBEB7C693AD214714 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_14AC18644A7FEB7CBEB7C693AD214714(); // Function GA_Shelter.GA_Shelter_C.OnBlendOut_14AC18644A7FEB7CBEB7C693AD214714 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_14AC18644A7FEB7CBEB7C693AD214714(); // Function GA_Shelter.GA_Shelter_C.OnCompleted_14AC18644A7FEB7CBEB7C693AD214714 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_91CD8ACE4799FC1CA89513BB95951676(); // Function GA_Shelter.GA_Shelter_C.OnCancelled_91CD8ACE4799FC1CA89513BB95951676 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_91CD8ACE4799FC1CA89513BB95951676(); // Function GA_Shelter.GA_Shelter_C.OnInterrupted_91CD8ACE4799FC1CA89513BB95951676 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_91CD8ACE4799FC1CA89513BB95951676(); // Function GA_Shelter.GA_Shelter_C.OnBlendOut_91CD8ACE4799FC1CA89513BB95951676 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_91CD8ACE4799FC1CA89513BB95951676(); // Function GA_Shelter.GA_Shelter_C.OnCompleted_91CD8ACE4799FC1CA89513BB95951676 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_BAFF5BC44F99DAAAE20D6F81ED310487(); // Function GA_Shelter.GA_Shelter_C.OnCancelled_BAFF5BC44F99DAAAE20D6F81ED310487 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_BAFF5BC44F99DAAAE20D6F81ED310487(); // Function GA_Shelter.GA_Shelter_C.OnInterrupted_BAFF5BC44F99DAAAE20D6F81ED310487 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_BAFF5BC44F99DAAAE20D6F81ED310487(); // Function GA_Shelter.GA_Shelter_C.OnBlendOut_BAFF5BC44F99DAAAE20D6F81ED310487 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_BAFF5BC44F99DAAAE20D6F81ED310487(); // Function GA_Shelter.GA_Shelter_C.OnCompleted_BAFF5BC44F99DAAAE20D6F81ED310487 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_44EC680A4B1FF11C5E09C6A4EE56CC96(struct FGameplayEventData Payload); // Function GA_Shelter.GA_Shelter_C.EventReceived_44EC680A4B1FF11C5E09C6A4EE56CC96 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_A46F22304D182C705493DDA6C65F85F9(); // Function GA_Shelter.GA_Shelter_C.OnSync_A46F22304D182C705493DDA6C65F85F9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_59A58CEF42183B107A9BE5B784443E7E(struct FGameplayEventData Payload); // Function GA_Shelter.GA_Shelter_C.EventReceived_59A58CEF42183B107A9BE5B784443E7E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_52786A4B4358B45ED9AB37BB25EFE290(); // Function GA_Shelter.GA_Shelter_C.OnSync_52786A4B4358B45ED9AB37BB25EFE290 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Shelter.GA_Shelter_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Shelter.GA_Shelter_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ServerTurn(bool Recover); // Function GA_Shelter.GA_Shelter_C.ServerTurn // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MultiTurn(bool Recover); // Function GA_Shelter.GA_Shelter_C.MultiTurn // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Shelter(int32_t EntryPoint); // Function GA_Shelter.GA_Shelter_C.ExecuteUbergraph_GA_Shelter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

