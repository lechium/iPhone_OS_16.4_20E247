//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MicroPaymentQueue : NSObject
{
    NSManagedObjectID *_activePaymentID;	// 8 = 0x8
    long long _aliveState;	// 16 = 0x10
    long long _changeSetCount;	// 24 = 0x18
    NSMutableArray *_clients;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    _Bool _observingNetworkChanges;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_purchaseActionsDBQueue;	// 56 = 0x38
}

+ (id)paymentQueue;	// IMP=0x0040000000035d3b
- (void)_startFirstReadyPayment;	// IMP=0x002000000004048c
- (void)_setActivePaymentID:(id)arg1;	// IMP=0x00100000000403e4
- (void)_sendPurchaseIntentsForApp:(id)arg1 storeKitClient:(id)arg2 force:(_Bool)arg3;	// IMP=0x001000000003fe17
- (id)_newPaymentQueueClientWithMessage:(id)arg1 connection:(id)arg2 parameter:(const char *)arg3;	// IMP=0x001000000003fd91
- (id)_firstReadyPaymentInContext:(id)arg1;	// IMP=0x001000000003fc57
- (void)_finishPaymentOperationForPaymentID:(id)arg1 result:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000003fb69
- (void)_enumerateDownloadsForIdentifiers:(id)arg1 context:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000003f899
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000003f7d5
- (id)_copyDownloadsIDsFromMessage:(id)arg1 key:(const char *)arg2;	// IMP=0x001000000003f6d0
- (id)_clients;	// IMP=0x001000000003eb9a
- (id)_clientForPayment:(id)arg1;	// IMP=0x001000000003eb4e
- (id)_clientForObjectID:(id)arg1;	// IMP=0x001000000003e995
- (id)_clientForConnection:(id)arg1 paymentQueueClient:(id)arg2;	// IMP=0x001000000003e79d
- (id)_beginManagedContextSession;	// IMP=0x001000000003e619
- (void)_refreshDidFinishNotification:(id)arg1;	// IMP=0x001000000003e5b7
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x001000000003e4cc
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000003e1e9
- (_Bool)_inAppReviewEnabled;	// IMP=0x001000000003e1ac
- (void)resetInAppReviewRequestsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003df3c
- (void)updateInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003dbee
- (id)_inAppReviewRequestConstants;	// IMP=0x001000000003d968
- (void)addInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003cc05
- (void)getPromotedIAPInfoInternalWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003c63d
- (void)setPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003be9e
- (void)getPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003b885
- (void)setPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003b04f
- (void)getPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003aa0e
- (void)updateDeferredPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003a007
- (void)startDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039f0e
- (void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039e15
- (void)restoreCompletedTransactionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039d23
- (void)registerClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000399d4
- (void)productsRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003998d
- (void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039894
- (void)installSheetStateUpdatedWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039802
- (void)getTransactionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039685
- (void)finishPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000395ac
- (void)forceSandboxWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003948c
- (void)connectedAppEnteredForegroundWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039234
- (void)checkQueueForClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039168
- (void)cancelRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039130
- (void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039037
- (void)addPurchaseIntentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038ec1
- (void)addPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038d06
- (void)updateWithPurchaseResponse:(id)arg1;	// IMP=0x00100000000388de
- (void)startFirstReadyPayment;	// IMP=0x001000000003887c
- (void)start;	// IMP=0x0010000000038811
- (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000038577
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 ofDownloadID:(long long)arg2;	// IMP=0x00100000000381c7
- (void)finishDownloadsWithIdentifiers:(id)arg1;	// IMP=0x001000000003722f
- (void)failDownloadsWithIdentifiers:(id)arg1;	// IMP=0x001000000003693a
- (void)checkQueueForClientWithIdentifier:(id)arg1 URLBagContext:(id)arg2;	// IMP=0x0010000000036485
- (void)addPurchaseIntentWithProductIdentifier:(id)arg1 productName:(id)arg2 appBundleId:(id)arg3 appName:(id)arg4;	// IMP=0x0010000000035db8
- (void)dealloc;	// IMP=0x0010000000035c6b
- (id)init;	// IMP=0x0010000000035b68

@end
