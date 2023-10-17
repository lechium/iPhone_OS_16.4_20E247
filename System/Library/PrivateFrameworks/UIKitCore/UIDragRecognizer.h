//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer
{
    double _maximumDeviation;	// 16 = 0x10
    double _minimumDistance;	// 24 = 0x18
    struct CGPoint _startPosition;	// 32 = 0x20
    _Bool _restrictsToAngle;	// 48 = 0x30
    double _angle;	// 56 = 0x38
    UITouch *_touch;	// 64 = 0x40
    UIDelayedAction *_tooSlow;	// 72 = 0x48
    double _startAngle;	// 80 = 0x50
    double _quietPeriod;	// 88 = 0x58
    _Bool _canBeginDrag;	// 96 = 0x60
    UIDelayedAction *ignoreTouch;	// 104 = 0x68
}

+ (_Bool)_shouldDefaultToTouches;	// IMP=0x0060000001181a6b
- (void).cxx_destruct;	// IMP=0x0000000001181be1
@property(retain, nonatomic) UIDelayedAction *ignoreTouch; // @synthesize ignoreTouch;
@property(nonatomic) _Bool canBeginDrag; // @synthesize canBeginDrag=_canBeginDrag;
@property(nonatomic) double quietPeriod; // @synthesize quietPeriod=_quietPeriod;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) _Bool restrictsToAngle; // @synthesize restrictsToAngle=_restrictsToAngle;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) double minimumDistance; // @synthesize minimumDistance=_minimumDistance;
@property(nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) double maximumDeviation; // @synthesize maximumDeviation=_maximumDeviation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001181a38
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001181973
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011815fb
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011813a6
- (void)clearIgnoreTouch;	// IMP=0x000000000118134c
- (void)tooSlow:(id)arg1;	// IMP=0x0000000001181319
- (void)clearTimer;	// IMP=0x00000000011812e1
- (void)_resetGestureRecognizer;	// IMP=0x000000000118128c
- (void)dealloc;	// IMP=0x000000000118122a
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000118118a

@end
