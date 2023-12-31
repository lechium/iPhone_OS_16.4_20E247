//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDTimer, NSMutableSet, _TtC8MapsSync13MapsSyncStore, _TtC8MapsSync23MapsSyncStoreController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSPSharedTripBlocklist : NSObject
{
    NSMutableSet *_blockedIdentifiers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_storeQueue;	// 24 = 0x18
    _TtC8MapsSync23MapsSyncStoreController *_storeController;	// 32 = 0x20
    _TtC8MapsSync13MapsSyncStore *_store;	// 40 = 0x28
    _Bool _waitingForStoreToLoad;	// 48 = 0x30
    GCDTimer *_storeLoadTimeoutTimer;	// 56 = 0x38
}

+ (void)migrateFromiCloudKVSIfNeeded;	// IMP=0x001000000003d1c7
+ (id)sharedInstance;	// IMP=0x0010000000039502
- (void).cxx_destruct;	// IMP=0x000000000003da24
- (void)storeControllerWithDataChanged:(id)arg1;	// IMP=0x000000000003d060
- (void)storeControllerWithFailedToLoad:(id)arg1;	// IMP=0x000000000003cef2
- (void)storeControllerWithDidLoad:(id)arg1;	// IMP=0x000000000003cc5e
- (void)_cancelTimeoutTimer;	// IMP=0x000000000003cb25
- (void)_resumeIsolationQueueIfNeeded;	// IMP=0x000000000003c909
- (id)_fetchSyncedIdentifiers;	// IMP=0x000000000003c719
- (void)_reloadBlockedIdentifiersFromSync;	// IMP=0x000000000003c24b
- (void)_purgeExpiredIdentifiersIn:(id)arg1;	// IMP=0x000000000003b697
- (void)purgeExpiredIdentifiers;	// IMP=0x000000000003b4e3
- (void)clearBlockedIdentifiers;	// IMP=0x000000000003b1ea
- (void)unblockIdentifiers:(id)arg1;	// IMP=0x000000000003ab08
- (void)blockIdentifiers:(id)arg1;	// IMP=0x000000000003a2e1
- (void)blockIdentifier:(id)arg1;	// IMP=0x000000000003a232
- (_Bool)containsIdentifier:(id)arg1;	// IMP=0x0000000000039fe5
- (_Bool)containsAnyIdentifiersInArray:(id)arg1;	// IMP=0x0000000000039cec
- (id)description;	// IMP=0x000000000003990f
- (id)init;	// IMP=0x0000000000039587

@end

