//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackOverlayView : UIView
{
    double _value;	// 8 = 0x8
    double _minimumValue;	// 16 = 0x10
    double _maximumValue;	// 24 = 0x18
    double _startValue;	// 32 = 0x20
    double _endValue;	// 40 = 0x28
    UIImageView *_leftFillView;	// 48 = 0x30
    UIImageView *_rightFillView;	// 56 = 0x38
    unsigned int _editingHandle;	// 64 = 0x40
    unsigned int _editing:1;	// 68 = 0x44
    unsigned int _zoomed:1;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x00000000005b4760
- (void)layoutSubviews;	// IMP=0x00000000005b470a
- (void)setEditingHandle:(int)arg1;	// IMP=0x00000000005b46fa
- (void)setIsZoomed:(_Bool)arg1;	// IMP=0x00000000005b46e0
- (void)setMaximumValue:(double)arg1;	// IMP=0x00000000005b46c1
- (void)setMinimumValue:(double)arg1;	// IMP=0x00000000005b46a2
- (void)setEndValue:(double)arg1;	// IMP=0x00000000005b4675
- (void)setStartValue:(double)arg1;	// IMP=0x00000000005b4648
- (void)setValue:(double)arg1;	// IMP=0x00000000005b461b
- (void)setEditing:(_Bool)arg1;	// IMP=0x00000000005b457e
- (void)_clampValueAndLayout;	// IMP=0x00000000005b452e
- (void)animateFillFramesAway;	// IMP=0x00000000005b4426
- (void)_updateRightFill;	// IMP=0x00000000005b432c
- (void)_updateLeftFill;	// IMP=0x00000000005b426c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005b410e

@end
