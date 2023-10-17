//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIBaseCollectionViewCell.h"

@class MISSING_TYPE, NSArray, UIView, VUIImageView, VUILabel, VUIMediaTagsView, _TtC8VideosUI16RolesSummaryView;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI23CanonicalBannerViewCell : VUIBaseCollectionViewCell
{
    MISSING_TYPE *bannerViewModel;	// 8 = 0x8
    MISSING_TYPE *bannerLayout;	// 16 = 0x10
    MISSING_TYPE *collectionViewFrameSize;	// 24 = 0x18
    MISSING_TYPE *titleImageView;	// 48 = 0x30
    MISSING_TYPE *contentTitleView;	// 56 = 0x38
    MISSING_TYPE *contentSubtitleView;	// 64 = 0x40
    MISSING_TYPE *episodeInfoTextView;	// 72 = 0x48
    MISSING_TYPE *promoTextView;	// 80 = 0x50
    MISSING_TYPE *coverArtImageView;	// 88 = 0x58
    MISSING_TYPE *buttonViews;	// 96 = 0x60
    MISSING_TYPE *availabilityTextView;	// 104 = 0x68
    MISSING_TYPE *availabilityImageView;	// 112 = 0x70
    MISSING_TYPE *disclaimerTextView;	// 120 = 0x78
    MISSING_TYPE *descriptionTextView;	// 128 = 0x80
    MISSING_TYPE *rolesSummaryView;	// 136 = 0x88
    MISSING_TYPE *tagsView;	// 144 = 0x90
    MISSING_TYPE *infoTagsView;	// 152 = 0x98
    MISSING_TYPE *uberBackgroundView;	// 160 = 0xa0
    MISSING_TYPE *backgroundImageViewModel;	// 168 = 0xa8
    MISSING_TYPE *gradientLayer;	// 176 = 0xb0
    MISSING_TYPE *gradientLayerView;	// 184 = 0xb8
    MISSING_TYPE *descComputationLabel;	// 192 = 0xc0
    MISSING_TYPE *tagsComputationLabel;	// 200 = 0xc8
    MISSING_TYPE *transitionBackgroundView;	// 208 = 0xd0
    MISSING_TYPE *isUberLayout;	// 216 = 0xd8
    MISSING_TYPE *isPhoneSizeClass;	// 217 = 0xd9
    MISSING_TYPE *isBackgroundTransitioning;	// 218 = 0xda
    MISSING_TYPE *isImageLoadedForBackgroundTransitioning;	// 219 = 0xdb
    MISSING_TYPE *bannerButtonSpacing;	// 224 = 0xe0
    MISSING_TYPE *disclaimerTextBottomSpacing;	// 232 = 0xe8
    MISSING_TYPE *contentOffset;	// 240 = 0xf0
    MISSING_TYPE *$__lazy_storage_$_separatorView;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0000000000662fd0
@property(nonatomic, readonly) VUIMediaTagsView *accessibilityTagsView;
@property(nonatomic, readonly) _TtC8VideosUI16RolesSummaryView *accessibilityRolesSummaryView;
@property(nonatomic, readonly) UIView *accessibilityDescriptionTextView;
@property(nonatomic, readonly) VUILabel *accessibilityDisclaimerTextView;
@property(nonatomic, readonly) VUIImageView *accessibilityAvailabilityImageView;
@property(nonatomic, readonly) VUILabel *accessibilityAvailabilityTextView;
@property(nonatomic, readonly) NSArray *accessibilityButtonViews;
@property(nonatomic, readonly) VUILabel *accessibilityPromoTextView;
@property(nonatomic, readonly) VUILabel *accessibilityEpisodeInfoTextView;
@property(nonatomic, readonly) VUILabel *accessibilityContentSubtitleView;
@property(nonatomic, readonly) VUILabel *accessibilityContentTitleView;
@property(nonatomic, readonly) VUIImageView *accessibilityTitleImageView;
- (void)vui_cellWillBeDisplayed;	// IMP=0x0000000000662aa0
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x0000000000662a00
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000006629b0
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000662860
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)vui_prepareForReuse;	// IMP=0x000000000065e710
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000065e6c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000065e690

@end
