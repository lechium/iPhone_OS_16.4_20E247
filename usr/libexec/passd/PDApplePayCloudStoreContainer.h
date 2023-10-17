//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableSet, NSSet, NSString, PDAccountManager, PDFamilyCircleManager, PDPaymentTransactionProcessor, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDSpotlightIndexer, PKPeerPaymentAccount;

@interface PDApplePayCloudStoreContainer
{
    struct os_unfair_lock_s _fetchLock;	// 8 = 0x8
    _Bool _proactiveFetchInProgress;	// 12 = 0xc
    _Bool _ensuringZoneShareIntegrityInProgress;	// 13 = 0xd
    NSMutableSet *_fetchingTransactionsForTransactionSourceIdentifiers;	// 16 = 0x10
    PDPaymentTransactionProcessor *_transactionProcessor;	// 24 = 0x18
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 32 = 0x20
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 40 = 0x28
    PDFamilyCircleManager *_familyCircleManager;	// 48 = 0x30
    PDAccountManager *_accountManager;	// 56 = 0x38
    PDSpotlightIndexer *_spotlightIndexer;	// 64 = 0x40
    PKPeerPaymentAccount *_peerPaymentAccount;	// 72 = 0x48
    NSSet *_accounts;	// 80 = 0x50
    NSDictionary *_sharedAccountCloudStoreByAccountIdentifier;	// 88 = 0x58
    NSDictionary *_accountUsersByAccountIdentifier;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000bb272
- (void)_parseAccountsFromRecordParser:(id)arg1 databaseIdentifier:(id)arg2 shouldUpdateLocalDatabase:(_Bool)arg3 shouldReturn:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000bacea
- (_Bool)_isAccountFromRecordType:(id)arg1;	// IMP=0x00100000000bac64
- (void)_parseAccountEventsFromRecordParser:(id)arg1 databaseIdentifier:(id)arg2 shouldUpdateLocalDatabase:(_Bool)arg3 shouldReturn:(_Bool)arg4 updateReasons:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000ba6bf
- (id)_recordsByFromAccountEvent:(id)arg1 zone:(id)arg2;	// IMP=0x00100000000ba4f9
- (void)_fetchMissingAccountEventsWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 carriedOverRecordsByDatabaseIdentifier:(id)arg4 updateReasons:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000b8278
- (id)_recordTypeForAccountEventRecord:(id)arg1;	// IMP=0x00100000000b8234
- (_Bool)_isAccountEventAssociatedObjectFromRecordType:(id)arg1;	// IMP=0x00100000000b7cf0
- (_Bool)_isAccountEventFromRecordType:(id)arg1;	// IMP=0x00100000000b7c6a
- (void)_saveTransactionFetchRetries:(id)arg1;	// IMP=0x00100000000b7c33
- (id)_transactionFetchRetries;	// IMP=0x00100000000b7a83
- (void)_fetchTransactionsAttemptForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000b796e
- (void)_resetFetchTransactionsForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000b78e2
- (_Bool)_shouldFetchTransactionsForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000b782b
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;	// IMP=0x00100000000b779a
- (id)_transactionSourceIdentifierForTransactionCloudStoreRecord:(id)arg1 databaseIdentifier:(id)arg2;	// IMP=0x00100000000b6d4b
- (id)_transactionSourceIdentifierForTransactionRecordID:(id)arg1 recordType:(id)arg2 databaseIdentifier:(id)arg3;	// IMP=0x00100000000b55ac
- (void)_fetchMissingTransactionRecordsWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b486c
- (void)_processZoneShareLockWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b4568
- (void)_processShareWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b2408
- (_Bool)_canFormTransactionFromCloudStoreRecord:(id)arg1;	// IMP=0x00100000000b2206
- (_Bool)_canFormShareLockFromCloudStoreRecord:(id)arg1;	// IMP=0x00100000000b2195
- (_Bool)_canFormShareFromCloudStoreRecord:(id)arg1;	// IMP=0x00100000000b2124
- (id)_parseTransactionRecords:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 updateReasons:(unsigned long long)arg4;	// IMP=0x00100000000b0550
- (_Bool)_isCloudStoreZoneThePrimaryZoneForCurrentUser:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00100000000b0044
- (void)containerResetCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000000af81a
- (_Bool)_isTransactionItemFromRecordType:(id)arg1;	// IMP=0x00100000000af7b3
- (id)_originDeviceID;	// IMP=0x00100000000af79a
- (id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2;	// IMP=0x00100000000af3d8
- (id)_paymentApplicationForPassUniqueIdentifier:(id)arg1;	// IMP=0x00100000000af316
- (long long)_numberOfActiveTransactionSources;	// IMP=0x00100000000aee7c
- (_Bool)_queue_isRelevantTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000ae943
- (void)_queue_familyMembersByAltDSIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ae58c
- (void)_queue_familyMembersByAppleIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ae245
- (void)_handleFamilyUpdateNotification:(id)arg1;	// IMP=0x00100000000ae162
- (id)_allPossibleCloudStoreZonesForFetchingWithTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000acdcc
- (void)_queue_createOrRemoveZoneSharesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ac9e7
- (void)_queue_createOrRemoveZoneSharesForAccountsIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ab0ae
- (void)_queue_createOrRemoveZoneSharesForPeerPaymentIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a9aa5
- (void)_queue_ensureZoneShareIntegrity;	// IMP=0x00100000000a9962
- (id)_accountZoneNamesForAccount:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00100000000a961e
- (id)_accountZoneNamesForAccountUser:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00100000000a9445
- (id)_accountZoneNamesForAccountSet:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00000000000a9247
- (id)_peerPaymentZoneNamesForAccount:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00100000000a9135
- (void)_queue_updateWithPossibleNewZonesToAdd:(id)arg1 orphanedZones:(id)arg2 containerDatabase:(id)arg3;	// IMP=0x00100000000a89b9
- (void)_queue_processSharedAccountCloudStoreChangeWithOldSharedAccountCloudStore:(id)arg1 newSharedAccountCloudStore:(id)arg2;	// IMP=0x00100000000a87d6
- (void)_queue_processAccountChangeWithOldAccounts:(id)arg1 newAccounts:(id)arg2;	// IMP=0x00100000000a8649
- (void)_queue_processPeerPaymentAccountChangeWithOldAccount:(id)arg1 newPeerPaymentAccount:(id)arg2;	// IMP=0x00100000000a84bc
- (id)cloudStoreZonesForItemType:(unsigned long long)arg1 configuration:(id)arg2 action:(unsigned long long)arg3 inContainerDatabase:(id)arg4;	// IMP=0x00100000000a6c38
- (id)filterCloudStoreZones:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x00100000000a6714
- (id)cloudStoreZonesForItem:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x00100000000a51e0
- (id)zoneIDForSubscription:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x00100000000a501b
- (id)subscriptionForZone:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x00100000000a4e74
- (id)possibleDatabaseSubscriptionForContainerDatabase:(id)arg1;	// IMP=0x00100000000a4d44
- (id)allPossibleZoneSubscriptionsForContainerDatabase:(id)arg1;	// IMP=0x00100000000a4ae0
- (id)allPossibleZoneNamesForContainerDatabase:(id)arg1 itemType:(unsigned long long)arg2;	// IMP=0x00100000000a4857
- (id)allPossibleZoneNamesForContainerDatabase:(id)arg1;	// IMP=0x00100000000a45be
- (void)accountManager:(id)arg1 accountUsersChanged:(id)arg2 oldUsers:(id)arg3 accountIdentifier:(id)arg4;	// IMP=0x00100000000a43b9
- (void)accountManager:(id)arg1 sharedAccountCloudStoreChangedForAccountIdentifier:(id)arg2;	// IMP=0x00100000000a419b
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x00100000000a3f6a
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x00100000000a3d73
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x00100000000a3a39
- (void)_handlePeerPaymentAccountChanged:(id)arg1;	// IMP=0x00100000000a38ce
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a2f60
- (void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a228e
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a20e4
- (void)bootstrapZoneWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1d8a
- (void)syncTransactionsToCloudStoreOriginatedOnDevice:(unsigned long long)arg1;	// IMP=0x00100000000a1d3e
- (void)passDidDisappear:(id)arg1;	// IMP=0x00100000000a1bc7
- (_Bool)_queue_canSyncTransactionToCloudKit:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00100000000a18de
- (void)canSyncTransactionToCloudKit:(id)arg1 forTransactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a179f
- (void)canSyncTransactionFromCloudKitForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1689
- (void)_addCloudStoreRecordsFromResponse:(id)arg1 toTransactionSourceRecords:(id)arg2 transactionSourceIdentifier:(id)arg3 passUniqueID:(id)arg4;	// IMP=0x00100000000a0f6f
- (void)_fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 returnRecords:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000009f417
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f2fe
- (void)backgroundRecordSyncForTranasctionSourceIdentifiers:(id)arg1 fromDate:(id)arg2 returnRecords:(_Bool)arg3 formReport:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000009e590
- (void)requestUpdatesForTransactionSourceIdentifier:(id)arg1;	// IMP=0x001000000009d772
- (void)_queue_completedRecordFetchFromNewSharedZone:(id)arg1;	// IMP=0x001000000009d0b1
- (void)_queue_aliasesForRecipientHandle:(id)arg1 zoneName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009caca
- (void)_queue_cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009b20d
- (id)_stripToFirstDash:(id)arg1;	// IMP=0x001000000009b18a
- (id)recordTypeFromRecordName:(id)arg1;	// IMP=0x001000000009abd4
- (id)identifierFromRecord:(id)arg1;	// IMP=0x001000000009a704
- (id)primaryRecordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x001000000009a5cc
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x001000000009a3a5
- (void)_queue_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000009a1f5
- (void)processFetchedCloudStoreDataWithModifiedRecordsByDatabaseIdentifier:(id)arg1 deletedRecordsByDatabaseIdentifier:(id)arg2 carriedOverRecordsByDatabaseIdentifier:(id)arg3 conflictingRecordsByDatabaseIdentifier:(id)arg4 request:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000009849e
- (void)_deleteLocalDataFromDeletedRecordsByDatabaseIdentifier:(id)arg1;	// IMP=0x0010000000097649
- (_Bool)shouldContinueWithRequest:(id)arg1;	// IMP=0x00100000000973e0
- (void)coalesceApplePayRequest:(id)arg1 withNewApplePayRequest:(id)arg2;	// IMP=0x00100000000971fb
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x0010000000097169
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x0010000000097151
- (void)_queue_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000095c86
- (void)_queue_cloudStoreAccountChanged:(id)arg1;	// IMP=0x00100000000955c8
- (id)cloudStoreSpecificKeysForItem:(id)arg1;	// IMP=0x00100000000951b0
- (_Bool)_queue_canInvalidateContainer;	// IMP=0x0010000000094fa5
- (_Bool)_queue_canInitializeContainer;	// IMP=0x0010000000094c11
- (_Bool)_queue_shouldFetchAndStoreCloudDataAtStartup;	// IMP=0x0010000000094afd
- (void)canOverrideChangeTokenForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000094a6e
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;	// IMP=0x0010000000094919
- (void)dealloc;	// IMP=0x00100000000948cd
- (id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2 accountManager:(id)arg3 paymentWebServiceCoordinator:(id)arg4 peerPaymentWebServiceCoordinator:(id)arg5 familyCircleManager:(id)arg6 spotlightIndexer:(id)arg7;	// IMP=0x0010000000094298

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
