//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexSet, PTFocusBlurMap;

__attribute__((visibility("hidden")))
@interface PTScanlineMask_FocusBlurMap
{
    PTFocusBlurMap *_map;	// 40 = 0x28
    NSIndexSet *_region;	// 48 = 0x30
    struct CGSize _normalizedTileSize;	// 56 = 0x38
    struct CGSize _placementTileSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000041f5c
@property struct CGSize placementTileSize; // @synthesize placementTileSize=_placementTileSize;
@property struct CGSize normalizedTileSize; // @synthesize normalizedTileSize=_normalizedTileSize;
@property(readonly) NSIndexSet *region; // @synthesize region=_region;
@property(readonly) PTFocusBlurMap *map; // @synthesize map=_map;
- (struct _NSRange)pixelRangeForTileRangeY:(struct _NSRange)arg1;	// IMP=0x0000000000041d1d
- (struct _NSRange)pixelRangeForTileRangeX:(struct _NSRange)arg1;	// IMP=0x0000000000041beb
- (void)_recalculatePlacementTileSize;	// IMP=0x0000000000041aa2
- (void)setPlacement:(struct CGRect)arg1;	// IMP=0x0000000000041a50
- (id)scanlineIter;	// IMP=0x0000000000041a1a
- (id)initWithFocusBlurMap:(id)arg1 region:(id)arg2;	// IMP=0x0000000000041978

@end
