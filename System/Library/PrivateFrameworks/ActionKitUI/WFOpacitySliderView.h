//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UILabel, WFOpacitySlider;

__attribute__((visibility("hidden")))
@interface WFOpacitySliderView : UIControl
{
    WFOpacitySlider *_slider;	// 8 = 0x8
    UILabel *_opacityLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002fa4d
@property(readonly, nonatomic) __weak UILabel *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
@property(readonly, nonatomic) __weak WFOpacitySlider *slider; // @synthesize slider=_slider;
- (void)reset;	// IMP=0x000000000002f98f
@property(readonly, nonatomic) double opacity;
- (void)didChangeOpacityValue:(id)arg1;	// IMP=0x000000000002f873
- (void)layoutSubviews;	// IMP=0x000000000002f3e6
- (id)init;	// IMP=0x000000000002ed48

@end

