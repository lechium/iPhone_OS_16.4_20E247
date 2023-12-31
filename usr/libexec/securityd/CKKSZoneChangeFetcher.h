//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSFetchAllRecordZoneChangesOperation, CKKSNearFutureScheduler, CKKSReachabilityTracker, CKKSResultOperation, CKKSZoneChangeFetchDependencyOperation, NSError, NSMapTable, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface CKKSZoneChangeFetcher : NSObject
{
    _Bool _halted;	// 8 = 0x8
    _Bool _newRequests;	// 9 = 0x9
    Class _fetchRecordZoneChangesOperationClass;	// 16 = 0x10
    CKContainer *;	// 24 = 0x18
    CKKSReachabilityTracker *_reachabilityTracker;	// 32 = 0x20
    NSError *_lastCKFetchError;	// 40 = 0x28
    CKKSNearFutureScheduler *_fetchScheduler;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    NSOperationQueue *_operationQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSMapTable *_clientMap;	// 80 = 0x50
    CKKSFetchAllRecordZoneChangesOperation *_currentFetch;	// 88 = 0x58
    CKKSResultOperation *_currentProcessResult;	// 96 = 0x60
    NSMutableSet *_currentFetchReasons;	// 104 = 0x68
    NSMutableSet *_apnsPushes;	// 112 = 0x70
    CKKSZoneChangeFetchDependencyOperation *_successfulFetchDependency;	// 120 = 0x78
    NSMutableSet *_inflightFetchDependencies;	// 128 = 0x80
    CKKSZoneChangeFetchDependencyOperation *_inflightFetchDependency;	// 136 = 0x88
    CKKSResultOperation *_holdOperation;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000001ce980
@property(retain) CKKSResultOperation *holdOperation; // @synthesize holdOperation=_holdOperation;
@property(retain) CKKSZoneChangeFetchDependencyOperation *inflightFetchDependency; // @synthesize inflightFetchDependency=_inflightFetchDependency;
@property(retain) NSMutableSet *inflightFetchDependencies; // @synthesize inflightFetchDependencies=_inflightFetchDependencies;
@property(retain) CKKSZoneChangeFetchDependencyOperation *successfulFetchDependency; // @synthesize successfulFetchDependency=_successfulFetchDependency;
@property _Bool newRequests; // @synthesize newRequests=_newRequests;
@property(retain) NSMutableSet *apnsPushes; // @synthesize apnsPushes=_apnsPushes;
@property(retain) NSMutableSet *currentFetchReasons; // @synthesize currentFetchReasons=_currentFetchReasons;
@property(retain) CKKSResultOperation *currentProcessResult; // @synthesize currentProcessResult=_currentProcessResult;
@property(retain) CKKSFetchAllRecordZoneChangesOperation *currentFetch; // @synthesize currentFetch=_currentFetch;
@property(retain) NSMapTable *clientMap; // @synthesize clientMap=_clientMap;
@property _Bool halted; // @synthesize halted=_halted;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) CKKSNearFutureScheduler *fetchScheduler; // @synthesize fetchScheduler=_fetchScheduler;
@property(retain) NSError *lastCKFetchError; // @synthesize lastCKFetchError=_lastCKFetchError;
@property(retain) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(readonly) CKContainer *container; // @synthesize container=_container;
@property(readonly) Class fetchRecordZoneChangesOperationClass; // @synthesize fetchRecordZoneChangesOperationClass=_fetchRecordZoneChangesOperationClass;
- (void)halt;	// IMP=0x00100000001ce57a
- (void)cancel;	// IMP=0x00100000001ce53d
- (void)holdFetchesUntil:(id)arg1;	// IMP=0x00100000001ce52b
- (id)createSuccesfulFetchDependency;	// IMP=0x00100000001ce4c0
- (void)_onqueueCreateNewFetch;	// IMP=0x00100000001cdd30
- (void)maybeCreateNewFetch;	// IMP=0x00100000001cdcbf
- (void)maybeCreateNewFetchOnQueue;	// IMP=0x00100000001cdabd
- (id)inflightFetch;	// IMP=0x00100000001cd9c6
- (id)requestSuccessfulFetchForManyReasons:(id)arg1;	// IMP=0x00100000001cd889
- (id)requestFetchDueToAPNS:(id)arg1;	// IMP=0x00100000001cd4dd
- (void)notifyZoneChange:(id)arg1;	// IMP=0x00100000001cd402
- (id)requestSuccessfulFetch:(id)arg1;	// IMP=0x00100000001cd39c
- (id)strongClientMap;	// IMP=0x00100000001cd114
- (void)registerClient:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000001cd048
@property(readonly, copy) NSString *description;
- (id)initWithContainer:(id)arg1 fetchClass:(Class)arg2 reachabilityTracker:(id)arg3;	// IMP=0x00100000001ccbc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

