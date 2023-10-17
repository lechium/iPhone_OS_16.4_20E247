//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionsCollectionViewCell : UICollectionViewCell
{
    UIImageView *_avatarView;	// 8 = 0x8
    UIImageView *_checkImageView;	// 16 = 0x10
    UIImageView *_checkImageBackgroundView;	// 24 = 0x18
    UILabel *_nameLabel;	// 32 = 0x20
}

+ (id)cellIdentifier;	// IMP=0x0060000000219d14
- (void).cxx_destruct;	// IMP=0x0000000000219cc1
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *checkImageBackgroundView; // @synthesize checkImageBackgroundView=_checkImageBackgroundView;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)prepareForReuse;	// IMP=0x0000000000219b76
@property(retain, nonatomic) NSString *displayString;
@property(retain, nonatomic) UIImage *image;
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000219a2d
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x000000000021994a
- (void)setUpCheckMarkConstraints;	// IMP=0x0000000000219219
- (void)setupConstraints;	// IMP=0x000000000021884b
- (_Bool)useAccessibleLayout;	// IMP=0x000000000021873b
- (void)layoutSubviews;	// IMP=0x0000000000218554
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002183ec
- (void)setCheckMarkHidden:(_Bool)arg1;	// IMP=0x0000000000218361
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000217ca5

@end
