//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MapsSuggestionsDestinationGraph : NSObject
{
    NSMutableArray *_destinations;	// 8 = 0x8
    NSMutableArray *_destinationLinks;	// 16 = 0x10
    struct Queue _queue;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x00200000000065fc
- (void).cxx_destruct;	// IMP=0x00100000000065c0
- (id)testing_allDestinationLinks;	// IMP=0x0010000000006547
- (id)testing_allDestinations;	// IMP=0x00100000000064ce
- (id)objectForJSON;	// IMP=0x0010000000005fb0
- (id)nameForJSON;	// IMP=0x0010000000005fa3
- (id)jsonWithFormatting:(_Bool)arg1;	// IMP=0x0010000000005f97
- (_Bool)rebalance;	// IMP=0x0010000000005b1c
- (_Bool)addBreadcrumb:(id)arg1;	// IMP=0x0010000000004ecb
- (_Bool)addETA:(id)arg1 from:(id)arg2 to:(id)arg3;	// IMP=0x00100000000047db
- (_Bool)addETA:(id)arg1 to:(id)arg2;	// IMP=0x001000000000419d
- (id)predictedEntriesWithinPeriod:(id)arg1;	// IMP=0x0010000000003b66
- (id)destinationsAtTime:(id)arg1;	// IMP=0x00100000000036f0
- (id)destinationAtLocation:(id)arg1;	// IMP=0x00100000000033d4
- (id)destinationAtMapItem:(id)arg1;	// IMP=0x0010000000003239
- (id)destinationAtEntry:(id)arg1;	// IMP=0x0010000000002ddd
- (_Bool)addEntry:(id)arg1;	// IMP=0x00100000000023ec
- (id)init;	// IMP=0x00100000000022e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
