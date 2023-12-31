//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKArtworkImageView, NSLayoutConstraint, UILabel;
@protocol MKArtworkImageSource;

@interface NavTrafficIncidentHeaderView
{
    UILabel *_primaryLabel;	// 8 = 0x8
    UILabel *_secondaryLabel;	// 16 = 0x10
    MKArtworkImageView *_artworkImageView;	// 24 = 0x18
    NSLayoutConstraint *_imageViewToPrimaryLabelHorizontalConstraint;	// 32 = 0x20
    NSLayoutConstraint *_imageViewWidthConstraint;	// 40 = 0x28
    NSLayoutConstraint *_primaryToSecondaryLabelBaselineConstraint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000b4b18c
@property(retain, nonatomic) NSLayoutConstraint *primaryToSecondaryLabelBaselineConstraint; // @synthesize primaryToSecondaryLabelBaselineConstraint=_primaryToSecondaryLabelBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewToPrimaryLabelHorizontalConstraint; // @synthesize imageViewToPrimaryLabelHorizontalConstraint=_imageViewToPrimaryLabelHorizontalConstraint;
@property(retain, nonatomic) MKArtworkImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) id <MKArtworkImageSource> imageSource;
- (id)viewForLastBaselineLayout;	// IMP=0x0010000000b4afeb
- (id)viewForFirstBaselineLayout;	// IMP=0x0010000000b4afd6
- (void)setPrimaryToSecondaryLabelBaselineSpacing:(double)arg1;	// IMP=0x0010000000b4afb9
- (id)_initialConstraints;	// IMP=0x0010000000b4a88a
- (void)_setupViews;	// IMP=0x0010000000b4a581
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000b4a4c8

@end

