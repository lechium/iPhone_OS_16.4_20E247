//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface AVTouchGestureRecognizer : UIGestureRecognizer
{
    NSTimer *_gestureWarmUpDelayTimer;	// 8 = 0x8
    NSMutableArray *_candidateGestureIncrementsMultiTouchInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dbb91
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000dbb50
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000dbb0b
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000dbac7
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000db981
- (void)reset;	// IMP=0x00000000000db92a
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000000db922

@end

