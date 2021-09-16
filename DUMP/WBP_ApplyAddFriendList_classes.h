// WidgetBlueprintGeneratedClass WBP_ApplyAddFriendList.WBP_ApplyAddFriendList_C
// Size: 0x270 (Inherited: 0x260)
struct UWBP_ApplyAddFriendList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTileView* TileView_51; // 0x268(0x08)

	void UpdateFriendAddList(struct TArray<struct FKxFriendData> AddList); // Function WBP_ApplyAddFriendList.WBP_ApplyAddFriendList_C.UpdateFriendAddList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ApplyAddFriendList.WBP_ApplyAddFriendList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnFriendAddListUpdate_Event_1(struct TArray<struct FKxFriendData> DataList); // Function WBP_ApplyAddFriendList.WBP_ApplyAddFriendList_C.OnFriendAddListUpdate_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ApplyAddFriendList(int32_t EntryPoint); // Function WBP_ApplyAddFriendList.WBP_ApplyAddFriendList_C.ExecuteUbergraph_WBP_ApplyAddFriendList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

