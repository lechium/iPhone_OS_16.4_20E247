//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSListController.h>

@class NSSManager;

@interface COSAirplaneModeController : BPSListController
{
    _Bool _bluetoothWithAirplaneMode;	// 192 = 0xc0
    _Bool _wifiWithAirplaneMode;	// 193 = 0xc1
    _Bool _airplaneModeSettingsLoaded;	// 194 = 0xc2
    NSSManager *_nssManager;	// 200 = 0xc8
}

+ (_Bool)isMirroring;	// IMP=0x00400000000f8e73
- (void).cxx_destruct;	// IMP=0x00200000000f8f7e
@property(nonatomic) _Bool airplaneModeSettingsLoaded; // @synthesize airplaneModeSettingsLoaded=_airplaneModeSettingsLoaded;
@property(nonatomic) _Bool wifiWithAirplaneMode; // @synthesize wifiWithAirplaneMode=_wifiWithAirplaneMode;
@property(nonatomic) _Bool bluetoothWithAirplaneMode; // @synthesize bluetoothWithAirplaneMode=_bluetoothWithAirplaneMode;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
- (id)disableAPMSettings:(id)arg1;	// IMP=0x00100000000f8c39
- (void)updateSettingsSpecifiersForChanges:(id)arg1;	// IMP=0x00100000000f8aa7
- (void)changeAirplaneModeSettings;	// IMP=0x00000000000f882a
- (void)_recheckAPMSettings;	// IMP=0x00100000000f87b4
- (void)retrieveAirplaneModeSettings;	// IMP=0x00100000000f82af
- (void)setWifiOn:(id)arg1 specifier:(id)arg2;	// IMP=0x00100000000f81af
- (id)wifiOn:(id)arg1;	// IMP=0x00100000000f817a
- (void)setBluetoothOn:(id)arg1 specifier:(id)arg2;	// IMP=0x00100000000f809a
- (id)bluetoothOn:(id)arg1;	// IMP=0x00100000000f8065
- (void)addSettingsForMirrorOff;	// IMP=0x00100000000f8053
- (void)hideSettingsForMirrorOn;	// IMP=0x00100000000f7f47
- (void)setMirror:(id)arg1 specifier:(id)arg2;	// IMP=0x00100000000f7ecf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000f7e77
- (id)specifiers;	// IMP=0x00100000000f78ef
- (void)dealloc;	// IMP=0x00100000000f78a2
- (id)init;	// IMP=0x00100000000f77d9

@end
