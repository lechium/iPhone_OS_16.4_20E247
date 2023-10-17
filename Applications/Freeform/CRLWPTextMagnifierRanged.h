//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CRLCanvasRep, CRLWPTextMagnifierRenderer, CRLWPTextMagnifierTimeWeightedPoint, MISSING_TYPE, NSString, UIWindow;

@interface CRLWPTextMagnifierRanged : UIView
{
    CRLCanvasRep *_target;	// 8 = 0x8
    struct CGPoint _magnificationPoint;	// 16 = 0x10
    struct CGPoint _offset;	// 32 = 0x20
    struct CGPoint _animationPoint;	// 48 = 0x30
    CRLWPTextMagnifierTimeWeightedPoint *_weightedPoint;	// 64 = 0x40
    CRLWPTextMagnifierRenderer *_magnifierRenderer;	// 72 = 0x48
    _Bool _inPlace;	// 80 = 0x50
    UIWindow *_hostWindow;	// 88 = 0x58
    double _pointVelocity;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000006560d
@property(nonatomic) double pointVelocity; // @synthesize pointVelocity=_pointVelocity;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) struct CGPoint animationPoint; // @synthesize animationPoint=_animationPoint;
@property(retain, nonatomic) CRLCanvasRep *target; // @synthesize target=_target;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00100000000652f0
- (_Bool)shouldHideCanvasLayer;	// IMP=0x001000000006507a
@property(readonly, nonatomic) NSString *maskImageName;
- (id)overlayImageName;	// IMP=0x0010000000064b84
- (id)underlayImageName;	// IMP=0x0010000000064909
@property(nonatomic) struct CGPoint magnificationPoint;
@property(readonly, nonatomic) _Bool terminalPointPlacedCarefully;
@property(readonly, nonatomic) struct CGPoint terminalPoint;
- (void)autoscrollWillNotStart;	// IMP=0x00100000000647a8
- (void)setAutoscrollDirections:(int)arg1;	// IMP=0x001000000006478b
- (void)postAutoscrollPoint:(struct CGPoint)arg1;	// IMP=0x001000000006476e
- (void)remove;	// IMP=0x0010000000064731
- (_Bool)isMagnifierStopping;	// IMP=0x00100000000646aa
- (void)stopMagnifying:(_Bool)arg1;	// IMP=0x0010000000064436
- (void)continueMagnifyingWithMagnificationPoint:(struct CGPoint)arg1;	// IMP=0x0010000000064424
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4;	// IMP=0x00100000000640fb
- (MISSING_TYPE *)updateFrame;	// IMP=0x0010000000063e87
- (void)setNeedsDisplay;	// IMP=0x0010000000063e3b
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0010000000063da9
- (double)currentOffset;	// IMP=0x0010000000063b32
- (_Bool)wasPlacedCarefullyAtTime:(double)arg1;	// IMP=0x0010000000063afa
- (double)horizontalMovementAtTime:(double)arg1;	// IMP=0x0010000000063a53
- (double)horizontalMovement;	// IMP=0x0010000000063a2e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000006377a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
