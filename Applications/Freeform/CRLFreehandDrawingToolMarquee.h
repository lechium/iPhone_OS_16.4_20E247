//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLBezierHitTester, CRLCanvasShapeRenderable, CRLFreehandDrawingPathCreator, CRLFreehandDrawingWindingCalculator, NSArray, NSMapTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CRLFreehandDrawingToolMarquee
{
    CRLFreehandDrawingPathCreator *_pathCreator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_hitTestingQueue;	// 16 = 0x10
    CRLBezierHitTester *_hitTester;	// 24 = 0x18
    NSMapTable *_shapePathToInfoDictionary;	// 32 = 0x20
    struct CGPoint _initialUnscaledPoint;	// 40 = 0x28
    _Bool _movedFarEnoughNotToBeTap;	// 56 = 0x38
    double _initialTouchTime;	// 64 = 0x40
    double _mostRecentTouchTime;	// 72 = 0x48
    _Atomic _Bool _cancelledBackgroundHitTesting;	// 80 = 0x50
    CRLFreehandDrawingWindingCalculator *_windingCalculator;	// 88 = 0x58
    _Bool _didProvideDecoratorRenderable;	// 96 = 0x60
    CRLCanvasShapeRenderable *_blackMarqueeRenderable;	// 104 = 0x68
    CRLCanvasShapeRenderable *_whiteMarqueeRenderable;	// 112 = 0x70
}

+ (id)dottedMarqueeRenderableAnimationWithOffsetDashes:(_Bool)arg1 clockwise:(_Bool)arg2;	// IMP=0x002000000055a1f6
+ (id)dottedMarqueeRenderableOfColor:(id)arg1 offsetDashes:(_Bool)arg2;	// IMP=0x001000000055a0c4
+ (_Bool)wasLastMarqueeClockwise;	// IMP=0x0010000000559a03
- (void).cxx_destruct;	// IMP=0x002000000055bacd
- (_Bool)wantsDragForTouchType:(long long)arg1 atUnscaledPoint:(struct CGPoint)arg2;	// IMP=0x001000000055b984
- (void)handleMarqueeTapAtPoint:(struct CGPoint)arg1 withInputType:(long long)arg2;	// IMP=0x001000000055b61a
- (void)p_commitSelectionMarqueeToActualSelectionWithInputType:(long long)arg1;	// IMP=0x001000000055b1af
- (void)p_prepareForHitTestingInBackgroundWithDrawingInfos:(id)arg1 viewScale:(double)arg2 visibleUnscaledRect:(struct CGRect)arg3;	// IMP=0x001000000055a85b
- (void)p_updateDottedMarqueeDecoratorRenderable:(id)arg1;	// IMP=0x001000000055a5a2
- (void)doWorkBeforeCanvasLayout;	// IMP=0x001000000055a4c9
@property(readonly, nonatomic) NSArray *decoratorOverlayRenderables;
- (unsigned long long)type;	// IMP=0x001000000055a0b9
- (_Bool)finalizeAndReset;	// IMP=0x0010000000559eb9
- (void)performActionWithInputPoint:(id)arg1 isInitalPoint:(_Bool)arg2 isFinalPoint:(_Bool)arg3;	// IMP=0x0010000000559a0f
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x0010000000559963

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

