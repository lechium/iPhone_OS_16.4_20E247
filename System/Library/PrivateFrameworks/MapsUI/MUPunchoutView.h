//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MUPunchoutViewModel, NSString, UIActivityIndicatorView, UIButton, UILabel, UILayoutGuide;
@protocol MULabelViewProtocol;

__attribute__((visibility("hidden")))
@interface MUPunchoutView : UIView
{
    UIView<MULabelViewProtocol> *_moreOnLabel;	// 8 = 0x8
    UILabel *_vendorNameLabel;	// 16 = 0x10
    UILayoutGuide *_layoutGuide;	// 24 = 0x18
    UIActivityIndicatorView *_spinner;	// 32 = 0x20
    UIButton *_menuButton;	// 40 = 0x28
    MUPunchoutViewModel *_viewModel;	// 48 = 0x30
}

+ (double)_intrinsicWidth;	// IMP=0x0010000000065b3b
+ (double)preferredWidth;	// IMP=0x0010000000065b03
- (void).cxx_destruct;	// IMP=0x0000000000065f12
@property(retain, nonatomic) MUPunchoutViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_updateAppearance;	// IMP=0x0000000000065de6
- (void)_updateLabelsWithAlpha:(double)arg1;	// IMP=0x0000000000065d3c
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;	// IMP=0x0000000000065ce4
- (void)beginAnimatingActivityIndicator;	// IMP=0x0000000000065b49
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000065b15
- (id)_attributedStringFromSymbol;	// IMP=0x00000000000658c1
- (void)_setupConstraints;	// IMP=0x000000000006514f
- (void)_setupSubviews;	// IMP=0x0000000000064de9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000064d63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
