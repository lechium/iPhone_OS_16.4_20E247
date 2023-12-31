//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardButton, HairlineView, MapsEdgeConstraints, NSLayoutConstraint, NSString, UIColor, UIFont, UILabel, UILayoutGuide, UIMenu, UITapGestureRecognizer, UIView;
@protocol HeaderViewDelegate;

@interface ContainerHeaderView
{
    _Bool _respectSafeArea;	// 8 = 0x8
    HairlineView *_hairLineView;	// 16 = 0x10
    double _hairlineMargin;	// 24 = 0x18
    UILabel *_defaultTitleLabel;	// 32 = 0x20
    CardButton *_buttonView;	// 40 = 0x28
    unsigned long long _cardButtonType;	// 48 = 0x30
    _Bool _cardButtonBlurred;	// 56 = 0x38
    UIColor *_cardButtonTintColor;	// 64 = 0x40
    UITapGestureRecognizer *_tapGesture;	// 72 = 0x48
    UIView *_subtitleView;	// 80 = 0x50
    NSLayoutConstraint *_titleLeadingConstraint;	// 88 = 0x58
    NSLayoutConstraint *_buttonEdgeConstraint;	// 96 = 0x60
    MapsEdgeConstraints *_titleLayoutGuideEdgeConstraints;	// 104 = 0x68
    MapsEdgeConstraints *_accessoryLayoutGuideEdgeConstraints;	// 112 = 0x70
    NSLayoutConstraint *_defaultTitleLabelCenterYConstraint;	// 120 = 0x78
    NSLayoutConstraint *_buttonAlignToTopConstraint;	// 128 = 0x80
    NSLayoutConstraint *_buttonCenterVerticallyConstraint;	// 136 = 0x88
    _Bool _titleViewIgnoresButton;	// 144 = 0x90
    id <HeaderViewDelegate> _delegate;	// 152 = 0x98
    unsigned long long _headerSize;	// 160 = 0xa0
    UIView *_titleView;	// 168 = 0xa8
    UILayoutGuide *_titleViewLayoutGuide;	// 176 = 0xb0
    UIView *_accessoryView;	// 184 = 0xb8
    double _verticalAlignmentOffset;	// 192 = 0xc0
    UIFont *_customTitleFont;	// 200 = 0xc8
    UILayoutGuide *_accessoryViewLayoutGuide;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00200000001ec6d8
@property(retain, nonatomic) UILayoutGuide *accessoryViewLayoutGuide; // @synthesize accessoryViewLayoutGuide=_accessoryViewLayoutGuide;
@property(retain, nonatomic) UIFont *customTitleFont; // @synthesize customTitleFont=_customTitleFont;
@property(nonatomic) double verticalAlignmentOffset; // @synthesize verticalAlignmentOffset=_verticalAlignmentOffset;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UILayoutGuide *titleViewLayoutGuide; // @synthesize titleViewLayoutGuide=_titleViewLayoutGuide;
@property(nonatomic) _Bool titleViewIgnoresButton; // @synthesize titleViewIgnoresButton=_titleViewIgnoresButton;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) unsigned long long headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) __weak id <HeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00100000001ec3a2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000001ec2b7
- (void)_updateTitleFontForHeaderSize;	// IMP=0x00100000001ec263
- (void)_createLayoutGuidesIfNeeded;	// IMP=0x00100000001eba1e
- (id)_defaultTitleViewConstraints;	// IMP=0x00100000001eb542
- (_Bool)positionButtonAboveTitle;	// IMP=0x00100000001eb4c4
- (void)_attachDefaultTitleView;	// IMP=0x00100000001eb459
- (void)updateBaseMargins;	// IMP=0x00100000001eb2c8
- (void)layoutMarginsDidChange;	// IMP=0x00100000001eb287
- (id)_initialConstraints;	// IMP=0x00100000001eb07f
@property(readonly, nonatomic, getter=_headerTapGesture) UITapGestureRecognizer *tapGesture;
- (void)_customInit;	// IMP=0x00100000001ead15
- (void)_setMask:(id)arg1;	// IMP=0x00100000001eabcf
- (void)buttonAction:(id)arg1;	// IMP=0x00100000001eab45
- (void)tapAction:(id)arg1;	// IMP=0x00100000001eaabb
@property(retain, nonatomic) UIMenu *buttonMenu;
@property(readonly, nonatomic) double heightWithoutAccessoryView;
@property(nonatomic) struct UIEdgeInsets accessoryViewInsets;
@property(readonly, nonatomic) UIFont *titleFont;
@property(nonatomic) struct UIEdgeInsets titleViewInsets;
- (void)setTitleView:(id)arg1 subtitleView:(id)arg2 verticalSpaceBetweenViews:(double)arg3 padding:(struct NSDirectionalEdgeInsets)arg4;	// IMP=0x00100000001e986d
- (void)setTitleView:(id)arg1 subtitleView:(id)arg2 verticalSpaceBetweenViews:(double)arg3;	// IMP=0x00100000001e983b
- (void)setTitleView:(id)arg1 subtitleView:(id)arg2;	// IMP=0x00100000001e9826
@property(copy, nonatomic) NSString *title;
@property(nonatomic, getter=isButtonHidden) _Bool buttonHidden;
@property(nonatomic) _Bool shouldCenterButtonVertically;
@property(nonatomic) double hairLineAlpha;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000001e93e0
@property(readonly, nonatomic) UIView *buttonView;
- (id)initWithCardButtonType:(unsigned long long)arg1 cardButtonTintColor:(id)arg2;	// IMP=0x00100000001e9315
- (id)initWithCardButtonType:(unsigned long long)arg1 cardButtonBlurred:(_Bool)arg2;	// IMP=0x00100000001e927f
- (id)initWithCardButtonType:(unsigned long long)arg1;	// IMP=0x00100000001e91fb
- (id)init;	// IMP=0x00100000001e91e6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001e91d1
- (id)initWithRespectSafeArea:(_Bool)arg1;	// IMP=0x00100000001e9144
- (id)initWithHairlineMargin:(double)arg1;	// IMP=0x00100000001e90bc
- (void)updateTheme;	// IMP=0x00100000001e9045

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

