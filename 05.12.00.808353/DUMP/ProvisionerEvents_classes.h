// Class ProvisionerEvents.ProvisionerGameDataEventReceiver
// Size: 0x50 (Inherited: 0x30)
struct UProvisionerGameDataEventReceiver : UBaseGameDataEventReceiver {
	char pad_30[0x10]; // 0x30(0x10)
	struct UGameDataExporter* GameDataExporter; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

