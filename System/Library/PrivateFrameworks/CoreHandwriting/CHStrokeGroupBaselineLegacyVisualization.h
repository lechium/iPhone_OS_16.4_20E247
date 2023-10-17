//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHStrokeGroupBaselineLegacyVisualization
{
}

- (struct CGRect)_labelBoundsForAnchorPoint:(struct CGPoint)arg1;	// IMP=0x00000000001a44b0
- (struct CGAffineTransform)_orientationTransformForStrokeBounds:(struct CGRect)arg1 atWritingDirectionIndex:(long long)arg2 inGroup:(id)arg3;	// IMP=0x00000000001a4390
- (void)_getOrientedBounds:(struct CGRect *)arg1 length:(double *)arg2 forStroke:(id)arg3 atWritingDirectionIndex:(long long)arg4 inGroup:(id)arg5;	// IMP=0x00000000001a3d60
- (struct CGPath *)_newBaselinePathForStrokeGroup:(id)arg1 outFirstPoint:(struct CGPoint *)arg2 strokeProvider:(id)arg3;	// IMP=0x00000000001a2d70
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;	// IMP=0x00000000001a1d10
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;	// IMP=0x00000000001a1bf0
- (long long)layeringPriority;	// IMP=0x00000000001a1be0

@end
