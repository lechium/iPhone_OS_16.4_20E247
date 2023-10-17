//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface AVMobileChromelessBackgroundGradientView : UIView
{
    CAGradientLayer *_backgroundGradientLayer;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a4617
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)_updateGradientLayerState;	// IMP=0x00000000000a45be
- (void)_setUpLayersIfNeeded;	// IMP=0x00000000000a434c
- (void)layoutSubviews;	// IMP=0x00000000000a42c6
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000a4279
- (void)didMoveToWindow;	// IMP=0x00000000000a4223

@end
