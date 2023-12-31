//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CarMultiButtonStackView, NSArray;

@interface CarMultiButtonView : UIView
{
    NSArray *_buttons;	// 8 = 0x8
    CarMultiButtonStackView *_stackView;	// 16 = 0x10
    UIView *_shadowView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000ad3f18
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) CarMultiButtonStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000ad3ea0
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000ad3d3d
- (void)_recalculateShadowAttributes;	// IMP=0x0010000000ad3ab7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000ad365f
- (double)_buttonSpacing;	// IMP=0x0010000000ad3530
- (void)didMoveToWindow;	// IMP=0x0010000000ad348b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000ad329c

@end

