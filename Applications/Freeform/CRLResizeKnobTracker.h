//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasHUDController, CRLCanvasLayout, CRLCanvasRenderable, CRLCanvasRep, NSArray, NSString;

@interface CRLResizeKnobTracker
{
    struct CGRect mBaseBounds;	// 8 = 0x8
    struct CGRect mLastNewBounds;	// 40 = 0x28
    struct CGSize mMaximumSize;	// 72 = 0x48
    _Bool mSnapEnabled;	// 88 = 0x58
    struct CGSize mMinimumSize;	// 96 = 0x60
    _Bool mCanMoveKnobAcrossOpposite;	// 112 = 0x70
    _Bool mShouldResizeFromCenter;	// 113 = 0x71
    CRLCanvasRep *mRepToMatch;	// 120 = 0x78
    struct CGPoint mSecondaryHUDPoint;	// 128 = 0x80
    struct CGAffineTransform mOriginalTransformInRoot;	// 144 = 0x90
    CRLCanvasLayout *mResizingLayout;	// 192 = 0xc0
    _Bool mSnappedToAspectRatio;	// 200 = 0xc8
    _Bool mBeganAlignmentOperation;	// 201 = 0xc9
    CRLCanvasRenderable *mGuideRenderable;	// 208 = 0xd0
    CRLCanvasHUDController *mSecondHUDController;	// 216 = 0xd8
    _Bool mNeedsHUD;	// 224 = 0xe0
    _Bool mInspectorDrivenTracking;	// 225 = 0xe1
    _Bool mPreserveAspectRatio;	// 226 = 0xe2
    _Bool mSnapToGuides;	// 227 = 0xe3
    _Bool mIsEnqueueingCommandsInRealTime;	// 228 = 0xe4
    _Bool mSuppressSecondaryHUD;	// 229 = 0xe5
}

