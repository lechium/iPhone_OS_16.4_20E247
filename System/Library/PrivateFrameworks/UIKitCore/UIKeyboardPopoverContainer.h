//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, UIKBVisualEffectView, UIView, _UIKeyboardPopover, _UIKeyboardPopoverAffordance, _UIPopoverView;

__attribute__((visibility("hidden")))
@interface UIKeyboardPopoverContainer : NSObject
{
    _UIKeyboardPopover *_popoverContainerView;	// 8 = 0x8
    UIKBVisualEffectView *_backdrop;	// 16 = 0x10
    _UIPopoverView *_popover;	// 24 = 0x18
    _UIKeyboardPopoverAffordance *_affordance;	// 32 = 0x20
    struct CGRect _targetFull;	// 40 = 0x28
    double _arrowOffset;	// 72 = 0x48
    unsigned long long _direction;	// 80 = 0x50
    NSLayoutConstraint *_keyboardAreaHeight;	// 88 = 0x58
}

+ (id)propertiesForSpecificKeyboardFrame:(struct CGRect)arg1 onScreenSize:(struct CGSize)arg2;	// IMP=0x0040000000c58f35
+ (struct CGRect)frameAtOffset:(struct CGPoint)arg1 keyboardSize:(struct CGSize)arg2 screenSize:(struct CGSize)arg3;	// IMP=0x0040000000c58dc7
+ (id)propertiesForTargetRect:(struct CGRect)arg1 withHeight:(double)arg2 onScreenSize:(struct CGSize)arg3;	// IMP=0x0040000000c58690
+ (struct UIEdgeInsets)contentInsets;	// IMP=0x0040000000c58529
+ (struct CGSize)shadowOffset;	// IMP=0x0040000000c57c53
+ (double)shadowRadius;	// IMP=0x0040000000c57bf0
+ (double)shadowOpacity;	// IMP=0x0040000000c57be2
+ (id)shadowColor;	// IMP=0x0040000000c57bc9
+ (double)dragAreaHeight;	// IMP=0x0040000000c57b98
+ (double)pillDistanceToEdge;	// IMP=0x0040000000c57b76
+ (struct CGSize)pillSize;	// IMP=0x0040000000c57b60
+ (double)pillCornerRadius;	// IMP=0x0040000000c57b52
+ (id)pillColor;	// IMP=0x0040000000c57b39
+ (double)arrowHeight;	// IMP=0x0040000000c57b07
+ (double)cornerRadius;	// IMP=0x0040000000c57aa4
+ (double)borderWidth;	// IMP=0x0040000000c57a41
+ (id)borderColor;	// IMP=0x0040000000c5794b
+ (double)extraWidth;	// IMP=0x0040000000c578ef
+ (double)edgeOffset;	// IMP=0x0040000000c578bd
- (void).cxx_destruct;	// IMP=0x0000000000c5a1ea
- (void)invalidate;	// IMP=0x0000000000c5a187
- (void)_updateKeyboardLayoutGuideForPopover:(struct CGRect)arg1;	// IMP=0x0000000000c5983e
- (void)applyProperties:(id)arg1;	// IMP=0x0000000000c59228
- (void)updateBackdropStyle:(long long)arg1;	// IMP=0x0000000000c58513
- (id)initWithView:(id)arg1 usingBackdropStyle:(long long)arg2;	// IMP=0x0000000000c57cf1
@property(readonly) struct CGRect frame;
@property(readonly, retain) UIView *affordance;

@end

