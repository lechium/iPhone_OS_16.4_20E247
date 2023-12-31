//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARRouteGuidanceiAPSession, CARSession, CARSessionStatus, NSMutableArray, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface CRCarPlayNavigationOwnersServiceAgent : NSObject
{
    struct os_unfair_lock_s _sessionLock;	// 8 = 0x8
    _Bool _cachedDoWeOwnNavigation;	// 12 = 0xc
    CARSessionStatus *_sessionStatus;	// 16 = 0x10
    NSMutableOrderedSet *_owners;	// 24 = 0x18
    NSMutableArray *_observers;	// 32 = 0x20
    CARRouteGuidanceiAPSession *_iAPRouteGuidanceSession;	// 40 = 0x28
    unsigned long long _maximumConcurrentNavigationOwners;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    CARSession *_lock_session;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000002c7a2
@property(retain, nonatomic) CARSession *lock_session; // @synthesize lock_session=_lock_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) unsigned long long maximumConcurrentNavigationOwners; // @synthesize maximumConcurrentNavigationOwners=_maximumConcurrentNavigationOwners;
@property(nonatomic) _Bool cachedDoWeOwnNavigation; // @synthesize cachedDoWeOwnNavigation=_cachedDoWeOwnNavigation;
@property(retain, nonatomic) CARRouteGuidanceiAPSession *iAPRouteGuidanceSession; // @synthesize iAPRouteGuidanceSession=_iAPRouteGuidanceSession;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableOrderedSet *owners; // @synthesize owners=_owners;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
- (void)_work_queue_updateNavigationStateForRemoval;	// IMP=0x001000000002c442
- (void)_work_queue_updateOwnershipToiOSIfNecessary;	// IMP=0x001000000002c1d5
- (_Bool)_work_queue_doWeHaveOwners;	// IMP=0x001000000002c158
- (void)_work_queue_updateRouteGuidanceToLastIdentifier;	// IMP=0x001000000002bffb
- (id)_work_queue_activeNavigationIdentifiers;	// IMP=0x001000000002bed6
- (_Bool)_work_queue_navigationOwnerExistsForIdentifier:(id)arg1;	// IMP=0x001000000002bd21
- (void)_work_queue_navigationOwnershipChangedFromCar;	// IMP=0x001000000002ba39
- (void)_work_queue_removeNavigationOwner:(id)arg1;	// IMP=0x001000000002b58d
- (void)_work_queue_removeNavigationOwnerForConnection:(id)arg1;	// IMP=0x001000000002b399
- (void)_work_queue_removeOwnerWithIdentifier:(id)arg1 forConnection:(id)arg2;	// IMP=0x001000000002b0df
- (void)_work_queue_addNavigationIdentifer:(id)arg1 forConnection:(id)arg2;	// IMP=0x001000000002ab7e
- (void)fetchNavigationIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002aa90
- (void)fetchNavigationIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a8f6
- (void)fetchNavigationOwnerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a869
- (void)removeNavigationOwnerWithIdentifier:(id)arg1;	// IMP=0x001000000002a75c
- (void)beginObserving;	// IMP=0x001000000002a647
- (void)addNavigationOwnerWithIdentifier:(id)arg1;	// IMP=0x001000000002a53a
- (void)_navigationOwnershipChangedFromCar:(id)arg1;	// IMP=0x001000000002a4b3
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x001000000002a3c0
- (void)sessionDidConnect:(id)arg1;	// IMP=0x001000000002a2a0
- (void)_removeConnection:(id)arg1;	// IMP=0x001000000002a114
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000029c43
- (id)initWithSessionStatus:(id)arg1;	// IMP=0x0010000000029b44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

