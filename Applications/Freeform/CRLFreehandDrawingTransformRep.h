//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLBezierPath, CRLCanvasShapeRenderable, NSArray, NSString;

@interface CRLFreehandDrawingTransformRep
{
    CRLCanvasShapeRenderable *_blackPathRenderable;	// 8 = 0x8
    CRLCanvasShapeRenderable *_whitePathRenderable;	// 16 = 0x10
    CRLBezierPath *_currentLayerRelativePath;	// 24 = 0x18
    double _viewScaleForCurrentLayerRelativePath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003e12a
- (_Bool)willHandleFreeTransformingLayoutForRep:(id)arg1;	// IMP=0x001000000003e0a7
- (void)dynamicFreeTransformDidEndWithTracker:(id)arg1;	// IMP=0x001000000003dece
- (void)dynamicallyFreeTransformingWithTracker:(id)arg1;	// IMP=0x001000000003dd1f
- (void)dynamicFreeTransformDidBegin;	// IMP=0x001000000003db96
- (id)additionalRepsToResize;	// IMP=0x001000000003d939
- (id)p_siblingReps;	// IMP=0x001000000003d7aa
- (_Bool)willHandleResizingLayoutForRep:(id)arg1;	// IMP=0x001000000003d727
- (void)dynamicResizeDidEndWithTracker:(id)arg1;	// IMP=0x001000000003d54e
- (void)dynamicallyResizingWithTracker:(id)arg1;	// IMP=0x001000000003d39f
- (id)dynamicResizeDidBegin;	// IMP=0x001000000003d1f4
- (_Bool)p_siblingLayoutInLayoutState:(int)arg1;	// IMP=0x001000000003d019
- (_Bool)p_isInDrawingTransformMode;	// IMP=0x001000000003cfe2
- (_Bool)p_isInDrawingMode;	// IMP=0x001000000003cf74
- (_Bool)p_shouldDisplayAnimatedSelectionOutline;	// IMP=0x001000000003cf06
- (id)p_calculateLayerRelativePathForAffordance;	// IMP=0x001000000003c190
- (id)p_transformLayout;	// IMP=0x001000000003c131
- (void)didEndDynamicOperation;	// IMP=0x001000000003c11f
@property(readonly, nonatomic) NSArray *decoratorOverlayRenderables;
- (_Bool)wantsRenderableToBeDescendedFromParentRepRenderable;	// IMP=0x001000000003c10a
- (void)willBeRemoved;	// IMP=0x001000000003c09c
- (void)documentModeDidChange;	// IMP=0x001000000003c05b
- (_Bool)shouldShowSelectionHighlight;	// IMP=0x001000000003bff2
- (_Bool)shouldCreateSelectionKnobs;	// IMP=0x001000000003bf7a
- (_Bool)shouldShowKnobs;	// IMP=0x001000000003bef0
- (id)repForDragging;	// IMP=0x001000000003bee7
- (id)overlayRenderables;	// IMP=0x001000000003ba12
- (_Bool)containsPoint:(struct CGPoint)arg1 withPrecision:(_Bool)arg2;	// IMP=0x001000000003ba0a
- (void)invalidateSubselectionAffordance;	// IMP=0x001000000003b957
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;	// IMP=0x001000000003b8cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

