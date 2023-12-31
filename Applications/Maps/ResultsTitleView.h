//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsThemeButton, MapsThemeLabel, NSArray, NSLayoutConstraint, NSString, UIImage, UIImageView;
@protocol ResultsTitleViewDelegate><GEOLogContextDelegate;

@interface ResultsTitleView
{
    MapsThemeLabel *_titleLabel;	// 8 = 0x8
    MapsThemeLabel *_subtitleLabel;	// 16 = 0x10
    MapsThemeButton *_editSearchButton;	// 24 = 0x18
    UIImageView *_headerImageView;	// 32 = 0x20
    NSLayoutConstraint *_topLabelCenterYConstraint;	// 40 = 0x28
    NSLayoutConstraint *_subTitleTrailingConstraint;	// 48 = 0x30
    NSArray *_singleLineEditSearchConstraints;	// 56 = 0x38
    NSArray *_multipleLineEditSearchConstraints;	// 64 = 0x40
    NSArray *_imageHeaderConstraints;	// 72 = 0x48
    NSArray *_titleHeaderConstraints;	// 80 = 0x50
    _Bool _editButtonHidden;	// 88 = 0x58
    id <ResultsTitleViewDelegate><GEOLogContextDelegate> _delegate;	// 96 = 0x60
    UIImage *_headerImage;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000a291fd
@property(nonatomic) _Bool editButtonHidden; // @synthesize editButtonHidden=_editButtonHidden;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(nonatomic) __weak id <ResultsTitleViewDelegate><GEOLogContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)centerTitleVertically:(_Bool)arg1;	// IMP=0x0010000000a2916b
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)didTapEditButton:(id)arg1;	// IMP=0x0010000000a28ff6
- (void)updateTitleNumberOfLines;	// IMP=0x0010000000a28f91
- (_Bool)editSearchButtonWillTruncate;	// IMP=0x0010000000a28cc9
- (void)updateEditSearchButtonConstraints;	// IMP=0x0010000000a28c32
- (void)updateLabelFonts;	// IMP=0x0010000000a28b11
- (void)updateHeaderContent;	// IMP=0x0010000000a289ac
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0010000000a2899a
- (id)titlefontWithTraitCollection:(id)arg1;	// IMP=0x0010000000a28981
- (id)subtitlefontWithTraitCollection:(id)arg1;	// IMP=0x0010000000a28968
- (id)effectiveTraitCollectionWithTraitCollection:(id)arg1;	// IMP=0x0010000000a28947
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a274a2

@end

