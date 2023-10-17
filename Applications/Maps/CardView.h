//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CardCustomBorderView, MKViewWithHairline, NSLayoutConstraint, NSString, UIVisualEffectView, _UIGrabber;
@protocol CardViewDelegate;

@interface CardView : UIView
{
    CardCustomBorderView *_customBorderView;	// 8 = 0x8
    unsigned long long _style;	// 16 = 0x10
    _UIGrabber *_grabber;	// 24 = 0x18
    _UIGrabber *_grabberFooter;	// 32 = 0x20
    UIView *_shadowView;	// 40 = 0x28
    UIView *_contentView;	// 48 = 0x30
    UIVisualEffectView *_blurView;	// 56 = 0x38
    _Bool _canAddSubviews;	// 64 = 0x40
    _Bool _grabberHasPreviousState;	// 65 = 0x41
    _Bool _grabberPreviousState;	// 66 = 0x42
    _Bool _buttonCard;	// 67 = 0x43
    MKViewWithHairline *_grabberFooterView;	// 72 = 0x48
    NSLayoutConstraint *_topConstraint;	// 80 = 0x50
    NSLayoutConstraint *_bottomConstraint;	// 88 = 0x58
    struct CGRect _savedBounds;	// 96 = 0x60
    _Bool _hideGrabber;	// 128 = 0x80
    _Bool _showFooterGrabber;	// 129 = 0x81
    id <CardViewDelegate> _delegate;	// 136 = 0x88
    NSString *_blurGroupName;	// 144 = 0x90
    double _height;	// 152 = 0x98
    double _overriddenIntrinsicHeight;	// 160 = 0xa0
    double _grabberHeight;	// 168 = 0xa8
    double _grabberTopMargin;	// 176 = 0xb0
    NSLayoutConstraint *_heightConstraint;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00200000009db493
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) double grabberTopMargin; // @synthesize grabberTopMargin=_grabberTopMargin;
@property(readonly, nonatomic) double grabberHeight; // @synthesize grabberHeight=_grabberHeight;
@property(nonatomic) double overriddenIntrinsicHeight; // @synthesize overriddenIntrinsicHeight=_overriddenIntrinsicHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool showFooterGrabber; // @synthesize showFooterGrabber=_showFooterGrabber;
@property(nonatomic) _Bool hideGrabber; // @synthesize hideGrabber=_hideGrabber;
@property(copy, nonatomic) NSString *blurGroupName; // @synthesize blurGroupName=_blurGroupName;
@property(nonatomic) __weak id <CardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000009db2b7
- (void)_showGrabberFooter:(_Bool)arg1;	// IMP=0x00100000009dad35
- (void)showShadow:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009dabe3
- (void)setLayoutStyle:(unsigned long long)arg1;	// IMP=0x00100000009da8c7
- (void)_setCornerRadiusWithMaskedCorners:(unsigned long long)arg1 cornerRadius:(double)arg2;	// IMP=0x00100000009da729
- (void)updateTheme;	// IMP=0x00100000009da5dc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000009da4ba
- (void)setCaptureView:(id)arg1;	// IMP=0x00100000009da410
- (void)layoutSubviews;	// IMP=0x00100000009da1ad
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00100000009da1a7
- (void)didAddSubview:(id)arg1;	// IMP=0x00100000009da143
- (void)_commonInitWithBlurType:(long long)arg1;	// IMP=0x00100000009d97a9
- (id)initWithThickBlur;	// IMP=0x00100000009d9647
- (id)initAllowingBlurredForButton:(_Bool)arg1;	// IMP=0x00100000009d957f
- (id)initAllowingBlurred:(_Bool)arg1;	// IMP=0x00100000009d93bb
@property(readonly, nonatomic) UIView *contentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
