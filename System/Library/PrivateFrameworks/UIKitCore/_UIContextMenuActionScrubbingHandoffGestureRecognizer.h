//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionScrubbingHandoffGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _initialLocation;	// 16 = 0x10
    double _hysteresis;	// 32 = 0x20
}

+ (_Bool)_supportsTouchContinuation;	// IMP=0x006000000118b440
@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
- (_Bool)_satisfiedHysteresis;	// IMP=0x000000000118b624
- (_Bool)_gestureIsStillValid;	// IMP=0x000000000118b5b1
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000118b59a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000118b583
- (void)_beginGestureIfPossible;	// IMP=0x000000000118b519
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000118b4a5
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000118b458
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x000000000118b450
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x000000000118b448
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000118b3c6

@end

