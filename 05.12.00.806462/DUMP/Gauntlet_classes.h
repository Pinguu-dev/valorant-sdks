// Class Gauntlet.GauntletTestController
// Size: 0x38 (Inherited: 0x30)
struct UGauntletTestController : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Gauntlet.GauntletTestControllerBootTest
// Size: 0x38 (Inherited: 0x38)
struct UGauntletTestControllerBootTest : UGauntletTestController {
};

// Class Gauntlet.GauntletTestControllerErrorTest
// Size: 0x58 (Inherited: 0x38)
struct UGauntletTestControllerErrorTest : UGauntletTestController {
	char pad_38[0x20]; // 0x38(0x20)
};

