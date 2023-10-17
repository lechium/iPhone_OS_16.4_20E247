//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSString;

@interface SKClientBroker : NSObject
{
    NSMapTable *_clients;	// 8 = 0x8
    NSHashTable *_subscriptionStatusListeners;	// 16 = 0x10
    NSHashTable *_storefrontListeners;	// 24 = 0x18
    NSHashTable *_transactionListeners;	// 32 = 0x20
    NSHashTable *_messageListeners;	// 40 = 0x28
    NSHashTable *_purchaseIntentListeners;	// 48 = 0x30
    NSString *_storefrontIdentifier;	// 56 = 0x38
    int _storefrontChangedToken;	// 64 = 0x40
    int _unfinishedTransactionsToken;	// 68 = 0x44
    int _receivedPurchaseIntentsToken;	// 72 = 0x48
}

+ (id)defaultBroker;	// IMP=0x0020000000002ea9
- (void).cxx_destruct;	// IMP=0x0020000000006115
- (void)_purchaseIntentObserverRemoved;	// IMP=0x00100000000060c0
- (void)_purchaseIntentObserverAdded;	// IMP=0x0010000000006016
- (void)_checkForPendingPurchaseIntents;	// IMP=0x0010000000005e9e
- (void)_handleUnfinishedTransactionsNotification;	// IMP=0x0010000000005b3a
- (void)_checkStorefrontChangedNotify:(_Bool)arg1;	// IMP=0x0010000000005873
- (void)_storefrontObserverRemoved;	// IMP=0x001000000000581e
- (void)_storefrontObserverAdded;	// IMP=0x001000000000575c
- (void)_cancelNotifyTokenIfValid:(int)arg1;	// IMP=0x0010000000005735
- (id)_unfinishedTransactionsNotificationName;	// IMP=0x00100000000056af
- (void)handleEngagementRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005514
- (void)handleDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005379
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000051de
- (void)receivedPurchaseIntentsForProductIdentifiers:(id)arg1;	// IMP=0x0010000000004ee8
- (void)receivedTransactions:(id)arg1;	// IMP=0x0010000000004d49
- (void)receivedStatuses:(id)arg1;	// IMP=0x0010000000004baa
- (void)storefrontChanged:(id)arg1;	// IMP=0x00100000000048b4
- (void)downloadRemoved:(id)arg1;	// IMP=0x00100000000046ea
- (void)downloadStatusChanged:(id)arg1;	// IMP=0x0010000000004520
- (void)downloadAdded:(id)arg1;	// IMP=0x0010000000004356
- (void)removedTransactions:(id)arg1;	// IMP=0x001000000000418c
- (void)updatedTransactions:(id)arg1;	// IMP=0x0010000000003ceb
- (void)removedEntitlementsForProductIdentifiers:(id)arg1;	// IMP=0x0010000000003b21
- (void)hasAnyMessageListenersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003a99
- (void)askToShowMessageWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000038a8
- (void)unregisterPurchaseIntentsListener:(id)arg1;	// IMP=0x001000000000381c
- (void)registerPurchaseIntentsListener:(id)arg1;	// IMP=0x0010000000003780
- (void)pendingMessages:(id)arg1;	// IMP=0x00100000000035e1
- (void)unregisterMessageListener:(id)arg1;	// IMP=0x0010000000003566
- (void)registerMessageListener:(id)arg1;	// IMP=0x00100000000034eb
- (void)unregisterTransactionListener:(id)arg1;	// IMP=0x0010000000003470
- (void)registerTransactionListener:(id)arg1;	// IMP=0x00100000000033f5
- (void)unregisterStorefrontListener:(id)arg1;	// IMP=0x0010000000003369
- (void)registerStorefrontListener:(id)arg1;	// IMP=0x00100000000032dd
- (void)unregisterSubscriptionStatusListener:(id)arg1;	// IMP=0x0010000000003262
- (void)registerSubscriptionStatusListener:(id)arg1;	// IMP=0x00100000000031e7
- (void)unregisterClientWithIdentifier:(id)arg1;	// IMP=0x001000000000311a
- (void)registerClient:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000002f5f
- (_Bool)hasTransactionListener;	// IMP=0x0010000000002efe
- (void)dealloc;	// IMP=0x0010000000002e4d
- (id)init;	// IMP=0x0010000000002d00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
