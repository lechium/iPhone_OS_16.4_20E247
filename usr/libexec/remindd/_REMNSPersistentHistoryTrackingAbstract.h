//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface _REMNSPersistentHistoryTrackingAbstract : NSObject
{
    NSCache *_cachedAccountIDsByStoreIDsMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007053e
@property(retain, nonatomic) NSCache *cachedAccountIDsByStoreIDsMap; // @synthesize cachedAccountIDsByStoreIDsMap=_cachedAccountIDsByStoreIDsMap;
- (id)_fetchCDAuxiliaryChangeInfosWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000702f3
- (id)_changeTokenFromCDTrackingState:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000070119
- (id)_fetchCDTrackingStateWithClientID:(id)arg1 andPerformBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000006fd3d
- (id)_executeDeleteHistoryRequest:(id)arg1;	// IMP=0x001000000006fa37
- (void)_resolveObjectIDsInChanges:(id)arg1 deletedObjectsIDMap:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x001000000006f0cd
- (id)_resultChangeSetByExecutingRequest:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006e85c
- (id)_errorChangeSetWithError:(id)arg1;	// IMP=0x001000000006e77f
- (id)_currentREMChangeTokenFromNSPersistentStores:(id)arg1 persistentStoreCoordinator:(id)arg2;	// IMP=0x001000000006e6d3
- (id)_accountIDForPersistenceStoreID:(id)arg1;	// IMP=0x001000000006e598
- (id)_persistenceStoreIDsForAccountTypes:(long long)arg1;	// IMP=0x001000000006e3b8
- (id)_persistenceStoreIDForAccountID:(id)arg1;	// IMP=0x001000000006e368
- (id)_accountIdentifierForPersistenceStoreID:(id)arg1;	// IMP=0x001000000006e2b2
- (id)_persistenceStoresForAccountTypes:(id)arg1;	// IMP=0x001000000006e1fc
- (id)_persistenceStoreForAccountID:(id)arg1;	// IMP=0x001000000006e146
- (void)fetchAuxiliaryChangeInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006d8c9
- (void)deleteHistoryBeforeToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006d71e
- (void)deleteHistoryBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006d688
- (id)_fetchRequestWithPredicateUsingEntityNames:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006d1f8
- (void)fetchHistoryAfterToken:(id)arg1 entityNames:(id)arg2 transactionFetchLimit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006cc8e
- (void)fetchHistoryAfterDate:(id)arg1 entityNames:(id)arg2 transactionFetchLimit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006c8a2
- (void)saveTrackingState:(id)arg1 withClientID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006c2ba
- (void)getTrackingStateWithClientID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006c03f
- (id)earliestChangeTokenForAccountID:(id)arg1;	// IMP=0x001000000006bba4
- (id)currentChangeTokenForAccountID:(id)arg1;	// IMP=0x001000000006b91c
- (id)currentChangeTokenForAccountTypes:(long long)arg1;	// IMP=0x001000000006b573
- (id)currentChangeToken;	// IMP=0x001000000006b3d7
- (void)withManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b321

@end

