//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIButton, UILayoutGuide;

@interface NavSignFooterView : UIView
{
    UIView *_leftGrabber;	// 8 = 0x8
    UIView *_rightGrabber;	// 16 = 0x10
    UILayoutGuide *_contentAreaGuide;	// 24 = 0x18
    _Bool _shouldShowEndButton;	// 32 = 0x20
    double _layoutProgress;	// 40 = 0x28
    double _bottomPadding;	// 48 = 0x30
    MISSING_TYPE *_endButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000044eb63
@property(nonatomic) _Bool shouldShowEndButton; // @synthesize shouldShowEndButton=_shouldShowEndButton;
@property(readonly, nonatomic) UIButton *endButton; // @synthesize endButton=_endButton;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double layoutProgress; // @synthesize layoutProgress=_layoutProgress;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000044e961
- (void)_updateEndButtonFont;	// IMP=0x001000000044e85d
- (void)_updateGrabber;	// IMP=0x001000000044e74b
- (double)currentHeight;	// IMP=0x001000000044e67c
- (double)maximumHeight;	// IMP=0x001000000044e661
- (double)minimumHeight;	// IMP=0x001000000044e653
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000044d93c

@end

