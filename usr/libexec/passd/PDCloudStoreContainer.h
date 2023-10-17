//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableOrderedSet, NSMutableSet, NSString, PDCloudStoreContainerManager, PDCloudStoreRecordsRequest, PDCloudStoreResetRequest;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, PDCloudStoreContainerDelegate, PDCloudStoreDataSource;

@interface PDCloudStoreContainer : NSObject
{
    NSMutableSet *_initializationCompletionHandlers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_batchUpdateGroup;	// 24 = 0x18
    _Bool _shouldInvalidateCloudStore;	// 32 = 0x20
    _Bool _shouldCancelAllTasks;	// 33 = 0x21
    _Bool _isSetup;	// 34 = 0x22
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 48 = 0x30
    NSMutableOrderedSet *_fetchRequests;	// 56 = 0x38
    PDCloudStoreRecordsRequest *_currentRequest;	// 64 = 0x40
    NSMutableOrderedSet *_resetRequests;	// 72 = 0x48
    PDCloudStoreResetRequest *_currentResetRequest;	// 80 = 0x50
    _Bool _accountChangedNotificationReceived;	// 88 = 0x58
    _Bool _cloudContainerSetupInProgress;	// 89 = 0x59
    id <PDCloudStoreContainerDelegate> _delegate;	// 96 = 0x60
    id <PDCloudStoreDataSource> _dataSource;	// 104 = 0x68
    PDCloudStoreContainerManager *_containerManager;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_workQueue;	// 120 = 0x78
    NSError *_operationError;	// 128 = 0x80
    unsigned long long _nextExpectedState;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000001d04ab
@property(nonatomic) _Bool cloudContainerSetupInProgress; // @synthesize cloudContainerSetupInProgress=_cloudContainerSetupInProgress;
@property(nonatomic) _Bool accountChangedNotificationReceived; // @synthesize accountChangedNotificationReceived=_accountChangedNotificationReceived;
@property(nonatomic) unsigned long long nextExpectedState; // @synthesize nextExpectedState=_nextExpectedState;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) PDCloudStoreContainerManager *containerManager; // @synthesize containerManager=_containerManager;
@property(readonly, nonatomic) __weak id <PDCloudStoreDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)setDelegate:(id)arg1;	// IMP=0x00100000001d0403
- (id)delegate;	// IMP=0x00100000001d03ed
- (void)_markEndCloudStoreDatabaseSetupWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000001d01ec
- (id)_cannotPerformActionErrorWithFailureReason:(id)arg1;	// IMP=0x00100000001d00dd
@property(readonly, copy) NSString *description;
- (void)_queue_cloudStoreInitializationTimerFired;	// IMP=0x00100000001cff64
- (void)_queue_cancelCloudStoreInitializationTimer;	// IMP=0x00100000001cfed5
- (void)_queue_startCloudStoreInitializationTimer;	// IMP=0x00100000001cfd64
- (id)errorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x00100000001cfc5d
- (void)_queue_addOperation:(id)arg1 forDatabase:(id)arg2;	// IMP=0x00100000001cfaae
- (void)_queue_cancelAllOperations;	// IMP=0x00100000001cf6f5
- (void)_queue_cancelOperationsForDatabse:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00100000001cf469
- (void)_queue_retryContainerStateWithError:(id)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001cf11c
- (void)_fetchAllSubscriptionsIfNeccessaryWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ce8ef
- (void)_recordZonesWithOperationGroupNameSuffix:(id)arg1 containerDatabaseIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cdc85
- (void)_fetchAndSaveRecordZonesWithContainerDatabaseIdentifiers:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cd76f
- (void)_fetchRecordZonesIfNeccessaryWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cd600
- (void)_forceFetchRecordZonesForContainerDatabase:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cd4bc
- (void)_zoneOperationWithZonesToSaveByDatabaseIdentifier:(id)arg1 recordZoneIDsToDeleteByDatabaseIdentifier:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001cc44a
- (void)_deleteSubscriptions:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cc129
- (void)_deleteAllSubscriptionsWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cc028
- (void)_deleteZones:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cbc5e
- (void)_deleteAllZonesWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cbb58
- (void)_deleteZonesAndSubscriptionsWithResetRequest:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cb4f6
- (void)_subscriptionOperationWithSubscriptionsToSaveByDatabaseIdentifier:(id)arg1 subscriptionIDsToDeleteByDatabase:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001ca6de
- (void)_fetchRecordsWithQuery:(id)arg1 cursor:(id)arg2 batchLimit:(long long)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 zone:(id)arg7 containerDatabase:(id)arg8 batchHandler:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x00100000001c9350
- (void)fetchRecordsWithQuery:(id)arg1 batchLimit:(long long)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 zone:(id)arg6 containerDatabase:(id)arg7 batchHandler:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00100000001c930b
- (void)modifyRecordsOperationWithRecordsToSaveByDatabaseIdentifier:(id)arg1 recordIDsToDeleteByDatabaseIdentifier:(id)arg2 recordModificationOperationConfiguration:(id)arg3 emitErrorIfConflictDetected:(_Bool)arg4 operationGroupName:(id)arg5 operationGroupNameSuffix:(id)arg6 qualityOfService:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000001c67aa
- (void)_zoneWideShareForCloudStoreZone:(id)arg1 createIfNotExists:(_Bool)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001c5c95
- (void)_fetchParticipantWithRecipientHandle:(id)arg1 cloudStoreZone:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001c54ab
- (void)_shareMetadataWithInvitationTokensByShareURL:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c4e5b
- (void)_updateShare:(id)arg1 cloudStoreZone:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001c47f5
- (void)removedFromCloudStoreZoneInvitation:(id)arg1 fromHandle:(id)arg2;	// IMP=0x00100000001c4592
- (void)_queue_completedRecordFetchFromNewSharedZone:(id)arg1;	// IMP=0x00100000001c458c
- (void)_queue_aliasesForRecipientHandle:(id)arg1 zoneName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c4576
- (void)_queue_cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c455c
- (void)cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c4450
- (void)_queue_lockShareCreationForRecipientHandle:(id)arg1 cloudStoreZone:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001c31ea
- (void)createShareInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 permission:(long long)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000001c0687
- (void)shareForZoneName:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c00b4
- (void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001bf6ab
- (void)acceptShareInvitation:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001be65b
- (void)_queue_ensureZoneShareIntegrity;	// IMP=0x00100000001be655
- (void)ensureZoneShareIntegrity;	// IMP=0x00100000001be5f4
- (void)createZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001be2bf
- (void)deleteZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bda89
- (void)containerResetCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000001bda83
- (void)_executeNextResetRequestIfPossible;	// IMP=0x00100000001bd6e3
- (void)executeResetRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bd32d
- (void)willResetContainerWithAdditionalZoneIDsByDatabaseIdentifiers:(id)arg1 includedCachedZoneForDatabaseIdentifiers:(id)arg2;	// IMP=0x00100000001bd327
- (void)resetContainerWithAdditionalZoneIDsByDatabaseIdentifiers:(id)arg1 includedCachedZoneForDatabaseIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bd1f5
- (void)resetContainerWithZoneNames:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bcdf2
- (void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001bc5f8
- (void)removeItems:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001bb933
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001bb00e
- (void)fetchItemsWithQueryConfigurations:(id)arg1 returnRecords:(_Bool)arg2 storeRecords:(_Bool)arg3 groupName:(id)arg4 groupSuffix:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001ba627
- (void)cloudStoreRecordArrayWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ba4b5
- (void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001ba063
- (void)removeAllItems:(unsigned long long)arg1 inZoneName:(id)arg2 storeLocally:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b8ec7
- (void)applePayContainerItemsFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b8145
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b738e
- (void)fetchRecordsWithRecordIDsByDatabaseIdentifier:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001b60dc
- (void)_queue_processOperationError:(id)arg1 forZoneID:(id)arg2 containerDatabaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b4846
- (void)_queue_fetchAllRecordsUsingConfiguration:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 batchHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001b178e
- (void)_queue_fetchInitialRecordsUsingConfiguration:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 batchHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001af853
- (_Bool)shouldForwardErrorsToRequestCompletionHandlers;	// IMP=0x00100000001af84b
- (_Bool)shouldContinueWithRequest:(id)arg1;	// IMP=0x00100000001af843
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x00100000001af83d
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x00100000001af835
- (void)_queue_executeNextFecthRequestIfPossible;	// IMP=0x00100000001aaaca
- (void)executeRecordsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001aa6f5
- (void)_queue_createSubscriptionsByDatabaseIdentifier:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001aa2e5
- (void)_queue_createZonesByDatabaseIdentifier:(id)arg1 shouldFetchData:(_Bool)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a99f5
- (void)updateCloudStoreWithLocalItemsWithConfigurations:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001a8320
- (void)_queue_createZoneAndSubscriptionsByDatabaseIdentifier:(id)arg1 groupSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a7d1c
- (void)_keychainSyncFinishedFired;	// IMP=0x00100000001a7910
- (void)_queue_cloudStoreAccountChanged:(id)arg1;	// IMP=0x00100000001a790a
- (void)cloudStoreAccountChanged:(id)arg1;	// IMP=0x00100000001a7809
- (void)_queue_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001a7255
- (void)processFetchedCloudStoreDataWithModifiedRecordsByDatabaseIdentifier:(id)arg1 deletedRecordsByDatabaseIdentifier:(id)arg2 carriedOverRecordsByDatabaseIdentifier:(id)arg3 conflictingRecordsByDatabaseIdentifier:(id)arg4 request:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001a7239
- (void)_queue_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a6214
- (void)_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a611b
- (void)_queue_cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a5e6b
- (void)cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a5dc3
- (void)_queue_detachFromContainerWithState:(unsigned long long)arg1;	// IMP=0x00100000001a5d31
- (void)_queue_attachToContainer;	// IMP=0x00100000001a5cb1
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 zoneNames:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a552a
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a5512
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;	// IMP=0x00100000001a54fa
- (id)filterCloudStoreZones:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x00100000001a54e4
- (id)recordTypeFromRecordName:(id)arg1;	// IMP=0x00100000001a5449
- (id)identifierFromRecord:(id)arg1;	// IMP=0x00100000001a53f6
- (unsigned long long)itemTypeFromRecord:(id)arg1;	// IMP=0x00100000001a5354
- (id)primaryRecordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x00100000001a5342
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x00100000001a52ce
- (double)_queue_initializationTimeout;	// IMP=0x00100000001a52c0
- (_Bool)_queue_shouldFetchAndStoreCloudDataAtStartup;	// IMP=0x00100000001a52b8
- (_Bool)_queue_canInvalidateContainer;	// IMP=0x00100000001a52b0
- (void)canInitializeContainerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a51f0
- (_Bool)_queue_canInitializeContainer;	// IMP=0x00100000001a51e8
- (void)setIsSetup:(_Bool)arg1;	// IMP=0x00100000001a51b6
- (_Bool)isSetup;	// IMP=0x00100000001a518e
- (_Bool)_queue_ensureContainerState:(unsigned long long)arg1;	// IMP=0x00100000001a505d
- (void)initialCloudDatabaseSetupWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a43db
- (void)_cloudStoreContainerCommonInit;	// IMP=0x00100000001a4292
- (id)initWithDataSource:(id)arg1;	// IMP=0x00100000001a421e
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000001a416d
- (void)_setupManagerWithConfiguration:(id)arg1;	// IMP=0x00100000001a3f98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
