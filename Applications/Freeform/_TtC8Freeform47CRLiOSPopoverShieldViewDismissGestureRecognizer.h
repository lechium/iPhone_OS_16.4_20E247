//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class MISSING_TYPE;

@interface _TtC8Freeform47CRLiOSPopoverShieldViewDismissGestureRecognizer : UIGestureRecognizer
{
    MISSING_TYPE *_startPoint;	// 8 = 0x8
    MISSING_TYPE *_startTime;	// 32 = 0x20
    MISSING_TYPE *wantsToDismissShieldView;	// 41 = 0x29
}

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00400000008c7b10
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000008c79c0
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000008c7970
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000008c7920
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000008c78d0
- (void)reset;	// IMP=0x00100000008c7890

@end
