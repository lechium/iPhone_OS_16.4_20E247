//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, VUIDownloadButton, VUIDownloadEntity, VUIImageView, VUILabel, VUILibraryEpisodeFrameView, VUISeparatorView, VUIVideosImageView;
@protocol VUIDownloadEntityTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VUIDownloadEntityTableViewCell : UITableViewCell
{
    id <VUIDownloadEntityTableViewCellDelegate> _delegate;	// 8 = 0x8
    VUIDownloadButton *_downloadButton;	// 16 = 0x10
    VUISeparatorView *_topSeparatorView;	// 24 = 0x18
    VUISeparatorView *_bottomSeparatorView;	// 32 = 0x20
    VUILabel *_titleLabel;	// 40 = 0x28
    VUIImageView *_posterImageView;	// 48 = 0x30
    VUILabel *_metaDataHeaderFirstLabel;	// 56 = 0x38
    VUILabel *_metaDataHeaderSecondLabel;	// 64 = 0x40
    VUILabel *_dotSeparatorLabel;	// 72 = 0x48
    VUIVideosImageView *_rightImageView;	// 80 = 0x50
    VUILibraryEpisodeFrameView *_episodeImageView;	// 88 = 0x58
    VUIDownloadEntity *_downloadEntity;	// 96 = 0x60
    unsigned long long _previousDownloadState;	// 104 = 0x68
}

+ (id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg1;	// IMP=0x00100000000755d7
+ (void)configureVUIDownloadEntityTableViewCell:(id)arg1 withDownloadEntity:(id)arg2 forMetrics:(_Bool)arg3;	// IMP=0x00100000000703a6
- (void).cxx_destruct;	// IMP=0x0000000000075b28
@property(nonatomic) unsigned long long previousDownloadState; // @synthesize previousDownloadState=_previousDownloadState;
@property(retain, nonatomic) VUIDownloadEntity *downloadEntity; // @synthesize downloadEntity=_downloadEntity;
@property(retain, nonatomic) VUILibraryEpisodeFrameView *episodeImageView; // @synthesize episodeImageView=_episodeImageView;
@property(retain, nonatomic) VUIVideosImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) VUILabel *dotSeparatorLabel; // @synthesize dotSeparatorLabel=_dotSeparatorLabel;
@property(retain, nonatomic) VUILabel *metaDataHeaderSecondLabel; // @synthesize metaDataHeaderSecondLabel=_metaDataHeaderSecondLabel;
@property(retain, nonatomic) VUILabel *metaDataHeaderFirstLabel; // @synthesize metaDataHeaderFirstLabel=_metaDataHeaderFirstLabel;
@property(retain, nonatomic) VUIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUISeparatorView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) VUIDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(nonatomic) __weak id <VUIDownloadEntityTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000758e0
- (double)_verticalPaddingForCurrentSizeClass;	// IMP=0x00000000000755a4
- (double)_imageHeightForCurrentSizeClass;	// IMP=0x0000000000075571
- (id)_episodePlaceholderImage;	// IMP=0x00000000000754aa
- (void)_removeDownloadButtonIfRequired;	// IMP=0x000000000007543b
- (void)_addDownloadButtonIfRequired:(id)arg1;	// IMP=0x0000000000075178
- (void)_addMetaDataLabelsIfRequired:(id)arg1;	// IMP=0x00000000000743b4
- (void)_configureViewElementsForAX;	// IMP=0x000000000007432b
- (struct CGSize)_layoutForCompact:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x0000000000072f69
- (struct CGSize)_layoutForCategoryAccessibility:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x0000000000071ec8
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x0000000000071e2a
- (void)downloadEntity:(id)arg1 numberOfItemsDidChange:(unsigned long long)arg2;	// IMP=0x0000000000071dca
- (void)downloadEntity:(id)arg1 numberOfItemsDownloadingDidChange:(id)arg2;	// IMP=0x0000000000071d6a
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;	// IMP=0x0000000000071d58
- (void)layoutSubviews;	// IMP=0x0000000000071ca7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000071c90
- (void)willTransitionToState:(unsigned long long)arg1;	// IMP=0x0000000000071b9b
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000713cc
- (void)prepareForReuse;	// IMP=0x00000000000712ea
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000712aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

