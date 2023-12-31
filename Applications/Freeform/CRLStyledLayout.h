//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC8Freeform13CRLStyledItem;

@interface CRLStyledLayout
{
    _Bool mIsUpdatingOpacity;	// 8 = 0x8
    double mDynamicOpacity;	// 16 = 0x10
    _Bool _suppressesShadowsAndReflections;	// 24 = 0x18
}

@property(nonatomic) _Bool suppressesShadowsAndReflections; // @synthesize suppressesShadowsAndReflections=_suppressesShadowsAndReflections;
- (_Bool)isDraggable;	// IMP=0x001000000052b78a
- (_Bool)supportsFlipping;	// IMP=0x001000000052b782
- (_Bool)isInvisible;	// IMP=0x001000000052b77a
@property(readonly, nonatomic) double opacity;
- (void)dynamicOpacityChangeDidEnd;	// IMP=0x001000000052b684
- (void)dynamicOpacityUpdateToValue:(double)arg1;	// IMP=0x001000000052b5b6
- (void)dynamicOpacityChangeDidBegin;	// IMP=0x001000000052b5a5
- (struct CGRect)frameForCullingWithBaseFrame:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;	// IMP=0x001000000052b399
- (struct CGRect)baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform)arg1;	// IMP=0x001000000052b337
- (struct CGRect)alignmentFrameInRoot;	// IMP=0x001000000052b21c
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;	// IMP=0x001000000052b1cb
- (double)scaleToApplyToPathSourceNaturalSizeApplyingLayoutTransform:(struct CGAffineTransform)arg1 withStartingPathSource:(id)arg2;	// IMP=0x001000000052a62c
@property(readonly, nonatomic) _TtC8Freeform13CRLStyledItem *styledInfo;

@end

