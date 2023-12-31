//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHSNSURLSessiondService, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface NDChronoKitLauncher : NSObject
{
    CHSNSURLSessiondService *_service;	// 8 = 0x8
    NSMutableDictionary *_pendingLaunches;	// 16 = 0x10
    NSMutableDictionary *_observers;	// 24 = 0x18
    NSMutableSet *_monitoredBundleIDs;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *;	// 40 = 0x28
}

+ (id)sharedLauncher;	// IMP=0x004000000005d06d
- (void).cxx_destruct;	// IMP=0x002000000005ce1e
- (_Bool)extension:(id)arg1 isHandlingBackgroundSessionWithIdentifier:(id)arg2 withSessionUUID:(id)arg3;	// IMP=0x001000000005ce16
- (void)_onqueue_removePendingLaunchForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000005cc13
- (void)removePendingLaunchForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000005cb5c
- (void)_onqueue_wakeUpExtension:(id)arg1 forSession:(id)arg2 withSessionUUID:(id)arg3 wakeRequirement:(long long)arg4;	// IMP=0x001000000005c74c
- (_Bool)wakeUpExtension:(id)arg1 forSession:(id)arg2 withSessionUUID:(id)arg3 wakeRequirement:(long long)arg4;	// IMP=0x001000000005c65a
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x001000000005c5cf
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x001000000005c544
- (void)removeObserver:(id)arg1 forExtension:(id)arg2;	// IMP=0x001000000005c485
- (void)addObserver:(id)arg1 forExtension:(id)arg2;	// IMP=0x001000000005c3c6
- (id)init;	// IMP=0x001000000005c265

@end

