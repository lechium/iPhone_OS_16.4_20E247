//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LoadCompletedMicroPaymentsOperation, LoadMicroPaymentQueuesOperation, MISSING_TYPE, NSArray, NSManagedObjectID, NSMutableSet, NSString, StoreKitClientIdentity, XPCClient;
@protocol OS_dispatch_queue;

@interface StoreKitClient : NSObject
{
    XPCClient *_client;	// 8 = 0x8
    StoreKitClientIdentity *_clientIdentity;	// 16 = 0x10
    NSManagedObjectID *_databaseClientObjectID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_externalQueue;	// 40 = 0x28
    long long _lastRefreshReason;	// 48 = 0x30
    LoadMicroPaymentQueuesOperation *_loadQueueOperation;	// 56 = 0x38
    LoadCompletedMicroPaymentsOperation *_restoreOperation;	// 64 = 0x40
    long long _state;	// 72 = 0x48
    NSMutableSet *_transientFailedIDs;	// 80 = 0x50
}

- (_Bool)buyMicroPaymentOperation:(id)arg1 shouldContinueWithNewStorefront:(id)arg2;	// IMP=0x002000000014352f
- (void)_showPaymentsRestrictedAlert;	// IMP=0x001000000014339b
- (void)_setClientState:(long long)arg1;	// IMP=0x0010000000143301
- (void)_sendRestoreCompletedWithError:(id)arg1;	// IMP=0x0010000000143271
- (void)_sendPaymentsUpdated:(id)arg1;	// IMP=0x0010000000143257
- (void)_sendPaymentsRemoved:(id)arg1;	// IMP=0x00100000001431a9
- (void)_sendPaymentsAdded:(id)arg1;	// IMP=0x001000000014318f
- (void)_sendMessage:(long long)arg1 forPayments:(id)arg2;	// IMP=0x0010000000142efe
- (void)_sendMergeResults:(id)arg1;	// IMP=0x0010000000142e5c
- (void)_sendFinishRequestForPayment:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000142cec
- (void)_sendDownloadChangesets:(id)arg1;	// IMP=0x0010000000142c3e
- (void)_sendBuyRequestForPayment:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000014291b
- (void)_showPrivacyPromptForPayment:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001423d6
- (void)_reloadClientProperties;	// IMP=0x0010000000142100
- (void)_refreshFromServerWithReason:(long long)arg1 accountIdentifier:(id)arg2;	// IMP=0x0010000000141a40
- (void)_mergeBatchResponse:(id)arg1 forRestoreOperation:(id)arg2;	// IMP=0x00100000001417da
- (id)_lastQueueCheckDate;	// IMP=0x0010000000141773
- (_Bool)_isPaymentRestricted;	// IMP=0x00100000001416d0
- (void)_finishRestoreOperation:(id)arg1;	// IMP=0x001000000014133e
- (void)_finishLoadQueueOperation:(id)arg1;	// IMP=0x0010000000140d41
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000140c7d
- (id)_copyDownloadsForDownloadIDs:(id)arg1 properties:(id)arg2 context:(id)arg3;	// IMP=0x00100000001409d0
- (void)_completeFinishRequest:(id)arg1 forPaymentID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000014061d
- (void)_completeBuyRequest:(id)arg1 forPaymentID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000140105
- (id)_copyAccountIDsForRefreshReason:(long long)arg1;	// IMP=0x001000000013fde5
- (id)_clientIdentity;	// IMP=0x001000000013fdbb
- (id)_clientIdentifier;	// IMP=0x001000000013fd90
- (void)_cancelDownloadsForPayments:(id)arg1;	// IMP=0x001000000013faff
- (MISSING_TYPE *)_cancelDownloadsForDownloadIDs: /* Error: Ran out of types for this method. */;	// IMP=0x001000000013f8e2
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x001000000013f87c
- (_Bool)finishPaymentWithMessage:(id)arg1;	// IMP=0x001000000013efbb
@property(retain) XPCClient *XPCClient;
- (void)sendPurchaseIntents:(id)arg1 forApp:(id)arg2;	// IMP=0x001000000013e783
- (void)updatePaymentWithObjectID:(id)arg1 purchaseResponse:(id)arg2;	// IMP=0x001000000013e63a
- (void)startPaymentWithObjectID:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000013e1fa
- (void)startDownloadsWithIDs:(id)arg1;	// IMP=0x001000000013d7e6
- (void)setPaymentQueueClient:(id)arg1;	// IMP=0x001000000013d5b6
- (void)sendPaymentsUpdatedWithObjectIDs:(id)arg1;	// IMP=0x001000000013d38f
- (void)sendDownloadChangesets:(id)arg1;	// IMP=0x001000000013d323
- (void)resumeDownloadsWithIDs:(id)arg1;	// IMP=0x001000000013cd69
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;	// IMP=0x001000000013c735
- (_Bool)removePaymentWithObjectID:(id)arg1;	// IMP=0x001000000013c5dd
- (void)refreshFromServerWithReason:(long long)arg1 accountIdentifier:(id)arg2;	// IMP=0x001000000013c565
- (void)refreshFromServerWithReason:(long long)arg1;	// IMP=0x001000000013c551
- (void)pauseDownloadsWithIDs:(id)arg1;	// IMP=0x001000000013bf98
@property(readonly) NSArray *openTransactions;
@property(readonly) NSManagedObjectID *microPaymentClientID;
@property(readonly, getter=isSandboxed) _Bool sandboxed;
- (_Bool)isEqualToXPCConnection:(id)arg1 paymentQueueClient:(id)arg2;	// IMP=0x001000000013b703
@property(readonly) NSManagedObjectID *firstReadyPaymentID;
- (void)createMicroPaymentClientIfNecessary;	// IMP=0x001000000013b029
@property(readonly) long long clientState;
@property(readonly) NSString *clientIdentifier;
- (void)cancelDownloadsWithIDs:(id)arg1;	// IMP=0x001000000013a9a8
- (_Bool)addPaymentTransaction:(id)arg1 withOptions:(id)arg2;	// IMP=0x0010000000139f24
- (void)dealloc;	// IMP=0x0010000000139e36
- (id)initWithXPCClient:(id)arg1;	// IMP=0x0010000000139e02
- (id)initWithMicroPaymentClientID:(id)arg1;	// IMP=0x0010000000139dce
- (id)init;	// IMP=0x0010000000139dbc
- (id)_initStoreKitClient;	// IMP=0x0010000000139ccd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
