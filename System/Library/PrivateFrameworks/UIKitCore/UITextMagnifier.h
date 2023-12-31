//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIResponder, UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifier : UIView
{
    UIView *_target;	// 8 = 0x8
    struct CGPoint _magnificationPoint;	// 16 = 0x10
    struct CGPoint _animationPoint;	// 32 = 0x20
    struct CGPoint _terminalPoint;	// 48 = 0x30
    _Bool _terminalPointPlacedCarefully;	// 64 = 0x40
    UIResponder<UITextInput> *_text;	// 72 = 0x48
    UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 80 = 0x50
    UIView *_magnifierRenderer;	// 88 = 0x58
    UIView *_autoscrollRenderer;	// 96 = 0x60
    int _autoscrollDirections;	// 104 = 0x68
    _Bool _isAnimating;	// 108 = 0x6c
    long long _delayedAnimationType;	// 112 = 0x70
}

+ (Class)renderClass;	// IMP=0x00600000011ab34a
- (void).cxx_destruct;	// IMP=0x00000000011ab40d
@property(retain, nonatomic) UIResponder<UITextInput> *text; // @synthesize text=_text;
@property(retain, nonatomic) UIView *target; // @synthesize target=_target;
@property(nonatomic) struct CGPoint animationPoint; // @synthesize animationPoint=_animationPoint;
@property(readonly, nonatomic) double offsetFromMagnificationPoint;
@property(readonly, nonatomic) _Bool isHorizontal;
- (void)updateFrameAndOffset;	// IMP=0x00000000011ab335
- (void)zoomDownAnimation;	// IMP=0x00000000011ab320
- (void)zoomUpAnimation;	// IMP=0x00000000011ab30b
- (void)stopMagnifying:(_Bool)arg1;	// IMP=0x00000000011ab249
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;	// IMP=0x00000000011aafec
- (void)windowWillRotate:(id)arg1;	// IMP=0x00000000011aafd5
- (void)detectLostTouches:(id)arg1;	// IMP=0x00000000011aaf4a
- (void)remove;	// IMP=0x00000000011aaef5
- (void)beginZoomDownAnimation:(CDUnknownBlockType)arg1 withDuration:(double)arg2 postponeHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000011aad29
- (void)beginZoomUpAnimation:(CDUnknownBlockType)arg1 withDuration:(double)arg2;	// IMP=0x00000000011aabc3
- (void)setNeedsDisplay;	// IMP=0x00000000011aab77
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000011aaaa1
- (void)autoscrollWillNotStart;	// IMP=0x00000000011aaa81
- (void)setAutoscrollDirections:(int)arg1;	// IMP=0x00000000011aa91a
- (void)animateToMagnifierRenderer;	// IMP=0x00000000011aa8a6
- (void)setToMagnifierRenderer;	// IMP=0x00000000011aa845
- (void)animateToAutoscrollRenderer;	// IMP=0x00000000011aa78b
- (void)postAutoscrollPoint:(struct CGPoint)arg1;	// IMP=0x00000000011aa76e
@property(readonly, nonatomic) _Bool terminalPointPlacedCarefully; // @synthesize terminalPointPlacedCarefully=_terminalPointPlacedCarefully;
@property(readonly, nonatomic) struct CGPoint terminalPoint; // @synthesize terminalPoint=_terminalPoint;
@property(nonatomic) struct CGPoint magnificationPoint; // @synthesize magnificationPoint=_magnificationPoint;
- (struct CGPoint)adjustMagnificationPoint:(struct CGPoint)arg1;	// IMP=0x00000000011aa67d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011aa546

@end

