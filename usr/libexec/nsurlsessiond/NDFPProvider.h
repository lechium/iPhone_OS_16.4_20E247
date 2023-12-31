//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPProviderMonitor, NDSpringBoardApplication, NSString;

@interface NDFPProvider
{
    FPProviderMonitor *_monitor;	// 40 = 0x28
    _Bool _isForeground;	// 48 = 0x30
    _Bool _initializedForegroundState;	// 49 = 0x31
    NDSpringBoardApplication *_springboardApplication;	// 56 = 0x38
}

+ (id)providerIDForBundle:(id)arg1 sharedContainerIdentifier:(id)arg2;	// IMP=0x002000000003f1f9
- (void).cxx_destruct;	// IMP=0x002000000003dec6
- (void)providerDidEnterForeground:(id)arg1;	// IMP=0x001000000003ddd9
- (void)providerDidEnterBackground:(id)arg1;	// IMP=0x001000000003dcec
- (void)removeObserver:(id)arg1;	// IMP=0x001000000003dc15
- (void)addObserver:(id)arg1;	// IMP=0x001000000003db3e
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000003db21
- (_Bool)supportsWakes;	// IMP=0x001000000003db04
- (_Bool)isForeground;	// IMP=0x001000000003da6d
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x001000000003da65
- (id)initWithIdentifier:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x001000000003d95b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

