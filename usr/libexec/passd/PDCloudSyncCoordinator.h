//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDCardCloudManager, PDCardCloudManagerChangeRegistry, PDCardFileManager, PDDatabaseManager;
@protocol OS_dispatch_source;

@interface PDCloudSyncCoordinator : NSObject
{
    PDCardCloudManagerChangeRegistry *_changeRegistry;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDCardCloudManager *_cloudStoreManager;	// 24 = 0x18
    PDCardCloudManager *_secureCloudStoreManager;	// 32 = 0x20
    PDCardFileManager *_cardFileManager;	// 40 = 0x28
    PDCardCloudManager *_primaryCloudStoreManager;	// 48 = 0x30
    double _processPendingChangesDelay;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_processPendingChangesTimer;	// 64 = 0x40
    _Bool _didDropProcessPendingChangesAttempt;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000002f4108
- (void)clearChangeHistory;	// IMP=0x00100000002f40f2
- (void)resetMigration;	// IMP=0x00100000002f40bd
- (id)allLocalPassUniqueIDs;	// IMP=0x00100000002f4069
- (id)localPassesWithUniqueIDs:(id)arg1;	// IMP=0x00100000002f3fc6
- (id)localPassWithUniqueID:(id)arg1;	// IMP=0x00100000002f3ede
- (void)processPendingChangesAfterExecutionSaveRequest:(id)arg1;	// IMP=0x00100000002f3b6c
- (void)executeRemotePortionOfSaveRequest:(id)arg1;	// IMP=0x00100000002f37e9
- (void)executeLocalPortionOfSaveRequest:(id)arg1;	// IMP=0x00100000002f2688
- (void)executeSaveRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f2433
- (id)existingCatalog;	// IMP=0x00100000002f241d
- (id)localPassesMatchingPasses:(id)arg1;	// IMP=0x00100000002f239c
- (void)allLocalPasses:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f21f4
- (id)existingPassWithUniqueID:(id)arg1;	// IMP=0x00100000002f21e2
- (id)fetchChangeEvents;	// IMP=0x00100000002f21cc
- (void)didFinishSyncWithContainer:(id)arg1 error:(id)arg2;	// IMP=0x00100000002f2080
- (void)willDownloadAllDataFromContainer:(id)arg1;	// IMP=0x00100000002f204d
- (void)registerMissedChangeEventsForContainer:(id)arg1;	// IMP=0x00100000002f1d46
- (void)treatContanerManagerAsPrimary:(id)arg1;	// IMP=0x00100000002f1d35
- (void)containerManager:(id)arg1 willSyncWithContainer:(id)arg2 scanForMissedChanges:(_Bool)arg3;	// IMP=0x00100000002f1cd9
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000002f1c2a
- (void)scheduleProcessPendingChangesAttemptWhenConnetedToPowerSupply;	// IMP=0x00100000002f1ae7
- (void)rescheduleDroppedProcessPendingChangesIfNecessary;	// IMP=0x00100000002f1a62
- (void)eraseDroppedProcessPendingChangesAttempt;	// IMP=0x00100000002f1a58
- (void)markDroppedProcessPendingChangesAttempt;	// IMP=0x00100000002f1a4e
- (void)cancelProcessPendingChangesAttempt;	// IMP=0x00100000002f1a18
- (void)schedueDelayedProcessPendingChangesBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f18e1
- (_Bool)attemptToProcessPendingChangesAlreadyScheduled;	// IMP=0x00100000002f18d3
- (void)cancelExistingProcessPendingChangesAttemptIfNecessary;	// IMP=0x00100000002f18a5
- (void)increasePendingChangesDelay;	// IMP=0x00100000002f188d
- (_Bool)hasNoPendingChanges;	// IMP=0x00100000002f1870
- (_Bool)resetPendingChangesDelay;	// IMP=0x00100000002f185a
- (_Bool)hasReachedPendingChangesDelayThreshold;	// IMP=0x00100000002f1844
- (_Bool)hasReachedExtendedPendingChangesDelay;	// IMP=0x00100000002f182e
- (void)scheduleProcessPendingChangesAttempt;	// IMP=0x00100000002f12f7
- (void)processPendingChanges;	// IMP=0x00100000002f11a8
- (void)deleteCloudSyncRelatedInformation;	// IMP=0x00100000002f114f
- (void)catalogUpdated:(id)arg1 source:(long long)arg2;	// IMP=0x00100000002f110e
- (void)passDeleted:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x00100000002f0fbb
- (void)passUpdated:(id)arg1 source:(long long)arg2;	// IMP=0x00100000002f0ee2
- (void)passAdded:(id)arg1 source:(long long)arg2;	// IMP=0x00100000002f0e09
- (id)initWithChangeRegistry:(id)arg1 databaseManager:(id)arg2 cardFileManager:(id)arg3 cloudStoreManager:(id)arg4 secureCloudStoreManager:(id)arg5;	// IMP=0x00100000002f0c90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
