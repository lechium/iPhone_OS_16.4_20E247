//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, NSUUID, SearchHomeBrowseCategoryCellSizeController, UIImageView, UILabel;

@interface SearchHomeBrowseCategoryCollectionViewCell : UICollectionViewCell
{
    NSUUID *_updateIdentifier;	// 8 = 0x8
    SearchHomeBrowseCategoryCellSizeController *_sizeController;	// 16 = 0x10
    UIImageView *_browseImageView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    NSLayoutConstraint *_topLabelToTopConstraint;	// 40 = 0x28
    NSLayoutConstraint *_bottomLabelToBottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_imageLeadingConstraint;	// 56 = 0x38
    NSLayoutConstraint *_imageToLabelConstraint;	// 64 = 0x40
    NSLayoutConstraint *_imageWidthConstraint;	// 72 = 0x48
    NSLayoutConstraint *_imageHeightConstraint;	// 80 = 0x50
}

+ (id)identifier;	// IMP=0x00400000009c7154
- (void).cxx_destruct;	// IMP=0x00200000009c7f53
@property(retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // @synthesize imageWidthConstraint=_imageWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageToLabelConstraint; // @synthesize imageToLabelConstraint=_imageToLabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageLeadingConstraint; // @synthesize imageLeadingConstraint=_imageLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomLabelToBottomConstraint; // @synthesize bottomLabelToBottomConstraint=_bottomLabelToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topLabelToTopConstraint; // @synthesize topLabelToTopConstraint=_topLabelToTopConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *browseImageView; // @synthesize browseImageView=_browseImageView;
@property(retain, nonatomic) SearchHomeBrowseCategoryCellSizeController *sizeController; // @synthesize sizeController=_sizeController;
@property(retain, nonatomic) NSUUID *updateIdentifier; // @synthesize updateIdentifier=_updateIdentifier;
- (void)setTitle:(id)arg1;	// IMP=0x00100000009c7d83
- (void)setImage:(id)arg1;	// IMP=0x00100000009c7d11
- (void)prepareForReuse;	// IMP=0x00100000009c7c6c
- (_Bool)canBecomeFirstResponder;	// IMP=0x00100000009c791c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009c7166

@end
