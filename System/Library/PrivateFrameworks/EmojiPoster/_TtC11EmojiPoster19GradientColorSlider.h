//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11EmojiPoster19GradientColorSlider : UIView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *leftColor;	// 24 = 0x18
    MISSING_TYPE *rightColor;	// 32 = 0x20
    MISSING_TYPE *leftColorOffset;	// 40 = 0x28
    MISSING_TYPE *rightColorOffset;	// 48 = 0x30
    MISSING_TYPE *gradientLayer;	// 56 = 0x38
    MISSING_TYPE *leftColorView;	// 64 = 0x40
    MISSING_TYPE *rightColorView;	// 72 = 0x48
    MISSING_TYPE *leftColorTapGesture;	// 80 = 0x50
    MISSING_TYPE *rightColorTapGesture;	// 88 = 0x58
    MISSING_TYPE *leftColorPanGesture;	// 96 = 0x60
    MISSING_TYPE *rightColorPanGesture;	// 104 = 0x68
    MISSING_TYPE *startLeftColorOffset;	// 112 = 0x70
    MISSING_TYPE *startRightColorOffset;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000001e670
- (void)rightColorWasTappedWithGr:(id)arg1;	// IMP=0x000000000001e5d0
- (void)leftColorWasTappedWithGr:(id)arg1;	// IMP=0x000000000001e580
- (void)rightColorDidPanWithGr:(id)arg1;	// IMP=0x000000000001e530
- (void)leftColorDidPanWithGr:(id)arg1;	// IMP=0x000000000001e1e0
- (void)layoutSubviews;	// IMP=0x000000000001deb0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d980
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001d930

@end

