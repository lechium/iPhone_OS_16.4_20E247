//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, PDDatabaseManager;
@protocol OS_dispatch_queue;

@interface PDPeerPaymentAccountManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    struct os_unfair_lock_s _lockObservers;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001e312b
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e2f37
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000001e2ede
- (void)registerObserver:(id)arg1;	// IMP=0x00100000001e2e85
- (void)_handlePeerPaymentPendingRequestsChanged;	// IMP=0x00100000001e2e2a
- (void)deletePeerPaymentPendingRequestsForPeerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e2d59
- (void)deletePeerPaymentPendingRequestsForRequestTokens:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2c58
- (void)insertOrUpdatePeerPaymentPendingRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2b57
- (void)peerPaymentPendingRequestsForPeerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e2a86
- (void)peerPaymentPendingRequestsForRequestTokens:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e295f
- (id)initWithDatabaseManager:(id)arg1;	// IMP=0x00100000001e2884

@end
