//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImageView, VUIDownloadButton, VUIDownloadEntity, VUILabel;
@protocol VUIDownloadCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VUIDownloadCollectionViewCell
{
    _Bool _editing;	// 8 = 0x8
    id <VUIDownloadCollectionViewCellDelegate> _delegate;	// 16 = 0x10
    VUILabel *_metaDataHeaderFirstLabel;	// 24 = 0x18
    VUILabel *_metaDataHeaderSecondLabel;	// 32 = 0x20
    VUILabel *_dotSeparatorLabel;	// 40 = 0x28
    UIImageView *_editImageView;	// 48 = 0x30
    VUIDownloadEntity *_downloadEntity;	// 56 = 0x38
    unsigned long long _previousDownloadState;	// 64 = 0x40
    VUIDownloadButton *_downloadButton;	// 72 = 0x48
}

+ (id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg1;	// IMP=0x0010000000257ba8
+ (void)_showConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2;	// IMP=0x0010000000257b2c
+ (void)_movieConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2;	// IMP=0x0010000000257a79
+ (void)configureVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2 width:(double)arg3 forMetrics:(_Bool)arg4;	// IMP=0x00100000002577ba
- (void).cxx_destruct;	// IMP=0x000000000025aba0
@property(retain, nonatomic) VUIDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(nonatomic) unsigned long long previousDownloadState; // @synthesize previousDownloadState=_previousDownloadState;
@property(retain, nonatomic) VUIDownloadEntity *downloadEntity; // @synthesize downloadEntity=_downloadEntity;
@property(retain, nonatomic) UIImageView *editImageView; // @synthesize editImageView=_editImageView;
@property(retain, nonatomic) VUILabel *dotSeparatorLabel; // @synthesize dotSeparatorLabel=_dotSeparatorLabel;
@property(retain, nonatomic) VUILabel *metaDataHeaderSecondLabel; // @synthesize metaDataHeaderSecondLabel=_metaDataHeaderSecondLabel;
@property(retain, nonatomic) VUILabel *metaDataHeaderFirstLabel; // @synthesize metaDataHeaderFirstLabel=_metaDataHeaderFirstLabel;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <VUIDownloadCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateViewForEditState;	// IMP=0x000000000025a8a1
- (_Bool)_hasSecondaryLabel;	// IMP=0x000000000025a835
- (void)_configureViewElementsForAX;	// IMP=0x000000000025a7ac
- (void)_addDownloadButtonIfRequired:(id)arg1;	// IMP=0x000000000025a523
- (void)_addMetaDataLabelsIfRequired:(id)arg1;	// IMP=0x0000000000259f4d
- (struct CGSize)_layoutForAccessibility:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x00000000002594fa
- (struct CGSize)_layoutForCompact:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x000000000025860e
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x0000000000258570
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;	// IMP=0x000000000025855e
- (void)downloadEntity:(id)arg1 numberOfItemsDidChange:(unsigned long long)arg2;	// IMP=0x00000000002584fe
- (void)downloadEntity:(id)arg1 numberOfItemsDownloadingDidChange:(id)arg2;	// IMP=0x000000000025849e
- (void)layoutSubviews;	// IMP=0x00000000002583ed
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002583d6
- (void)prepareForReuse;	// IMP=0x00000000002582df
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000257f21
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000257ed3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
