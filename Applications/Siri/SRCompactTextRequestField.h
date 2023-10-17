//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@class MTMaterialView, NSHashTable, UIColor;

@interface SRCompactTextRequestField : UITextField
{
    MTMaterialView *_backgroundView;	// 8 = 0x8
    NSHashTable *_styledViews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000087a3a
@property(readonly, copy, nonatomic, getter=_styledViews) NSHashTable *styledViews; // @synthesize styledViews=_styledViews;
@property(readonly, nonatomic, getter=_backgroundView) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000008789a
- (_Bool)resignFirstResponder;	// IMP=0x0010000000087846
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0010000000087805
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x001000000008778e
- (void)layoutSubviews;	// IMP=0x001000000008774d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000876b3
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000087665
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;	// IMP=0x00100000000875d6
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0010000000087432
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0010000000087291
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x00100000000871d4
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x0010000000087117
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x00100000000870a4
- (struct CGRect)_adjustTextOrEditingRect:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;	// IMP=0x0010000000086f6a
- (struct CGRect)_textRectForBounds:(struct CGRect)arg1 alignment:(long long)arg2 layingOutContentRightToLeft:(_Bool)arg3;	// IMP=0x0010000000086e79
- (struct CGRect)_frameForPlaceholderRectForBounds:(struct CGRect)arg1 alignment:(long long)arg2 layingOutContentRightToLeft:(_Bool)arg3;	// IMP=0x0010000000086cc8
- (struct CGRect)_placeholderRectForBounds:(struct CGRect)arg1 alignment:(long long)arg2 layingOutContentRightToLeft:(_Bool)arg3;	// IMP=0x0010000000086b92
@property(readonly, nonatomic, getter=_laysOutContentRightToLeft) _Bool laysOutContentRightToLeft;
- (void)_didEndEditing:(id)arg1;	// IMP=0x0010000000086b5f
- (void)_textDidChange:(id)arg1;	// IMP=0x0010000000086b27
- (void)_didBeginEditing:(id)arg1;	// IMP=0x0010000000086b0b
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// IMP=0x0010000000086b03
@property(readonly, nonatomic, getter=_hasText) _Bool hasText;
- (void)_updateTextAlignmentForEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000869bc
@property(readonly, nonatomic, getter=_preferredTextAlignment) long long preferredTextAlignment;
- (long long)_preferredTextAlignmentForEditing:(_Bool)arg1;	// IMP=0x001000000008697c
- (void)_updateStyleForClearButton;	// IMP=0x0010000000086817
- (void)_updateStyleForRightView;	// IMP=0x00100000000867cb
- (void)_updateStyleForLeftView;	// IMP=0x001000000008677f
- (void)_updateStyleForAccessoryView:(id)arg1;	// IMP=0x001000000008661a
- (void)_updateStyleForPlaceholderView;	// IMP=0x0010000000086489
- (void)_updateVisualStyling;	// IMP=0x0010000000086110
@property(readonly, copy, nonatomic, getter=_secondaryTintColor) UIColor *secondaryTintColor;
@property(readonly, nonatomic, getter=_preferredHeight) double preferredHeight;
- (void)_updateBorderVisualStyling;	// IMP=0x0010000000085f8b
- (id)_borderColorForUserInterfaceStyle:(long long)arg1;	// IMP=0x0010000000085f48
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000085c1f

@end
