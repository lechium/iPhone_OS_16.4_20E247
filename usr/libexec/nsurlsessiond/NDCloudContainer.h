//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRContainersMonitor, NSString;

@interface NDCloudContainer
{
    BRContainersMonitor *_monitor;	// 40 = 0x28
    _Bool _isForeground;	// 48 = 0x30
    _Bool _initializedForegroundStateFromMonitorCallback;	// 49 = 0x31
}

+ (id)bundleIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;	// IMP=0x002000000003f876
+ (id)containerIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;	// IMP=0x001000000003f7dc
- (void).cxx_destruct;	// IMP=0x002000000003f7c9
- (void)containerDidEnterForeground:(id)arg1;	// IMP=0x001000000003f6dc
- (void)containerDidEnterBackground:(id)arg1;	// IMP=0x001000000003f5ef
- (void)removeObserver:(id)arg1;	// IMP=0x001000000003f518
- (void)addObserver:(id)arg1;	// IMP=0x001000000003f441
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000003f439
- (_Bool)supportsWakes;	// IMP=0x001000000003f431
- (_Bool)isForeground;	// IMP=0x001000000003f34b
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x001000000003f343
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000003f293

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

