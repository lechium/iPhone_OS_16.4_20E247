//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray, NSMutableIndexSet, NSMutableSet;
@protocol OS_dispatch_queue;

@interface PurchaseController : NSObject
{
    ISOperationQueue *_authenticationOperationQueue;	// 8 = 0x8
    NSMutableIndexSet *_authenticatingBatchIdentifiers;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    _Bool _didGarbageCollect;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSMutableSet *_inflightCanceledIdentifiers;	// 48 = 0x30
    ISOperationQueue *_purchaseOperationQueue;	// 56 = 0x38
    NSMutableSet *_purchasingIdentifiers;	// 64 = 0x40
}

+ (void)observeXPCServer:(id)arg1;	// IMP=0x00400000001bd637
+ (void)movePurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001bd515
+ (void)insertPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001bd482
+ (void)finishPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001bd373
+ (void)getPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001bd083
+ (void)connectClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001bcf83
+ (void)cancelPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001bce74
+ (void)addPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001bcde1
+ (id)sharedController;	// IMP=0x00100000001bc333
- (void)_showPurchasesFailedDialogWithFirstTitle:(id)arg1 count:(long long)arg2;	// IMP=0x00200000001c4288
- (void)_showNotEnoughDiskSpaceDialogForPurchases:(id)arg1;	// IMP=0x00100000001c3d1a
- (id)_purchaseOperationQueue;	// IMP=0x00100000001c3c9e
- (id)_placeholderAppPathForBundleIdentifier:(id)arg1;	// IMP=0x00100000001c3bf6
- (id)_newPurchasesFromEncodedArray:(id)arg1 client:(id)arg2;	// IMP=0x00100000001c3aeb
- (id)_newPurchaseIdentifiersFromEncodedArray:(id)arg1;	// IMP=0x00100000001c39fb
- (id)_newEncodedPurchaseEntityPropertiesWithResponse:(id)arg1;	// IMP=0x00100000001c3936
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c383f
- (void)_garbageCollectInflightPurchases;	// IMP=0x00100000001c31e5
- (void)_finishPurchaseRequestForClientUniqueID:(long long)arg1 withResponse:(id)arg2;	// IMP=0x00100000001c2a9b
- (void)_sendAuthenticateRequestForClientUniqueID:(long long)arg1 withContext:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c2a02
- (void)_finishAuthenticationRequestForBatchIdentifier:(long long)arg1 client:(id)arg2 withAccountID:(id)arg3 error:(id)arg4;	// IMP=0x00100000001c2514
- (void)_filterPurchases:(id)arg1 withTransaction:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c2046
- (void)_enqueueNextPurchase;	// IMP=0x00100000001c1822
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c1738
- (id)_clientForUniqueIdentifier:(long long)arg1;	// IMP=0x00100000001c1610
- (id);	// IMP=0x00100000001c1073
- (void)_checkStoreDownloadQueuesForPurchase:(id)arg1 response:(id)arg2;	// IMP=0x00100000001c0db4
- (_Bool)_cancelPurchasesWithBatchIdentifier:(long long)arg1 client:(id)arg2 response:(id)arg3;	// IMP=0x00100000001c0a33
- (void)_cancelPurchasesForLackOfDiskSpace:(id)arg1 client:(id)arg2;	// IMP=0x00100000001c0832
- (void)_beginPurchaseBatch:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001bfc44
- (id)_authenticationOperationQueue;	// IMP=0x00100000001bfbc8
- (void)_authenticateForPurchases:(id)arg1 client:(id)arg2;	// IMP=0x00100000001bf903
- (void)_addPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001bf069
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x00100000001befb4
- (id)_newResponsesToPurchasesForClient:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001becd6
- (void)_moveEncodedPurchaseIDs:(id)arg1 afterPurchaseID:(long long)arg2 forClient:(id)arg3;	// IMP=0x00100000001bec17
- (void)_markInFlightCanceledPurchaseIdentifier:(id)arg1;	// IMP=0x00100000001bea7d
- (void)_insertEncodedPurchases:(id)arg1 afterPurchaseID:(long long)arg2 forClient:(id)arg3;	// IMP=0x00100000001be0f0
- (void)_finishEncodedPurchaseIdentifiers:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001bdde3
- (void)_connectClient:(id)arg1 withOutputConnection:(id)arg2;	// IMP=0x00100000001bdaaf
- (void)_cancelEncodedPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001bd758
- (void)_addEncodedPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001bd70f
- (void)start;	// IMP=0x00100000001bcd7f
- (void)cancelPurchasesForDownloadsWithIdentifiers:(id)arg1;	// IMP=0x00100000001bc494
- (void)beginPurchaseBatch:(id)arg1;	// IMP=0x00100000001bc422
- (void)addPurchases:(id)arg1;	// IMP=0x00100000001bc3b0
- (void)dealloc;	// IMP=0x00100000001bc23b
- (id)init;	// IMP=0x00100000001bc1ad

@end

