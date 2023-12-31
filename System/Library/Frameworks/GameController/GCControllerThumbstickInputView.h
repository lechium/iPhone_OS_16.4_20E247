//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GCControllerDirectionPad, UITouch, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface GCControllerThumbstickInputView : UIView
{
    GCControllerDirectionPad *_dpadInput;	// 8 = 0x8
    UIVisualEffectView *_background;	// 16 = 0x10
    UIVisualEffectView *_touchTarget;	// 24 = 0x18
    UITouch *_currentTouch;	// 32 = 0x20
    struct CGPoint _touchStartPos;	// 40 = 0x28
    struct CGPoint _touchPrevPos;	// 56 = 0x38
    float _prevThumbstickMagnitude;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000005f00b
- (void)initButtons;	// IMP=0x000000000005ebda
- (void)setThumbstickPos:(struct CGPoint)arg1 center:(struct CGPoint)arg2;	// IMP=0x000000000005e901
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005e8ef
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005e779
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005e6e1
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005e5a1
- (void)processTouch:(id)arg1;	// IMP=0x000000000005e22d
- (void)setActsAsTouchpad:(_Bool)arg1;	// IMP=0x000000000005e210
- (_Bool)actsAsTouchpad;	// IMP=0x000000000005e1f3
@property(retain) GCControllerDirectionPad *dpadInput;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005e12b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005e02a
- (id)init;	// IMP=0x000000000005dfa1

@end

