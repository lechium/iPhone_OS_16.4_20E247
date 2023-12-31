//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, UIButton, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUFeedTextCell
{
    _Bool _shouldUseOpaqueBackground;	// 8 = 0x8
    _Bool _shouldUseAccessibilityLayout;	// 9 = 0x9
    NSAttributedString *_attributedText;	// 16 = 0x10
    long long _numberOfTextLines;	// 24 = 0x18
    double _textDetailTextSpacing;	// 32 = 0x20
    NSAttributedString *_attributedDetailText;	// 40 = 0x28
    long long _numberOfDetailTextLines;	// 48 = 0x30
    long long _textAlignment;	// 56 = 0x38
    UIImage *_iconImage;	// 64 = 0x40
    long long _iconLocation;	// 72 = 0x48
    long long _tappableArea;	// 80 = 0x50
    long long _buttonType;	// 88 = 0x58
    long long _buttonSize;	// 96 = 0x60
    long long _buttonHorizontalAlignment;	// 104 = 0x68
    double _buttonPadding;	// 112 = 0x70
    UILabel *__label;	// 120 = 0x78
    UILabel *__detailLabel;	// 128 = 0x80
    UIImageView *__iconImageView;	// 136 = 0x88
    UIButton *__button;	// 144 = 0x90
    struct UIOffset _iconOffset;	// 152 = 0x98
    struct UIEdgeInsets _contentInsets;	// 168 = 0xa8
    struct UIEdgeInsets _iconPadding;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000001825d8
@property(nonatomic) _Bool shouldUseAccessibilityLayout; // @synthesize shouldUseAccessibilityLayout=_shouldUseAccessibilityLayout;
@property(retain, nonatomic, setter=_setButton:) UIButton *_button; // @synthesize _button=__button;
@property(retain, nonatomic, setter=_setIconImageView:) UIImageView *_iconImageView; // @synthesize _iconImageView=__iconImageView;
@property(retain, nonatomic, setter=_setDetailLabel:) UILabel *_detailLabel; // @synthesize _detailLabel=__detailLabel;
@property(retain, nonatomic, setter=_setLabel:) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic) _Bool shouldUseOpaqueBackground; // @synthesize shouldUseOpaqueBackground=_shouldUseOpaqueBackground;
@property(nonatomic) double buttonPadding; // @synthesize buttonPadding=_buttonPadding;
@property(nonatomic) long long buttonHorizontalAlignment; // @synthesize buttonHorizontalAlignment=_buttonHorizontalAlignment;
@property(nonatomic) long long buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) long long tappableArea; // @synthesize tappableArea=_tappableArea;
@property(nonatomic) struct UIOffset iconOffset; // @synthesize iconOffset=_iconOffset;
@property(nonatomic) struct UIEdgeInsets iconPadding; // @synthesize iconPadding=_iconPadding;
@property(nonatomic) long long iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfDetailTextLines; // @synthesize numberOfDetailTextLines=_numberOfDetailTextLines;
@property(retain, nonatomic) NSAttributedString *attributedDetailText; // @synthesize attributedDetailText=_attributedDetailText;
@property(nonatomic) double textDetailTextSpacing; // @synthesize textDetailTextSpacing=_textDetailTextSpacing;
@property(nonatomic) long long numberOfTextLines; // @synthesize numberOfTextLines=_numberOfTextLines;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (struct CGSize)_iconSize;	// IMP=0x00000000001822a9
- (id)_labelBackgroundColor;	// IMP=0x0000000000182222
- (void)_updateLabelsBackgroundColor;	// IMP=0x0000000000182130
- (void)_configureButton:(id)arg1 withType:(long long)arg2 size:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000181f7c
- (struct CGSize)_maximumPossibleTextSizeForButtonWithType:(long long)arg1 size:(long long)arg2;	// IMP=0x0000000000181d6f
- (struct CGSize)_textSizeForButtonWithType:(long long)arg1 size:(long long)arg2;	// IMP=0x0000000000181c36
- (void)_invalidateCachedTextSizes;	// IMP=0x0000000000181bf5
- (void)_handleButton:(id)arg1;	// IMP=0x0000000000181b98
- (id)_delegate;	// IMP=0x0000000000181b86
- (void)_updateButtonAnimated:(_Bool)arg1;	// IMP=0x0000000000181777
- (void)_updateIconImageView;	// IMP=0x000000000018164c
- (void)_updateDetailLabel;	// IMP=0x00000000001814e7
- (_Bool)shouldRecognizerTap:(id)arg1;	// IMP=0x0000000000181180
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000180d5b
- (void)layoutSubviews;	// IMP=0x0000000000180384
- (void)setButtonType:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001802a0
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000017fe6e
- (void)_updateShouldUseAccessibilityLayout;	// IMP=0x000000000017fdf0
- (void)dealloc;	// IMP=0x000000000017fd6e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017fbb6

@end

