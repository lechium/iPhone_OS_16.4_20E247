//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIButton;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI24GKMultiplayerStepperView : UIView
{
    MISSING_TYPE *downButton;	// 8 = 0x8
    MISSING_TYPE *upButton;	// 16 = 0x10
    MISSING_TYPE *label;	// 24 = 0x18
    MISSING_TYPE *backgroundView;	// 32 = 0x20
    MISSING_TYPE *model;	// 40 = 0x28
    MISSING_TYPE *isStepperHidden;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001dceb0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001dce50
- (void)accessibilityUpdateStepperWithValue:(long long)arg1;	// IMP=0x00000000001dce40
@property(nonatomic, readonly) UIButton *accessibilityUpButton;
@property(nonatomic, readonly) UIButton *accessibilityDownButton;
- (void)didTapUp:(id)arg1;	// IMP=0x00000000001dcd70
- (void)didTapDown:(id)arg1;	// IMP=0x00000000001dcc90
- (void)layoutSubviews;	// IMP=0x00000000001dcba0
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000000001dc8e0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dc630

@end

