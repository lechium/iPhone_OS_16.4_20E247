//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOMapEdgeTransitBuilder
{
    struct deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>> _pieces;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x0000000000a7b6a7
- (void).cxx_destruct;	// IMP=0x0000000000a7b696
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0000000000a7b66d
- (id)_lastTile;	// IMP=0x0000000000a7b629
- (id)_firstTile;	// IMP=0x0000000000a7b5f0
- (Matrix_8746f91e)_lastPoint;	// IMP=0x0000000000a7b52d
- (Matrix_8746f91e)_firstPoint;	// IMP=0x0000000000a7b475
- (_Bool)_shouldFindEdgeBehind;	// IMP=0x0000000000a7b346
- (_Bool)_shouldFindEdgeAhead;	// IMP=0x0000000000a7b223
- (_Bool)_findEdgeBehindInTile:(id)arg1;	// IMP=0x0000000000a7a878
- (_Bool)_findEdgeAheadInTile:(id)arg1;	// IMP=0x0000000000a79b33
- (void)_buildCompleteEdge;	// IMP=0x0000000000a79a40
- (unsigned long long)_maxTileCount;	// IMP=0x0000000000a79a35
- (id)initWithMap:(id)arg1 firstPiece:(const struct TransitEdgePiece *)arg2;	// IMP=0x0000000000a796c4

@end

