//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CRLCanvasRep, CRLWPTextMagnifierRenderer, CRLWPTextMagnifierTimeWeightedPoint, NSString, UIWindow;

@interface CRLWPTextMagnifierCaret : UIView
{
    CRLCanvasRep *_target;	// 8 = 0x8
    struct CGPoint _magnificationPoint;	// 16 = 0x10
    struct CGPoint _offset;	// 32 = 0x20
    double _pointVelocity;	// 48 = 0x30
    CRLWPTextMagnifierTimeWeightedPoint *_weightedPoint;	// 56 = 0x38
    CRLWPTextMagnifierRenderer *_magnifierRenderer;	// 64 = 0x40
    UIWindow *_hostWindow;	// 72 = 0x48
    double _yOffset;	// 80 = 0x50
    NSString *_underlayImageName;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000002df45f
@property(readonly, nonatomic) NSString *underlayImageName; // @synthesize underlayImageName=_underlayImageName;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) struct CGPoint animationPoint; // @synthesize animationPoint=_magnificationPoint;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) double pointVelocity; // @synthesize pointVelocity=_pointVelocity;
@property(retain, nonatomic) CRLCanvasRep *target; // @synthesize target=_target;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00100000002df03d
- (_Bool)shouldHideCanvasLayer;	// IMP=0x00100000002def54
@property(readonly, nonatomic) NSString *maskImageName;
- (id)overlayImageName;	// IMP=0x00100000002def3a
- (_Bool)p_isMagnifierStopping;	// IMP=0x00100000002deed7
- (void)stopMagnifying:(_Bool)arg1;	// IMP=0x00100000002dee5b
- (void)continueMagnifyingWithMagnificationPoint:(struct CGPoint)arg1;	// IMP=0x00100000002dee49
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4;	// IMP=0x00100000002deb23
- (void)updateFrameAndOffset;	// IMP=0x00100000002de8eb
- (void)remove;	// IMP=0x00100000002de8ae
- (void)zoomDownAnimation;	// IMP=0x00100000002de3e0
- (void)zoomUpAnimation;	// IMP=0x00100000002de263
- (void)autoscrollWillNotStart;	// IMP=0x00100000002de24f
- (void)setAutoscrollDirections:(int)arg1;	// IMP=0x00100000002de232
- (void)postAutoscrollPoint:(struct CGPoint)arg1;	// IMP=0x00100000002de215
@property(readonly, nonatomic) _Bool terminalPointPlacedCarefully;
@property(readonly, nonatomic) struct CGPoint terminalPoint;
- (void)setMagnificationPoint:(struct CGPoint)arg1;	// IMP=0x00100000002de0d7
- (struct CGPoint)magnificationPoint;	// IMP=0x00100000002de0bf
- (void)setNeedsDisplay;	// IMP=0x00100000002de073
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00100000002ddfe1
- (id)init;	// IMP=0x00100000002dde38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

