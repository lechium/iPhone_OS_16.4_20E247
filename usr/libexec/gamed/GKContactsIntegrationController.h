//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, GKContactsIntegrationControllerSettings, GKContactsIntegrationEligibilityChecker, GKContactsIntegrationMetricsHandler, GKContactsIntegrationMigrator, GKContactsIntegrationTimer, GKDispatchGroup, GKIDSConnectionManager, GKPlayerInternalProvider, NSString;
@protocol OS_dispatch_queue;

@interface GKContactsIntegrationController : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
    GKContactsIntegrationControllerSettings *_settings;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_idsBatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_contactsBatchQueue;	// 40 = 0x28
    GKContactsIntegrationTimer *_idsCacheUpdateTimer;	// 48 = 0x30
    GKContactsIntegrationTimer *_idsFetchDelayTimer;	// 56 = 0x38
    GKPlayerInternalProvider *_playerProvider;	// 64 = 0x40
    GKContactsIntegrationEligibilityChecker *_eligibilityChecker;	// 72 = 0x48
    GKIDSConnectionManager *_connectionManager;	// 80 = 0x50
    GKContactsIntegrationMetricsHandler *_metricsHandler;	// 88 = 0x58
    GKDispatchGroup *_contactsUpdateGroup;	// 96 = 0x60
    GKDispatchGroup *_idsUpdateGroup;	// 104 = 0x68
    GKContactsIntegrationMigrator *_migrator;	// 112 = 0x70
    GKContactsIntegrationTimer *_contactsChangedCoalescingTimer;	// 120 = 0x78
    GKContactsIntegrationTimer *_reachabilityChangedCoalescingTimer;	// 128 = 0x80
}

