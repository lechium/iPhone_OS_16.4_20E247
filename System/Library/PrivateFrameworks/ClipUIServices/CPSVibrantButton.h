//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CPSVibrantButton : UIView
{
    UIVisualEffectView *_effectView;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000011fb4
- (void)setAdjustFontSizeToFitWidth:(_Bool)arg1;	// IMP=0x0000000000011f5d
@property(readonly, nonatomic) UIButton *uiButton;
- (void)updateCornerRadius;	// IMP=0x0000000000011e8e
- (id)initWithButtonType:(long long)arg1;	// IMP=0x00000000000118b5

@end
