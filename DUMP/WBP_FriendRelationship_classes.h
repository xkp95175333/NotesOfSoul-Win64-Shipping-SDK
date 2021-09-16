// WidgetBlueprintGeneratedClass WBP_FriendRelationship.WBP_FriendRelationship_C
// Size: 0x270 (Inherited: 0x260)
struct UWBP_FriendRelationship_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UScrollBox* ScrollBox_29; // 0x268(0x08)

	void UpdateFriendRelationShipList(); // Function WBP_FriendRelationship.WBP_FriendRelationship_C.UpdateFriendRelationShipList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_FriendRelationship.WBP_FriendRelationship_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnFriendListUpdate_Event_1(struct TArray<struct FKxFriendData> DataList); // Function WBP_FriendRelationship.WBP_FriendRelationship_C.OnFriendListUpdate_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAddFriendRelationRsp_Event_1(int32_t code); // Function WBP_FriendRelationship.WBP_FriendRelationship_C.OnAddFriendRelationRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDeleteFriendRelationRsp_Event_1(int32_t code); // Function WBP_FriendRelationship.WBP_FriendRelationship_C.OnDeleteFriendRelationRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnModifyFriendRelationRsp_Event_1(int32_t code); // Function WBP_FriendRelationship.WBP_FriendRelationship_C.OnModifyFriendRelationRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_FriendRelationship(int32_t EntryPoint); // Function WBP_FriendRelationship.WBP_FriendRelationship_C.ExecuteUbergraph_WBP_FriendRelationship // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

