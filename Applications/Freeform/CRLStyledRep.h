//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLShadow, CRLStyledLayout, NSString, _TtC8Freeform13CRLStyledItem;

@interface CRLStyledRep
{
    _Bool mIsUpdatingShadow;	// 8 = 0x8
    CRLShadow *mDynamicShadow;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001a2f40
- (id)cursorAtPoint:(struct CGPoint)arg1 forKnob:(id)arg2 withCursorPlatformObject:(id)arg3;	// IMP=0x00100000001a2d9d
- (void)dynamicShadowChangeDidEnd;	// IMP=0x00100000001a2d71
- (void)dynamicShadowUpdateToValue:(id)arg1;	// IMP=0x00100000001a2b48
- (void)dynamicShadowChangeDidBegin;	// IMP=0x00100000001a2ab5
- (id)pathSourceForSelectionHighlightBehavior;	// IMP=0x00100000001a2aad
- (_Bool)shouldShowSelectionHighlight;	// IMP=0x00100000001a2a67
- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;	// IMP=0x00100000001a273c
- (void)processChangedProperty:(unsigned long long)arg1;	// IMP=0x00100000001a2680
- (void)setNeedsDisplay;	// IMP=0x00100000001a263f
- (struct CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(struct CGRect)arg2;	// IMP=0x00100000001a2627
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext *)arg1;	// IMP=0x00100000001a25f8
- (void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext *)arg1;	// IMP=0x00100000001a25c6
- (void)drawInContextWithoutEffectsOrChildren:(struct CGContext *)arg1;	// IMP=0x00100000001a2597
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1;	// IMP=0x00100000001a2568
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;	// IMP=0x00100000001a21cd
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x00100000001a2124
- (void)drawShadowInContext:(struct CGContext *)arg1 withChildren:(_Bool)arg2 withDrawableOpacity:(_Bool)arg3;	// IMP=0x00100000001a1981
- (_Bool)isInvisible;	// IMP=0x00100000001a1979
- (_Bool)shouldShowShadow;	// IMP=0x00100000001a1902
- (id)shadow;	// IMP=0x00100000001a1891
- (struct CGRect)p_rectWithEffectsAppliedToRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2 includeShadow:(_Bool)arg3;	// IMP=0x00100000001a177b
- (struct CGRect)rectWithEffectsAppliedToRect:(struct CGRect)arg1;	// IMP=0x00100000001a168e
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001a1675
- (double)opacity;	// IMP=0x00100000001a1625
- (struct CGRect)p_clipRectInRootForTransform:(struct CGAffineTransform)arg1 includeShadow:(_Bool)arg2;	// IMP=0x00100000001a1553
- (struct CGRect)clipRect;	// IMP=0x00100000001a14fb
- (struct CGRect)clipRectWithoutEffects;	// IMP=0x00100000001a14dc
@property(readonly, nonatomic) _TtC8Freeform13CRLStyledItem *styledInfo;
@property(readonly, nonatomic) CRLStyledLayout *styledLayout;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

