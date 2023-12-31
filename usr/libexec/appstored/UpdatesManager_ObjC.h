//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSRecursiveLock, NSSet, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface UpdatesManager_ObjC : NSObject
{
    _Bool _agentRequestedUpdateAll;	// 8 = 0x8
    _Bool _automaticDownloadsAreDisabled;	// 9 = 0x9
    NSNumber *_currentAccountDSID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_badgeQueue;	// 40 = 0x28
    _Bool _hasLoadedTVProviderApps;	// 48 = 0x30
    NSSet *_tvProviderApps;	// 56 = 0x38
    NSRecursiveLock *_DSIDLessAppsLock;	// 64 = 0x40
    TaskQueue *_taskQueue;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x00200000001a11fa
- (void).cxx_destruct;	// IMP=0x00200000001a2033
- (void)verifyUpdatesForRemovedBundleIDs:(id)arg1;	// IMP=0x00100000001a1c67
- (void)verifyUpdatesFollowingExternalAppInstall:(id)arg1;	// IMP=0x00100000001a1c61
- (void)verifyPendingUpdates:(id)arg1;	// IMP=0x00100000001a1c5b
- (void)verifyAllPendingUpdates;	// IMP=0x00100000001a197d
- (void)updateAllWithOrder:(id)arg1 requestToken:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a190d
- (void)showPendingUpdatesBadge;	// IMP=0x00100000001a1907
- (void)setupFollowingMigration;	// IMP=0x00100000001a1901
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1824
- (void)reloadUpdatesWithContext:(id)arg1;	// IMP=0x00100000001a1772
- (void)reloadManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1704
- (void)reloadFromServerWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a169b
- (void)reloadFromServerInBackgroundWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a162d
- (void)refreshUpdateCountWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a15c4
- (void)reloadApplicationBadgeWithReason:(id)arg1;	// IMP=0x00100000001a15be
- (void)performPostRestoreUpdatesCheck;	// IMP=0x00100000001a15b8
- (void)performBackgroundSoftwareUpdateCheck;	// IMP=0x00100000001a15b2
- (void)postProcessBackgroundUpdateMetrics;	// IMP=0x00100000001a15ac
- (void)noteUpdatesStateChangedWithReason:(id)arg1 logKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a15a1
- (void)noteUpdatesStateChanged:(id)arg1 logKey:(id)arg2;	// IMP=0x00100000001a158c
- (void)hidePendingUpdatesBadge;	// IMP=0x00100000001a1586
- (void)getUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1571
- (void)getUpdateMetadataForBundleID:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1561
- (void)getUpdatesWithContext:(id)arg1;	// IMP=0x00100000001a14af
- (void)getManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1441
- (void)confirmAgentRequestedUpdateAll:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a142b
- (void)autoUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a13e6
- (void)isTVProviderApp:(long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a13d6
- (id)init;	// IMP=0x00100000001a124f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

