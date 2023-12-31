//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteHypothesisCache, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NavdProactiveLocalProxy;

@interface NavdTTLCache : NSObject
{
    GEORouteHypothesisCache *_cache;	// 8 = 0x8
    NSMutableDictionary *_pendingEntriesByKey;	// 16 = 0x10
    NSMutableArray *_entries;	// 24 = 0x18
    NSOperationQueue *_cacheOperationQueue;	// 32 = 0x20
    NavdProactiveLocalProxy *_localProxy;	// 40 = 0x28
    _Bool _shouldPostDarwinNotificationForNextUpdate;	// 48 = 0x30
    NSMutableSet *_pendingStopUUIDs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000006476
- (void)callHandlers:(id)arg1 withHypothesis:(id)arg2;	// IMP=0x001000000000623f
- (void)removeEntry:(id)arg1 withKey:(id)arg2 value:(id)arg3;	// IMP=0x00100000000061d4
- (void)saveValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000061be
- (id)loadEntryForRowId:(long long)arg1;	// IMP=0x00100000000061a8
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0010000000006192
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 client:(id)arg3 osTransaction:(id)arg4;	// IMP=0x0010000000005e47
- (void)_resolvedMapItem:(id)arg1 toPostUINotification:(unsigned long long)arg2 forDestination:(id)arg3 client:(id)arg4 osTransaction:(id)arg5;	// IMP=0x0010000000005c43
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 osTransaction:(id)arg4;	// IMP=0x001000000000589f
- (void)_resolvedMapItem:(id)arg1 toStopMonitoringPlannedDestination:(id)arg2 clientInfo:(id)arg3 uuid:(id)arg4 osTransaction:(id)arg5;	// IMP=0x001000000000515d
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2 osTransaction:(id)arg3;	// IMP=0x0010000000004e9c
- (void)_resolvedMapItem:(id)arg1 toOnlyPerformLocalUpdatesForPlannedDestination:(id)arg2 client:(id)arg3 osTransaction:(id)arg4;	// IMP=0x0010000000004cdf
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2 osTransaction:(id)arg3;	// IMP=0x0010000000004a1e
- (void)_resolvedMapItem:(id)arg1 toRefreshPlannedDestination:(id)arg2 client:(id)arg3 osTransaction:(id)arg4;	// IMP=0x00100000000047de
- (void)_resolvedOriginWaypoint:(id)arg1 originWaypointError:(id)arg2 destinationWaypoint:(id)arg3 destinationWaypointError:(id)arg4 forKey:(id)arg5 pendingCacheEntry:(id)arg6 osTransaction:(id)arg7 clientInfo:(id)arg8;	// IMP=0x0010000000003dda
- (void)_resolvedMapItem:(id)arg1 error:(id)arg2 forPendingCacheEntry:(id)arg3 uuid:(id)arg4 osTransaction:(id)arg5 clientInfo:(id)arg6;	// IMP=0x0010000000003645
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 osTransaction:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000343e
- (double)nextRefreshTimeStamp;	// IMP=0x0010000000003428
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;	// IMP=0x0010000000003363
- (id)findEntryForKey:(id)arg1;	// IMP=0x001000000000311c
- (id)descriptionOfAllEntries;	// IMP=0x0010000000003106
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00100000000030f0
- (id)entryAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000030da
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x0010000000003099
- (id)initWithCacheOperationQueue:(id)arg1 localProxy:(id)arg2;	// IMP=0x0010000000002eb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

