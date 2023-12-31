//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, _TtC4Maps26UGCPhotoThumbnailBadgeView;

@interface UGCPhotoThumbnailCollectionViewCell : UICollectionViewCell
{
    _TtC4Maps26UGCPhotoThumbnailBadgeView *_badgeView;	// 8 = 0x8
    NSString *_assetIdentifier;	// 16 = 0x10
    NSString *_providerName;	// 24 = 0x18
    UIImageView *_photoImageView;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x00200000009b4203
- (void).cxx_destruct;	// IMP=0x00200000009b42f5
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(copy, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(copy, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (void)prepareForReuse;	// IMP=0x00100000009b421c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000009b4118
- (void)_updateBadge;	// IMP=0x00100000009b3da9
- (id)contentImageView;	// IMP=0x00100000009b3cf3
@property(retain, nonatomic) UIImage *image;
- (void)_setupConstraints;	// IMP=0x00100000009b3661
- (void)_setupSubviews;	// IMP=0x00100000009b34fc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009b3416

@end

