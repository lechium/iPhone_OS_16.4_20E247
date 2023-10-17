//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSString, UIColor, UITapGestureRecognizer, VUILabel, VUITextLayout, VUITextView;

__attribute__((visibility("hidden")))
@interface FocusableTextView
{
    UIColor *_backgroundColor;	// 8 = 0x8
    VUITextView *_auxilliaryTextView;	// 16 = 0x10
    _Bool _textTruncating;	// 24 = 0x18
    _Bool _moreLabelOnNewLine;	// 25 = 0x19
    _Bool _needsTextSizeComputation;	// 26 = 0x1a
    VUILabel *_computationLabel;	// 32 = 0x20
    UIColor *_descriptionTextColor;	// 40 = 0x28
    long long _descriptionTextAlignment;	// 48 = 0x30
    UIColor *_moreLabelTextColor;	// 56 = 0x38
    CDUnknownBlockType _selectionHandler;	// 64 = 0x40
    VUITextView *_descriptionTextView;	// 72 = 0x48
    UITapGestureRecognizer *_moreLabelTapGestureRecognizer;	// 80 = 0x50
    VUITextLayout *_textLayout;	// 88 = 0x58
    VUILabel *_moreLabel;	// 96 = 0x60
    struct UIEdgeInsets _padding;	// 104 = 0x68
}

+ (double)bottomInset;	// IMP=0x00100000002b59f9
+ (double)topInset;	// IMP=0x00100000002b59eb
+ (double)cornerRadius;	// IMP=0x00100000002b59dd
+ (id)textViewWithAttributedString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;	// IMP=0x00100000002b4a33
- (void).cxx_destruct;	// IMP=0x00000000002b6dea
@property(retain, nonatomic) VUILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(nonatomic) _Bool needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property(readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer; // @synthesize moreLabelTapGestureRecognizer=_moreLabelTapGestureRecognizer;
@property(retain, nonatomic) VUITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIColor *moreLabelTextColor; // @synthesize moreLabelTextColor=_moreLabelTextColor;
@property(nonatomic) _Bool moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property(readonly, nonatomic, getter=isTextTruncating) _Bool textTruncating; // @synthesize textTruncating=_textTruncating;
@property(nonatomic) long long descriptionTextAlignment; // @synthesize descriptionTextAlignment=_descriptionTextAlignment;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) VUILabel *computationLabel; // @synthesize computationLabel=_computationLabel;
- (void)_selectButtonAction:(id)arg1;	// IMP=0x00000000002b6c60
- (void)_updateTextColor;	// IMP=0x00000000002b6bc7
- (void)tintColorDidChange;	// IMP=0x00000000002b6b27
- (struct CGRect)boundingRectForAttributedString:(id)arg1 withWidth:(double)arg2 lines:(unsigned long long)arg3;	// IMP=0x00000000002b686e
- (struct CGRect)_moreLabelFrame;	// IMP=0x00000000002b6404
- (struct CGRect)_moreLabelExclusionPathFrame;	// IMP=0x00000000002b630b
- (void)_recomputeTextSizeIfNeeded;	// IMP=0x00000000002b61b1
- (void)_setNeedsTextSizeComputation;	// IMP=0x00000000002b61a0
- (void)vui_traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002b601d
- (double)bottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000002b6000
- (double)topMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000002b5fe3
- (double)vui_baselineOffsetFromBottom;	// IMP=0x00000000002b5fc6
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x00000000002b5f96
@property(nonatomic) unsigned long long maximumNumberOfLines;
@property(retain, nonatomic) NSAttributedString *descriptionText;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000002b598e
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000002b5937
- (struct CGSize)computeSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002b57ba
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000002b5778
- (void)layoutSubviews_iOSAndMacOS;	// IMP=0x00000000002b53f5
- (void)setupViews_iOSAndMacOS;	// IMP=0x00000000002b50ec
- (id)makeTextView;	// IMP=0x00000000002b4f5d
- (void)_updateTextColorsIfNeeded;	// IMP=0x00000000002b4ec3
- (id)initWithTextLayout:(id)arg1;	// IMP=0x00000000002b4bfe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
