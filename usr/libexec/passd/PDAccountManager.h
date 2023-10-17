//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, PDAccountNotificationController, PDCloudStoreNotificationCoordinator, PDDatabaseManager, PDPayLaterMerchantProcessor, PDPaymentWebServiceCoordinator, PDPushNotificationManager, PDUserNotificationManager;
@protocol OS_dispatch_queue;

@interface PDAccountManager : NSObject
{
    PDPayLaterMerchantProcessor *_payLaterMerchantProcessor;	// 8 = 0x8
    PDPushNotificationManager *_pushNotificationManager;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 32 = 0x20
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;	// 40 = 0x28
    NSMutableArray *_accounts;	// 48 = 0x30
    NSDictionary *_accountServiceURLs;	// 56 = 0x38
    _Bool _hasAccounts;	// 64 = 0x40
    NSSet *_accountServicePushNotificationTopics;	// 72 = 0x48
    NSDictionary *_additionalPushNotificationTopics;	// 80 = 0x50
    _Bool _processingVirtualCardDecryptionRequest;	// 88 = 0x58
    NSMutableArray *_decryptionRequests;	// 96 = 0x60
    struct os_unfair_lock_s _lockObservers;	// 104 = 0x68
    NSHashTable *_observers;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_workQueue;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_replyQueue;	// 128 = 0x80
    struct os_unfair_lock_s _lockPushTopics;	// 136 = 0x88
    PDUserNotificationManager *_userNotificationManager;	// 144 = 0x90
    NSMutableDictionary *_fetchRequests;	// 152 = 0x98
    NSMutableDictionary *_currentRequests;	// 160 = 0xa0
    struct os_unfair_lock_s _fetchRequestLock;	// 168 = 0xa8
    _Bool _isBackgroundProvisioningAppleBalance;	// 172 = 0xac
    struct os_unfair_lock_s _backgroundProvisioningLock;	// 176 = 0xb0
    NSMutableDictionary *_zoneCreationCompletions;	// 184 = 0xb8
    struct os_unfair_lock_s _zoneCreationCompletionsLock;	// 192 = 0xc0
    PDAccountNotificationController *_accountNotificationController;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x002000000024a0d4
@property(retain, nonatomic) PDAccountNotificationController *accountNotificationController; // @synthesize accountNotificationController=_accountNotificationController;
- (void)updateWalletBadgeCount;	// IMP=0x001000000024a09a
- (void)dailyCashEligibleDestinationsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000249de2
- (_Bool)backgroundProvisionInProgressForFeature:(unsigned long long)arg1;	// IMP=0x0010000000249da6
- (void)_triggerProvisionPassToWatchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000249d90
- (void)triggerCloudStoreZoneCreationForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000249a6c
- (void)validateAppleBalanceSecurityRequirementsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002490af
- (void)attemptAppleBalanceSetupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000246f66
- (id)_familyMemberAssociatedWithInviteEmail:(id)arg1 familyMembers:(id)arg2;	// IMP=0x0010000000246b72
- (void)familyCircleManagerDidUpdateFamilyMembers:(id)arg1;	// IMP=0x0010000000245b75
- (void)_queue_updateAccountsWithPayload:(id)arg1;	// IMP=0x0010000000245071
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x0010000000244fde
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000002437d2
- (id)pushNotificationTopics;	// IMP=0x0010000000243664
- (void)_updatePushTopics;	// IMP=0x001000000024303d
- (void)_queue_fetchNextPaginatedRequestIfNecessaryFromPreviousResponse:(id)arg1 newRequest:(id)arg2;	// IMP=0x0010000000242f51
- (void)_executeFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024263e
- (void)_executeNextAccountManagerFetchIfPossibleForRequestIdentifier:(id)arg1;	// IMP=0x0010000000242435
- (void)_addAccountManagerFetchRequest:(id)arg1;	// IMP=0x0010000000242097
- (void)accountEntityOrderingsForAccountWithIdentifier:(id)arg1 entityType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000241dc1
- (void)accountEnhancedMerchantBehaviorForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000241b15
- (void)_queue_updateEnhancedMerchantsIfNecessaryForAccount:(id)arg1;	// IMP=0x0010000000241756
- (void)_managerFetch_updateBalancesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000240ee0
- (void)_managerFetch_updateEnhancedMerchantsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023fc19
- (void)deleteAccountEnhancedMerchant:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023fa87
- (void)accountEnhancedMerchantsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023f79b
- (void)insertOrUpdateAccountEnhancedMerchants:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023f6a5
- (void)_updateAccountEnhancedMerchantsForAccountWithIdentifier:(id)arg1 ignoreErrorBackoff:(_Bool)arg2 cooldownLevel:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000023f5f3
- (void)updateAccountEnhancedMerchantsForAccountWithIdentifier:(id)arg1 ignoreErrorBackoff:(_Bool)arg2 cooldownLevel:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000023f5e1
- (void)updateAccountEnhancedMerchantsForAccountWithIdentifier:(id)arg1 ignoreErrorBackoff:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023f52d
- (void)updateAccountEnhancedMerchantsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023f516
- (void)updateAccountEnhancedMerchantsForAccountWithIdentifier:(id)arg1 cooldownLevel:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023f463
- (void)accountPromotionBehaviorForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023f1b7
- (void)_queue_updatePromotionsIfNecessaryForAccount:(id)arg1;	// IMP=0x001000000023edf8
- (void)_managerFetch_updatePromotionsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023d935
- (void)updateImpressionCount:(long long)arg1 promotionProgramIdentifier:(id)arg2 accountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000023d7f3
- (void)updateImpressionCountsForPromotions:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023d684
- (void)deleteAccountPromotion:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023d4f2
- (void)accountPromotionsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023d206
- (void)insertOrUpdateAccountPromotions:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023d110
- (void)_updateAccountPromotionsForAccountWithIdentifier:(id)arg1 ignoreErrorBackoff:(_Bool)arg2 observeCooldownPeriod:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000023d05e
- (void)updateAccountPromotionsForAccountWithIdentifier:(id)arg1 ignoreErrorBackoff:(_Bool)arg2 observeCooldownPeriod:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000023d04c
- (void)updateAccountPromotionsForAccountWithIdentifier:(id)arg1 ignoreErrorBackoff:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023d034
- (void)updateAccountPromotionsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023d01d
- (void)updateAccountPromotionsForAccountWithIdentifier:(id)arg1 observeCooldownPeriod:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023d003
- (void)_managerFetch_sendAccountReport:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023c94b
- (void)sendAccountReport:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023c564
- (void)rewardsTierSummaryForTransactionSourceIdentifiers:(id)arg1 currencyCode:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000023c334
- (void)payLaterMerchantProcessor:(id)arg1 didProcessPayLaterMerchant:(id)arg2 forFinancingPlan:(id)arg3;	// IMP=0x001000000023c04b
- (void)insertOrUpdateLocalAccountFinancingPlans:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023be64
- (void)_queue_updateFinancingPlansIfNeccessaryForAccount:(id)arg1;	// IMP=0x001000000023b9a7
- (void)payLaterCardMagnitudesForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023b818
- (void)recomputePayLaterCardMagntiudesForAccountIdentifier:(id)arg1;	// IMP=0x001000000023b669
- (void)deleteFinancingPlanWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023b3d2
- (void)deleteFinancingPlansForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023af10
- (void)deleteFinancingPlansForAllAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023a8f1
- (void)financingPlanInstallmentsDueDateRangeForAccountIdentifier:(id)arg1 financingPlanStates:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023a5f5
- (void)financingPlanForPlanIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023a463
- (void)financingPlansForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023a1f0
- (void)financingPlansWithQueries:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000239a6c
- (void)financingPlansForAllAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000239611
- (id)_queue_processFinancingPlans:(id)arg1 accountIdentifier:(id)arg2 updateReasons:(unsigned long long)arg3;	// IMP=0x0010000000238d3d
- (void)_managerFetch_updateFinancingPlansWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000237bc2
- (void)_updateFinancingPlansForAccountWithIdentifier:(id)arg1 pageOffset:(unsigned long long)arg2 limit:(unsigned long long)arg3 ignoreLastUpdatedDate:(_Bool)arg4 fromPush:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000237a9d
- (void)updateFinancingPlansForAccountWithIdentifier:(id)arg1 pageOffset:(unsigned long long)arg2 limit:(unsigned long long)arg3 ignoreLastUpdatedDate:(_Bool)arg4 forceFetch:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000237a8b
- (void)resetAccountBalancesForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000237a03
- (void)updateAccountBalancesForAccountIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 type:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002370a5
- (void)accountBalancesForAccountIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 type:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000237000
- (void)accountPendingFamilyMembersForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000236ec3
- (void)didAddAccountPendingFamilyMembers:(id)arg1;	// IMP=0x0010000000236e17
- (void)_queue_updatePaymentFundingSourcesIfNecessaryForAccount:(id)arg1;	// IMP=0x0010000000236966
- (void)_managerFetch_updateFundingSourcesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002359e6
- (void)_updatePaymentFundingSourcesForAccountIdentifier:(id)arg1 fromPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023593f
- (void)updatePaymentFundingSourcesForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000235928
- (void)paymentFundingSourceForIdentifier:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002355f9
- (void)paymentFundingSourcesForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023530d
- (void)_managerFetch_sharedAccountStoreStoreWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000234671
- (void)_updateSharedAccountCloudStoreWithAccountIdentifier:(id)arg1 fromPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002345ca
- (void)updateSharedAccountCloudStoreWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002345b3
- (void)sharedAccountCloudStoreWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000234290
- (void)_managerFetch_createdZoneWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000233826
- (void)cloudStoreNotificationCoordinator:(id)arg1 createdZoneWithName:(id)arg2 forContainerName:(id)arg3 scope:(long long)arg4;	// IMP=0x0010000000232be0
- (void)_managerFetch_exportTransactionsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002323b6
- (void)accountStatementMetadataForStatementIdentifier:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000232083
- (void)accountStatementMetadataForAllAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000231c4b
- (void)updateAccountStatementMetadataForStatementIdentifier:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023161b
- (void)exportTransactionDataForAccountIdentifier:(id)arg1 withFileFormat:(id)arg2 beginDate:(id)arg3 endDate:(id)arg4 productTimeZone:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000023125a
- (void)markUserViewedIntroduction:(_Bool)arg1 forInstallmentIdentifiers:(id)arg2 accountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000230dd6
- (void)insertDailyCashNotificationForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000230d83
- (void)insertSummaryNotificationForAccountIdentifier:(id)arg1 summaryType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000230d2a
- (id)_setupNotificationIdentifierForAccountIdentifier:(id)arg1;	// IMP=0x0010000000230cfe
- (void)scheduleSetupReminderForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000230939
- (void)accountHoldsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002308d1
- (void)_updateTransfersForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000230070
- (void)transfersWithAccountIdentifier:(id)arg1 allowFetchFromServer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022fe53
- (_Bool)_shouldDownloadTransfersForAccountIdentifier:(id)arg1;	// IMP=0x001000000022fdd0
- (id)_cacheKeyForTransfersWithAccountIdentifier:(id)arg1;	// IMP=0x001000000022fda1
- (_Bool)_shouldDownloadScheduledPaymentsForAccountIdentifier:(id)arg1;	// IMP=0x001000000022fd1e
- (id)_cacheKeyForScheduledPaymentsWithAccountIdentifier:(id)arg1;	// IMP=0x001000000022fcef
- (void)updateScheduledPaymentsWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022f3f0
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(_Bool)arg2 allowFetchFromServer:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000022f263
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000022f049
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStatementIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022ee5b
- (void)activatePhysicalCardWithIdentifier:(id)arg1 activationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022e6a9
- (void)physicalCardForFeatureIdentifier:(unsigned long long)arg1 activationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022dfd7
- (void)inactivePhysicalCardForFeatureIdentifier:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022dd18
- (void)activatePhysicalCardWithActivationCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022db63
- (void)completePhysicalCardActionRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022d857
- (void)beginPhysicalCardAction:(id)arg1 onPhysicalCardWithIdentifier:(id)arg2 forAccountWithIdentifier:(id)arg3 accountUserAltDSID:(id)arg4 deviceMetadata:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000022d275
- (void)_handlePhysicalCardActionResponse:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022cead
- (void)_handlePhysicalCardRequestResponse:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022cac2
- (void)completePhysicalCardRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022c7b6
- (void)beginPhysicalCardRequestWithOrder:(id)arg1 forAccountWithIdentifier:(id)arg2 accountUserAltDSID:(id)arg3 deviceMetadata:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000022c215
- (void)updatePhysicalCardsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022b974
- (void)physicalCardsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022b7de
- (void)noteSecurityCodeActivityWithAction:(long long)arg1 forSecurityCodeIdentifier:(id)arg2 forVirtualCardIdentifier:(id)arg3 forAccountIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000022b0c4
- (void)fetchAllVirtualCardsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022ab95
- (void)noteVirtualCardAutoFilledBySafari:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a537
- (void)deleteVirtualCardEncryptedDataForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a210
- (void)promptDetailsForVirtualCard:(id)arg1 showNotification:(_Bool)arg2;	// IMP=0x001000000022a081
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002291b3
- (void)_executeDecryptionRequests;	// IMP=0x0010000000228355
- (void)_queueDecryptionRequest:(id)arg1;	// IMP=0x001000000022825d
- (void)cardCredentialsForVirtualCard:(id)arg1 authorization:(id)arg2 action:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000227ae8
- (void)updateVirtualCardsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002273c4
- (void)_managerFetch_performVirtualCardActionWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002265ca
- (void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(id)arg2 forAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002264e4
- (void)createVirtualCard:(long long)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000225a4d
- (void)taxFormsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000225893
- (void)updateTaxFormsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000225235
- (void)savingsStatementsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002250a6
- (void)updateSavingsStatementsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002249c9
- (void)_downloadCreditStatementsForAccountIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000224532
- (_Bool)_shouldDownloadCreditStatementsForLastStatementDownload:(id)arg1 now:(id)arg2;	// IMP=0x00100000002243dc
- (_Bool)_shouldDownloadCreditStatementsForAccountIdentifier:(id)arg1;	// IMP=0x001000000022433f
- (id)_cacheKeyForCreditStatementsWithAccountIdentifier:(id)arg1;	// IMP=0x0010000000224310
- (void)_publishStatementsChangedForAccountIdentifier:(id)arg1;	// IMP=0x0010000000224228
- (void)_creditStatementsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000224178
- (void)creditStatementsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000223c1e
- (void)updateCreditStatementsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002235d6
- (void)_processVirtualCardStatusUpdateEvent:(id)arg1;	// IMP=0x00100000002230d5
- (void)_processPaymentFailed:(id)arg1;	// IMP=0x0010000000223020
- (void)_processUserInfoUpdateEvent:(id)arg1;	// IMP=0x0010000000222e54
- (void)_processRewardsAddedEvent:(id)arg1;	// IMP=0x0010000000222bff
- (void)_processRewardsRedemptionEvent:(id)arg1;	// IMP=0x0010000000221ed9
- (void)lastRedemptionEventToDestination:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 altDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000221d08
- (void)deleteEventsWithAccountIdentifier:(id)arg1 excludingTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002218d3
- (void)deleteEventWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000221649
- (void)deleteEventsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000221248
- (void)eventWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002210b6
- (void)eventsForAccountIdentifier:(id)arg1 types:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(long long)arg5 limit:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000220e87
- (void)eventsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000220cf5
- (void)insertEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000220340
- (void)_cleanupSavingsAccountPreferences:(id)arg1;	// IMP=0x00100000002202cc
- (void)_insertOrUpdateAccountServicingTokenNotificationWithAccount:(id)arg1 notificationUserInfo:(id)arg2;	// IMP=0x00100000002201d6
- (void)_savingsUserInfoForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021fe13
- (id)_cacheKeyForUserInfoWithAccountIdentifier:(id)arg1;	// IMP=0x001000000021fde4
- (_Bool)_shouldFetchUpdatedUserInfo:(id)arg1;	// IMP=0x001000000021fda9
- (void)_fetchCreditUserInfoForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021f687
- (void)updateUserInfoForAccountIdentifier:(id)arg1 contact:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000021efd9
- (void)_creditUserInfoForAccountIdentifier:(id)arg1 forceFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000021ec52
- (void)userInfoForAccountIdentifier:(id)arg1 forceFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000021e8b1
- (void)termsWithIdentifier:(id)arg1 accepted:(_Bool)arg2 withAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000021e4f8
- (void)performAccountAction:(id)arg1 withAccountIdentifier:(id)arg2 accountUserAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000021e029
- (void)defaultAccountForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021dbdd
- (void)deleteAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021d64c
- (void)_managerFetch_updateAccountWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021cc6e
- (void)insertOrUpdateLocalAccountUser:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000021c958
- (void)updateAccountUserNotificationSettings:(id)arg1 forAccountUserWithAltDSID:(id)arg2 forAccountWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000021c6e8
- (void)updateAccountUserPreferences:(id)arg1 forAccountUserWithAltDSID:(id)arg2 forAccountWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000021c24e
- (void)deleteAccountUserWithAltDSID:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000021bfb3
- (void)physicalCardsByAccountIdentifierForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021bc8c
- (void)accountUsersByAccountIdentifierForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021b979
- (void)accountUsersForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021b086
- (void)_queue_updateSharedAccountCloudStoreIfNeccessaryForAccount:(id)arg1;	// IMP=0x001000000021abe9
- (void)_managerFetch_updateAccountUsersWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000219c06
- (void)_updateAccountUsersForAccountWithIdentifier:(id)arg1 fromPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000219b5f
- (void)updateAccountUsersForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000219b48
- (void)updateLastUsedInAppFundingSource:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x0010000000219b31
- (void)lastUsedInAppFundingSourceForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000219ab3
- (void)updateAccountWithIdentifier:(id)arg1 extended:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000219589
- (void)updateAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000219572
- (void)_managerFetch_updateAccountsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021803e
- (void)updateAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000217fbf
- (void)updateAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000217fa2
- (void)accountForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000217d0f
- (void)accountWithVirtualCardIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000217ace
- (void)accountsForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000217866
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021742e
- (void)accountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000217174
- (void)accountsWithPassLocallyProvisionedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000216bbe
- (void)accountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002164d7
- (void)passRemoved:(id)arg1;	// IMP=0x001000000021621f
- (void)passAdded:(id)arg1;	// IMP=0x001000000021600e
- (id)_mockSavingsAccount;	// IMP=0x001000000021575d
- (id)_mockAppleBalanceAccount;	// IMP=0x0010000000215452
- (id)_mockInstallmentForAccount:(id)arg1 events:(id *)arg2;	// IMP=0x001000000021435b
- (id)_mockPhysicalCards;	// IMP=0x00100000002141f1
- (id)_mockAccountUsers;	// IMP=0x0010000000213e59
- (id)_mockCreditAccountInitialStateWithEvents:(id *)arg1;	// IMP=0x0010000000212b3b
- (_Bool)_accountSupportsTransactionsWithoutPass:(id)arg1;	// IMP=0x0010000000212b1e
- (void)postAccountChangedNotification;	// IMP=0x0010000000212ace
- (unsigned long long)_queueIndexOfAccountWithIdentifier:(id)arg1;	// IMP=0x00100000002129cb
- (void)accountIsInDirtyStateWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002127ac
- (void)_accountsAreInDirtyWithFeatureFailures:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002123b9
- (void)accountsAreInDirtyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000212065
- (id)_rewardsAmountFromDate:(id)arg1 toDate:(id)arg2 accountIdentifier:(id)arg3 altDSID:(id)arg4 mostRecentRewardType:(id *)arg5 mostRecentRewardDate:(id *)arg6 rewardTypes:(id *)arg7;	// IMP=0x0010000000211a1d
- (id)_promoRewardsMerchantNamesFromDate:(id)arg1 toDate:(id)arg2 accountIdentifier:(id)arg3 altDSID:(id)arg4 mostRecentRewardType:(id *)arg5 mostRecentRewardDate:(id *)arg6 rewardPercentage:(id *)arg7;	// IMP=0x0010000000211245
- (void)dailyCashNotificationForDate:(id)arg1 accountIdentifier:(id)arg2 dailyAmount:(id)arg3 monthlyAmount:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002108d0
- (void)_processDeletedAccounts:(id)arg1;	// IMP=0x0010000000210434
- (void)_processChangedAccounts:(id)arg1;	// IMP=0x001000000020e6af
- (void)_processAddedAccounts:(id)arg1;	// IMP=0x001000000020d97d
- (void)_queue_deleteAccounts;	// IMP=0x001000000020d90c
- (void)updateMockAccountWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000020d788
- (void)deleteAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000020d669
- (void)noteAccountDeletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000020d467
- (void)insertOrUpdateLocalFinancingPlans:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000020d2be
- (void)insertOrUpdateLocalAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000020d063
- (void)deleteLocalAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000020ce0a
- (void)insertOrReplaceAccount:(id)arg1 extended:(_Bool)arg2 deleteSensitiveData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000020c76c
- (void)mergeAccounts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000020c5d4
- (void)_queue_mergeAccounts:(id)arg1 featureFailures:(id)arg2;	// IMP=0x001000000020b9df
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000020b7e8
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000020b78f
- (void)registerObserver:(id)arg1;	// IMP=0x001000000020b736
- (void)_paymentWebServiceContextChanged;	// IMP=0x001000000020b0fb
- (void)dealloc;	// IMP=0x001000000020b079
- (id)initWithPushNotificationManager:(id)arg1 paymentWebServiceCoordinator:(id)arg2 databaseManager:(id)arg3 userNotificationManager:(id)arg4 payLaterMerchantProcessor:(id)arg5 cloudStoreNotificationCoordinator:(id)arg6;	// IMP=0x0010000000209e45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
