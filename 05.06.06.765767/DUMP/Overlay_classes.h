// Class Overlay.Overlays
// Size: 0x30 (Inherited: 0x30)
struct UOverlays : UObject {
};

// Class Overlay.BasicOverlays
// Size: 0x40 (Inherited: 0x30)
struct UBasicOverlays : UOverlays {
	struct TArray<struct FOverlayItem> Overlays; // 0x30(0x10)
};

// Class Overlay.LocalizedOverlays
// Size: 0x88 (Inherited: 0x30)
struct ULocalizedOverlays : UOverlays {
	struct UBasicOverlays* DefaultOverlays; // 0x30(0x08)
	struct TMap<struct FString, struct UBasicOverlays*> LocaleToOverlaysMap; // 0x38(0x50)
};

