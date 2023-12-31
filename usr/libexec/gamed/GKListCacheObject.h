//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet, NSString;

@interface GKListCacheObject
{
}

+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0040000000158962
+ (Class)entryClass;	// IMP=0x0010000000158951
- (id)entriesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0020000000159ee7
- (id)entryPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000159cb1
- (id)findEntry:(CDUnknownBlockType)arg1;	// IMP=0x0010000000159a13
- (void)updateEntriesWithRepresentations:(id)arg1 entryForRepresentation:(CDUnknownBlockType)arg2 reuseEntriesByIndex:(_Bool)arg3;	// IMP=0x00100000001591cd
- (void)removeEntriesMatchingPredicate:(id)arg1;	// IMP=0x0010000000158f6f
- (void)reorderEntry:(id)arg1 toIndex:(long long)arg2;	// IMP=0x0010000000158d4e
- (id)internalRepresentation;	// IMP=0x00100000001589fc
- (void)updateSeed;	// IMP=0x0010000000158986

// Remaining properties
@property(nonatomic) _Bool detailsLoaded; // @dynamic detailsLoaded;
@property(retain, nonatomic) NSOrderedSet *entries; // @dynamic entries;
@property(retain, nonatomic) NSString *seed; // @dynamic seed;

@end

