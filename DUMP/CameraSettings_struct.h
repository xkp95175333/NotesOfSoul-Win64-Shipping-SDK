// UserDefinedStruct CameraSettings.CameraSettings
// Size: 0x50 (Inherited: 0x00)
struct FCameraSettings {
	float TargetArmLength_2_4CF495804C45F21B7F9C8589345B0FE5; // 0x00(0x04)
	struct FVector SocketOffset_5_34B1F2644290538776D422A028DE6B30; // 0x04(0x0c)
	float LagSpeed_8_BDB960A74493A95BEF9A90B3C8C577BA; // 0x10(0x04)
	float RotationLagSpeed_10_B01E68F849F391C65F3682BD9C3219B9; // 0x14(0x04)
	bool DoCollisionTest_12_1EC75993495EA471473E328B8784A5DB; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FRotator CameraRotator_18_A05A7B9B44C36B419890939A74B0CBBE; // 0x1c(0x0c)
	struct TSoftObjectPtr<struct UCurveFloat> CameraCurve_24_59E6A0AE48269207A02E828D64E06B52; // 0x28(0x28)
};

