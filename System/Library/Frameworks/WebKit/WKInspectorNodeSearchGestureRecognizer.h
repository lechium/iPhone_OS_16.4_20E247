//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer
{
    struct RetainPtr<UITouch> _touch;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000004037c1
- (void).cxx_destruct;	// IMP=0x000000000040379a
- (void)reset;	// IMP=0x0000000000403773
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000040375c
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000403745
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000040372e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000004036a9
- (void)_processTouches:(id)arg1 state:(long long)arg2;	// IMP=0x000000000040365e
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x0000000000403641

@end

