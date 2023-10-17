//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSString;
@protocol _UIPassthroughGestureDelegate;

__attribute__((visibility("hidden")))
@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPoint;	// 16 = 0x10
    double _startTime;	// 32 = 0x20
    struct CGVector _accumulatedScrollEventDelta;	// 40 = 0x28
    struct {
        unsigned int commandHeldThroughAllTouchPhases:1;
    } _flags;	// 56 = 0x38
    _Bool _endForPrimaryButtonDown;	// 60 = 0x3c
    _Bool _endForSecondaryButtonDown;	// 61 = 0x3d
    unsigned long long _endReason;	// 64 = 0x40
}

+ (_Bool)canHandleEventForPassthrough:(id)arg1;	// IMP=0x00100000000ca224
+ (_Bool)_supportsTouchContinuation;	// IMP=0x00100000000c9bd7
@property(nonatomic) _Bool endForSecondaryButtonDown; // @synthesize endForSecondaryButtonDown=_endForSecondaryButtonDown;
@property(nonatomic) _Bool endForPrimaryButtonDown; // @synthesize endForPrimaryButtonDown=_endForPrimaryButtonDown;
@property(readonly, nonatomic) unsigned long long endReason; // @synthesize endReason=_endReason;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000000ca648
- (void)_transformChangedWithEvent:(id)arg1;	// IMP=0x00000000000ca56f
- (void)_scrollingChangedWithEvent:(id)arg1;	// IMP=0x00000000000ca3b3
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x00000000000ca280
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ca166
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ca14f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ca026
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000c9eac
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000c9d9f
- (void)_endWithReason:(unsigned long long)arg1;	// IMP=0x00000000000c9d7d
- (void)_beginAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000000c9d27
- (void)reset;	// IMP=0x00000000000c9ce4
- (id)_window;	// IMP=0x00000000000c9cd2
- (void)setView:(id)arg1;	// IMP=0x00000000000c9bdf
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000c9b6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <_UIPassthroughGestureDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
