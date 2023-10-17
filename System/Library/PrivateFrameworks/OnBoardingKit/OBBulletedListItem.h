//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface OBBulletedListItem : UIView
{
    UIView *_imageContainer;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIStackView *_stackView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_descriptionLabel;	// 40 = 0x28
    NSLayoutConstraint *_stackViewLeadingConstraintVertical;	// 48 = 0x30
    NSLayoutConstraint *_stackViewLeadingConstraintHorizontal;	// 56 = 0x38
    UIButton *_accessoryButton;	// 64 = 0x40
    NSArray *_imageContainerSizeConstraints;	// 72 = 0x48
    NSLayoutConstraint *_topConstraintToStackView;	// 80 = 0x50
    NSLayoutConstraint *_bottomConstraintToStackView;	// 88 = 0x58
    NSLayoutConstraint *_topConstraintToImageContainer;	// 96 = 0x60
    NSLayoutConstraint *_bottomConstraintToImageContainer;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000002e346
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraintToImageContainer; // @synthesize bottomConstraintToImageContainer=_bottomConstraintToImageContainer;
@property(retain, nonatomic) NSLayoutConstraint *topConstraintToImageContainer; // @synthesize topConstraintToImageContainer=_topConstraintToImageContainer;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraintToStackView; // @synthesize bottomConstraintToStackView=_bottomConstraintToStackView;
@property(retain, nonatomic) NSLayoutConstraint *topConstraintToStackView; // @synthesize topConstraintToStackView=_topConstraintToStackView;
@property(retain, nonatomic) NSArray *imageContainerSizeConstraints; // @synthesize imageContainerSizeConstraints=_imageContainerSizeConstraints;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintHorizontal; // @synthesize stackViewLeadingConstraintHorizontal=_stackViewLeadingConstraintHorizontal;
@property(retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintVertical; // @synthesize stackViewLeadingConstraintVertical=_stackViewLeadingConstraintVertical;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
- (double)_combinedLabelHeight;	// IMP=0x000000000002e096
- (void)updateConstraints;	// IMP=0x000000000002dd13
- (id)_titleFont;	// IMP=0x000000000002dc0c
- (id)_descriptionFont;	// IMP=0x000000000002dba9
- (double)_horizontalMargins;	// IMP=0x000000000002db30
- (void)_updateImageViewLayout;	// IMP=0x000000000002d2fc
- (id)_textStyle;	// IMP=0x000000000002d2e8
- (double)trailingMargins;	// IMP=0x000000000002d158
- (double)leadingMargins;	// IMP=0x000000000002d146
- (_Bool)shouldLayoutVertically;	// IMP=0x000000000002d12d
- (double)imageSizeForImage:(id)arg1;	// IMP=0x000000000002d11f
- (void)layoutSubviews;	// IMP=0x000000000002ced8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002cde4
- (id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 tintColor:(id)arg4;	// IMP=0x000000000002cdc1
- (id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 tintColor:(id)arg4 linkButton:(id)arg5;	// IMP=0x000000000002baef

@end
