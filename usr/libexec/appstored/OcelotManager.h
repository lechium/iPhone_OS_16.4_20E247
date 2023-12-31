//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSObject, NSString, TaskQueue, UnfairLock;
@protocol OS_dispatch_queue;

@interface OcelotManager
{
    int _appStoreCacheUpdatedNotificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    NSNumber *_cachedSubscribedAccountID;	// 24 = 0x18
    NSNumber *_cachedSubscribedState;	// 32 = 0x20
    NSString *_cachedSubscribedStateString;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_distNotificationQueue;	// 64 = 0x40
    NSString *_hardwareFamily;	// 72 = 0x48
    NSString *_hardwareModel;	// 80 = 0x50
    _Bool _isRetailDemoMode;	// 88 = 0x58
    UnfairLock *_lock;	// 96 = 0x60
    NSString *_os;	// 104 = 0x68
    NSString *_osBuild;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_sbsyncQueue;	// 120 = 0x78
    TaskQueue *_taskQueue;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_topAppsQueue;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_upsellQueue;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000001d762d
- (void)_handleRepairBundleIDNotification:(id)arg1;	// IMP=0x00100000001d51d7
- (void)_handleNetworkStateDidChangeNotification:(id)arg1;	// IMP=0x00100000001d49a9
- (id)getLaunchAppEventsWithContext:(id)arg1;	// IMP=0x00100000001d25a7
- (_Bool)isCandidateAppProxy:(id)arg1 isMetadataLookup:(_Bool)arg2;	// IMP=0x00100000001d2555
- (void)decorateMetricsEvent:(id)arg1 context:(id)arg2;	// IMP=0x00100000001d1687
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x00100000001d1357
- (id)init;	// IMP=0x00100000001ca744

@end

