//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface ASCGradientBackgroundView : UIView
{
    UIView *_gradientOverlayView;	// 8 = 0x8
    CAGradientLayer *_gradientLayer;	// 16 = 0x10
}

+ (double)gradientPercentageOfBounds;	// IMP=0x006000000001e95b
- (void).cxx_destruct;	// IMP=0x000000000001ef58
@property(readonly, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(readonly, nonatomic) UIView *gradientOverlayView; // @synthesize gradientOverlayView=_gradientOverlayView;
- (void)layoutSubviews;	// IMP=0x000000000001ed68
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ed53
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ed28
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001e969

@end
