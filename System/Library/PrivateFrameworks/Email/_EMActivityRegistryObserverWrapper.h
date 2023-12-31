//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMActivityRegistry, EMRemoteConnection, NSArray, NSMutableDictionary, NSString;
@protocol EFCancelable, EMActivityObserver;

__attribute__((visibility("hidden")))
@interface _EMActivityRegistryObserverWrapper : NSObject
{
    id <EFCancelable> _observerCancelable;	// 8 = 0x8
    NSMutableDictionary *_trackedActivities;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    EMRemoteConnection *_connection;	// 32 = 0x20
    EMActivityRegistry *_registry;	// 40 = 0x28
    id <EMActivityObserver> _observer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000852d
@property __weak id <EMActivityObserver> observer; // @synthesize observer=_observer;
@property __weak EMActivityRegistry *registry; // @synthesize registry=_registry;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void)removedActivityWithID:(id)arg1;	// IMP=0x000000000000844a
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;	// IMP=0x00000000000083bc
- (void)activityWithID:(id)arg1 setCompletedCount:(id)arg2 totalCount:(id)arg3;	// IMP=0x00000000000082e5
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000000822e
- (void)startedActivity:(id)arg1;	// IMP=0x00000000000080e2
- (id)activityWithObjectID:(id)arg1;	// IMP=0x0000000000008060
@property(retain) NSArray *activities;
- (void)_recover;	// IMP=0x00000000000077d3
- (void)_resetWithCancelable:(id)arg1;	// IMP=0x0000000000007747
- (void)_startObservingIfNecessary;	// IMP=0x0000000000007557
- (void)cancel;	// IMP=0x0000000000007543
- (void)dealloc;	// IMP=0x00000000000074cf
- (id)initWithConnection:(id)arg1 registry:(id)arg2 observer:(id)arg3;	// IMP=0x0000000000007220

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

