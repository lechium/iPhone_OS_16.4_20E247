//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UIContextMenuSelectionDelayGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction *_delayedAction;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000145cd0
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000145cb9
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000145ca2
- (void)_timerSatisfied;	// IMP=0x0000000000145c8b
- (void)reset;	// IMP=0x0000000000145c2c
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000145bd7

@end
