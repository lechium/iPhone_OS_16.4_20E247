//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface CNFRegAliasTableCell : PSTableCell
{
    _Bool _hasSpinner;	// 120 = 0x78
    UIActivityIndicatorView *_spinner;	// 128 = 0x80
    UIImageView *_temporaryPhoneGlyph;	// 136 = 0x88
    UIImageView *_iconView;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000006e6bd
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *temporaryPhoneGlyph; // @synthesize temporaryPhoneGlyph=_temporaryPhoneGlyph;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool hasSpinner; // @synthesize hasSpinner=_hasSpinner;
- (_Bool)usesStandardBackgroundImage;	// IMP=0x000000000006e636
- (void)layoutSubviews;	// IMP=0x000000000006e0df
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000006e089
- (void)_updateIcon;	// IMP=0x000000000006d9ab
- (void)setChecked:(_Bool)arg1;	// IMP=0x000000000006d966
- (void)setIsTemporaryPhone:(_Bool)arg1;	// IMP=0x000000000006d572
- (void)dealloc;	// IMP=0x000000000006d4d1
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000006d3e8

@end

