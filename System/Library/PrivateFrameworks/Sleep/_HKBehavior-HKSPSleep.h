//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKBehavior.h>

@interface _HKBehavior (HKSPSleep)
- (unsigned long long)hksp_device;	// IMP=0x0030000000019cc8
- (_Bool)hksp_isDeviceUnlocked;	// IMP=0x0030000000019cc0
@property(nonatomic) _Bool hksp_isRunningUnitTests;
- (_Bool)hksp_demoMode;	// IMP=0x0030000000019bec
- (void)hksp_activePairedDeviceHasSleepAppInstalledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0030000000019996
- (_Bool)hksp_activePairedDeviceHasHomeButton;	// IMP=0x00300000000198e4
- (_Bool)_hksp_activePairedDeviceSupportsCapability:(id)arg1;	// IMP=0x003000000001984b
- (_Bool)hksp_activePairedDeviceSupportsFocusMode;	// IMP=0x00300000000197ea
- (_Bool)hksp_activePairedDeviceSupportsSleepStages;	// IMP=0x0030000000019789
- (_Bool)hksp_activePairedDeviceSupportsSleep;	// IMP=0x0030000000019728
- (_Bool)hksp_hasActivePairedDevice;	// IMP=0x00300000000196be
- (_Bool)hksp_supportsDailyAnalytics;	// IMP=0x003000000001969f
- (_Bool)hksp_supportsLegacySleepAlarms;	// IMP=0x003000000001965e
- (_Bool)hksp_supportsSleepAlarms;	// IMP=0x0030000000019641
- (_Bool)hksp_supportsCFUserNotifications;	// IMP=0x0030000000019612
- (_Bool)hksp_supportsUserNotificationCenter;	// IMP=0x00300000000195f5
- (_Bool)hksp_supportsWakeDetection;	// IMP=0x00300000000195d8
- (_Bool)hksp_supportsGoodMorningAlerts;	// IMP=0x00300000000195bb
- (_Bool)hksp_supportsSleepTracking;	// IMP=0x003000000001959e
- (_Bool)hksp_supportsWakeUpResults;	// IMP=0x003000000001955d
- (_Bool)hksp_supportsSleepWidget;	// IMP=0x003000000001951e
- (_Bool)hksp_supportsHealthData;	// IMP=0x003000000001950c
- (_Bool)hksp_supportsSleepLockScreen;	// IMP=0x00300000000194ed
- (_Bool)hksp_supportsChargingReminders;	// IMP=0x00300000000194db
- (_Bool)hksp_supportsSleepDaemon;	// IMP=0x00300000000194c7
- (_Bool)hksp_supportsSleep;	// IMP=0x00300000000194b0
- (_Bool)_hksp_supportsSleep_checkTinker:(_Bool)arg1;	// IMP=0x00300000000192d4
@end