+ (id)sharedController;	// IMP=0x00200000001d86b4
+ (id)dateFromServerResult:(id)arg1;	// IMP=0x00100000001d864a
+ (id)associationIDFromServerResult:(id)arg1;	// IMP=0x00100000001d85c3
+ (int)integrationConsentValueFromServerResult:(id)arg1;	// IMP=0x00100000001d8521
- (void).cxx_destruct;	// IMP=0x00200000001e6f9a
@property(retain, nonatomic) GKContactsIntegrationTimer *reachabilityChangedCoalescingTimer; // @synthesize reachabilityChangedCoalescingTimer=_reachabilityChangedCoalescingTimer;
@property(retain, nonatomic) GKContactsIntegrationTimer *contactsChangedCoalescingTimer; // @synthesize contactsChangedCoalescingTimer=_contactsChangedCoalescingTimer;
@property(retain, nonatomic) GKContactsIntegrationMigrator *migrator; // @synthesize migrator=_migrator;
@property(retain, nonatomic) GKDispatchGroup *idsUpdateGroup; // @synthesize idsUpdateGroup=_idsUpdateGroup;
@property(retain, nonatomic) GKDispatchGroup *contactsUpdateGroup; // @synthesize contactsUpdateGroup=_contactsUpdateGroup;
@property(retain, nonatomic) GKContactsIntegrationMetricsHandler *metricsHandler; // @synthesize metricsHandler=_metricsHandler;
@property(retain, nonatomic) GKIDSConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(retain, nonatomic) GKContactsIntegrationEligibilityChecker *eligibilityChecker; // @synthesize eligibilityChecker=_eligibilityChecker;
@property(retain, nonatomic) GKPlayerInternalProvider *playerProvider; // @synthesize playerProvider=_playerProvider;
@property(retain, nonatomic) GKContactsIntegrationTimer *idsFetchDelayTimer; // @synthesize idsFetchDelayTimer=_idsFetchDelayTimer;
@property(retain, nonatomic) GKContactsIntegrationTimer *idsCacheUpdateTimer; // @synthesize idsCacheUpdateTimer=_idsCacheUpdateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contactsBatchQueue; // @synthesize contactsBatchQueue=_contactsBatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsBatchQueue; // @synthesize idsBatchQueue=_idsBatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain) GKContactsIntegrationControllerSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)expiredIDSEntriesWithFetchLimit:(long long)arg1 matchingHandles:(id)arg2 usingSettings:(id)arg3 withContext:(id)arg4;	// IMP=0x00100000001e6a61
- (id)expirationPredicateForCohort:(int)arg1 matchingHandles:(id)arg2 usingSettings:(id)arg3;	// IMP=0x00100000001e6952
- (void)updateIDSEntriesFromOldFriendEntries:(id)arg1 againstServerRepresentation:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001e5ce6
- (void)connectionManagerReady:(id)arg1;	// IMP=0x00100000001e5af1
- (void)populateContactInfoForProfiles:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001e4d04
- (id)createFriendAssociationIDMapWithIDs:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001e468f
- (id)createRelationshipWithHandle:(id)arg1 contactAssociationID:(id)arg2 usingFriendMap:(id)arg3 withContext:(id)arg4;	// IMP=0x00100000001e4517
- (id)relationshipsForHandles:(id)arg1 contactAssociationIDMap:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001e3e42
- (id)handleMapForContactAssociationIDs:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001e3ddd
- (id)contactAssociationIDMapForContactAssociationIDs:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001e3d78
- (id)contactAssociationIDMapForHandles:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001e3d13
- (void)clearCachesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e392e
- (void)stopCacheUpdates;	// IMP=0x00100000001e3642
- (void)setupIDSCacheUpdateTimerWithStartTime:(double)arg1;	// IMP=0x00100000001e2c4f
- (void)stop;	// IMP=0x00100000001e28e9
- (void)startIDSSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e2023
- (_Bool)canSyncWithIDS;	// IMP=0x00100000001e1b74
- (void)storeBagUpdated:(id)arg1;	// IMP=0x00100000001e1194
- (void)handleReachabilityChanged;	// IMP=0x00100000001e0c91
- (void)reachabilityChanged:(id)arg1;	// IMP=0x00100000001e0663
- (void)contactsChanged:(id)arg1;	// IMP=0x00100000001e00da
- (void)playerAuthenticated:(id)arg1;	// IMP=0x00100000001dfd3a
- (void)relationshipsForContacts:(id)arg1 updateExistingContactEntries:(_Bool)arg2 alreadyOverIDSLimit:(_Bool)arg3 allowingIneligibility:(unsigned long long)arg4 usingSettings:(id)arg5 meContactID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000001deabd
- (id)relationshipForMeContact;	// IMP=0x00100000001de642
- (void)getRelationshipsForContacts:(id)arg1 updateExistingContactEntries:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ddbe8
- (void)handleIDSFetchResult:(id)arg1 handlesToQuery:(id)arg2 rangeToFetch:(struct _NSRange)arg3 maxBatchSize:(unsigned long long)arg4 numberOfHandlesLeft:(long long)arg5 allowingIneligibility:(unsigned long long)arg6 settings:(id)arg7 withDelay:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00100000001dc7ba
- (void)fetchIDSDataAndUpdateCacheForHandles:(id)arg1 rangeToFetch:(struct _NSRange)arg2 maxBatchSize:(unsigned long long)arg3 numberOfHandlesLeft:(long long)arg4 allowingIneligibility:(unsigned long long)arg5 settings:(id)arg6 withDelay:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000001db9ea
- (void)fetchIDSDataAndUpdateCacheForHandles:(id)arg1 allowingIneligibility:(unsigned long long)arg2 usingSettings:(id)arg3 withDelay:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001db4c1
- (void)syncIDSDataForHandles:(id)arg1 forcefully:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001db306
- (void)updateIntervalHasFinishedExceedingIDSLimit:(_Bool)arg1 allowingIneligibility:(unsigned long long)arg2 usingSettings:(id)arg3;	// IMP=0x00100000001dab66
- (void)refetchIDSHandlesInPriorityOrderWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001da054
- (long long)calculateRemainingIDSHandleQueryCountUsingSettings:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001d9ef9
- (void)startContactsSyncAllowingChangeHistory:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d8e0a
- (void)startWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d8be9
- (_Bool)isEligibleAllowingIneligibility:(unsigned long long)arg1 usingSettings:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001d8ac1
- (id)initWithNotificationCenter:(id)arg1 connectionManager:(id)arg2 playerProvider:(id)arg3 eligibilityChecker:(id)arg4 metricsHandler:(id)arg5 contactStore:(id)arg6 migrator:(id)arg7;	// IMP=0x00100000001d887e
- (id)init;	// IMP=0x00100000001d8722

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
