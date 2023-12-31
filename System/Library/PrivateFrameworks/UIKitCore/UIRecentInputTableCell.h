//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCell.h"

@class UILabel, UITextInputTraits, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UIRecentInputTableCell : UITableViewCell
{
    UILabel *_floatingLabel;	// 8 = 0x8
    long long _blurEffectStyle;	// 16 = 0x10
    UITextInputTraits *_textInputTraits;	// 24 = 0x18
}

+ (id)backgroundColorForBlurEffectStyle:(long long)arg1;	// IMP=0x00600000009ddbfd
+ (id)focusedTextColorForBlurEffectStyle:(long long)arg1;	// IMP=0x00600000009ddb9c
+ (id)unfocusedTextColorForBlurEffectStyle:(long long)arg1;	// IMP=0x00600000009ddb3b
- (void).cxx_destruct;	// IMP=0x00000000009ddd57
@property(retain, nonatomic) UITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(retain, nonatomic) UILabel *floatingLabel; // @synthesize floatingLabel=_floatingLabel;
- (_Bool)_tvIsDarkMode;	// IMP=0x00000000009ddc48
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000009ddabb
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000009dda39
- (void)_updateAppearance;	// IMP=0x00000000009dd8c4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000009dd62d
- (void)setInputText:(id)arg1 withBlurStyle:(long long)arg2;	// IMP=0x00000000009dd3b7
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView;
- (void)layoutSubviews;	// IMP=0x00000000009dd2dc

@end

