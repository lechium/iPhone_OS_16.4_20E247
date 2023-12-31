//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPQueryEnumerationSettings, FPSpotlightCollectorManager, FPSpotlightQueryDescriptor, NSPredicate, NSString;
@protocol FPSpotlightDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSpotlightDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    FPSpotlightCollectorManager *_collectorManager;	// 16 = 0x10
    FPQueryEnumerationSettings *_enumerationSettings;	// 24 = 0x18
    NSPredicate *_predicate;	// 32 = 0x20
    _Bool _invalidated;	// 40 = 0x28
    _Bool _hasMoreIncoming;	// 41 = 0x29
    id <FPSpotlightDataSourceDelegate> _delegate;	// 48 = 0x30
    FPSpotlightQueryDescriptor *_queryDescriptor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006e191
@property(readonly, nonatomic) FPSpotlightQueryDescriptor *queryDescriptor; // @synthesize queryDescriptor=_queryDescriptor;
@property(nonatomic) __weak id <FPSpotlightDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasMoreIncoming; // @synthesize hasMoreIncoming=_hasMoreIncoming;
@property(readonly, copy) NSString *description;
- (void)enumerationMightHaveResumed;	// IMP=0x000000000006e07c
- (void)invalidate;	// IMP=0x000000000006e01b
- (void)_invalidate;	// IMP=0x000000000006dfae
- (void)_invalidateWithError:(id)arg1;	// IMP=0x000000000006df39
- (void)start;	// IMP=0x000000000006ded4
- (id)initWithQueryDescriptor:(id)arg1 predicate:(id)arg2;	// IMP=0x000000000006dd61
- (unsigned long long)maximumNumberOfItems;	// IMP=0x000000000006e676
- (void)collector:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x000000000006e56d
- (void)collector:(id)arg1 didUpdateItemsOrigin:(unsigned long long)arg2;	// IMP=0x000000000006e4df
- (void)collector:(id)arg1 didRemoveItemIDs:(id)arg2;	// IMP=0x000000000006e40b
- (void)collector:(id)arg1 didUpdateItems:(id)arg2;	// IMP=0x000000000006e337
- (void)collector:(id)arg1 didGatherItems:(id)arg2;	// IMP=0x000000000006e1f1
- (id)itemPredicateForCollector:(id)arg1;	// IMP=0x000000000006e1e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