- (void).cxx_destruct;	// IMP=0x00200000005a7ba9
@property(nonatomic) _Bool suppressSecondaryHUD; // @synthesize suppressSecondaryHUD=mSuppressSecondaryHUD;
- (_Bool)isEnqueueingCommandsInRealTime;	// IMP=0x00100000005a7b79
@property(nonatomic) _Bool snapToGuides; // @synthesize snapToGuides=mSnapToGuides;
@property(nonatomic) _Bool preserveAspectRatio; // @synthesize preserveAspectRatio=mPreserveAspectRatio;
@property(nonatomic) struct CGPoint secondaryHUDPoint; // @synthesize secondaryHUDPoint=mSecondaryHUDPoint;
@property(retain, nonatomic) CRLCanvasRep *repToMatch; // @synthesize repToMatch=mRepToMatch;
@property(nonatomic) _Bool canMoveKnobAcrossOpposite; // @synthesize canMoveKnobAcrossOpposite=mCanMoveKnobAcrossOpposite;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=mMaximumSize;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=mMinimumSize;
@property(nonatomic) _Bool snapEnabled; // @synthesize snapEnabled=mSnapEnabled;
@property(nonatomic) _Bool shouldResizeFromCenter; // @synthesize shouldResizeFromCenter=mShouldResizeFromCenter;
@property(nonatomic) _Bool isInspectorDrivenTracking; // @synthesize isInspectorDrivenTracking=mInspectorDrivenTracking;
- (struct CGRect)i_lastNewBounds;	// IMP=0x00100000005a79e4
- (struct CGRect)i_baseBounds;	// IMP=0x00100000005a79c4
- (_Bool)i_shouldForceDrag;	// IMP=0x00100000005a7991
- (void)resizeRepForInspectors:(id)arg1 value:(double)arg2 changingWidth:(_Bool)arg3;	// IMP=0x00100000005a7434
@property(readonly, nonatomic) _Bool currentlyPreservingAspectRatio;
- (_Bool)p_isResizingHeightFromCenter;	// IMP=0x00100000005a72a6
- (_Bool)p_isResizingWidthFromCenter;	// IMP=0x00100000005a726d
- (_Bool)p_isMatchingSize;	// IMP=0x00100000005a70b0
- (void)p_showHUDAndGuides;	// IMP=0x00100000005a7082
- (void)p_cancelDelayedHUDAndGuides;	// IMP=0x00100000005a7071
- (void)p_hideHUD;	// IMP=0x00100000005a7006
- (void)p_updateHUD;	// IMP=0x00100000005a6b04
- (void)p_hideGuideRenderable;	// IMP=0x00100000005a691e
- (void)p_updateGuideRenderable;	// IMP=0x00100000005a557e
- (void)p_validateLayout;	// IMP=0x00100000005a54f4
- (void)constrainBetweenMaxAndMinSize;	// IMP=0x00100000005a5261
- (void)constrainAndSnapByMovingKnobTo:(struct CGPoint)arg1 snappingToGuides:(_Bool)arg2;	// IMP=0x00100000005a42cb
- (struct CGRect)p_simpleResizedRectByMovingKnobTo:(struct CGPoint)arg1;	// IMP=0x00100000005a4013
- (struct CGAffineTransform)p_repTransformInRootForTransforming;	// IMP=0x00100000005a3e2d
- (void)p_beginDynamicResize;	// IMP=0x00100000005a381b
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00100000005a37c2
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000005a37a9
- (void)endMovingKnob;	// IMP=0x00100000005a3444
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;	// IMP=0x00100000005a2b39
- (struct CGPoint)convertKnobPositionFromUnscaledCanvas:(struct CGPoint)arg1;	// IMP=0x00100000005a2ab9
- (struct CGPoint)convertKnobPositionToUnscaledCanvas:(struct CGPoint)arg1;	// IMP=0x00100000005a2a67
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;	// IMP=0x00100000005a29cc
- (void)beginMovingKnob;	// IMP=0x00100000005a25d7
- (_Bool)traceIfDesiredForEndOperation;	// IMP=0x00100000005a2534
- (_Bool)traceIfDesiredForBeginOperation;	// IMP=0x00100000005a2491
- (void)changeDynamicLayoutsForReps:(id)arg1;	// IMP=0x00100000005a231a
- (void)willBeginDynamicOperationForReps:(id)arg1;	// IMP=0x00100000005a226a
@property(readonly, nonatomic) _Bool isMinimumSizeFixed;
- (_Bool)shouldHideSelectionHighlight;	// IMP=0x00100000005a224d
- (id)p_getHudLabelTextForAccessibility:(_Bool)arg1;	// IMP=0x00100000005a1dcb
@property(readonly, nonatomic) NSString *crlaxHudLabelText;
@property(readonly, nonatomic) NSString *hudLabelText;
- (void)applyNewBoundsToPrimaryRep;	// IMP=0x00100000005a1bbc
- (void)applyNewBoundsToRep:(id)arg1;	// IMP=0x00100000005a173e
@property(readonly, nonatomic) NSArray *decoratorOverlayRenderables;
- (_Bool)canCenterResize;	// IMP=0x00100000005a16bd
- (id)resizingLayoutForRep:(id)arg1;	// IMP=0x00100000005a16a8
- (id)currentGeometryForLayout:(id)arg1;	// IMP=0x00100000005a104d
- (struct CGAffineTransform)p_transformForLayout:(id)arg1 flippedIfNecessary:(_Bool)arg2;	// IMP=0x00100000005a0a8a
- (struct CGAffineTransform)transformForLayout:(id)arg1;	// IMP=0x00100000005a0a68
- (struct CGAffineTransform)flippedIfNecessaryTransformForLayout:(id)arg1;	// IMP=0x00100000005a0a43
- (struct CGAffineTransform)p_resizeTransformHandlingFlipping:(_Bool)arg1;	// IMP=0x00100000005a053f
@property(readonly, nonatomic) struct CGAffineTransform resizeTransformWithoutUnflipping;
@property(readonly, nonatomic) struct CGAffineTransform resizeTransform;
- (id)repsToTransform;	// IMP=0x00100000005a0425
- (_Bool)shouldHideOtherKnobs;	// IMP=0x00100000005a03df
- (_Bool)allowHUDToDisplay;	// IMP=0x00100000005a03b0
@property(readonly, nonatomic) _Bool hasVerticalFlip;
@property(readonly, nonatomic) _Bool hasHorizontalFlip;
- (struct CGSize)currentSizeForLayout:(id)arg1;	// IMP=0x00100000005a0163
- (struct CGAffineTransform)transformInRootForStandardKnobs;	// IMP=0x00100000005a013a
- (struct CGRect)currentBoundsForStandardKnobs;	// IMP=0x00100000005a0079
- (void)dealloc;	// IMP=0x00100000005a001c
- (id)initWithRep:(id)arg1 knob:(id)arg2;	// IMP=0x001000000059fce8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

