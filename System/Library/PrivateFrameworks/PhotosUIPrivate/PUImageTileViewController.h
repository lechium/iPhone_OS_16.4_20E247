//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class CALayer, NSData, NSDate, NSString, NSURL, PUAssetViewModel, PUBrowsingViewModel, PUImageRequester, PUMediaProvider, PXImageLayerModulator, PXImageModulationManager, UIColor, UIImage, UIImageView;
@protocol PLTileableLayer, PUDisplayAsset, PUImageTileViewControllerPresentingDelegate, PXVKImageAnalysisInteraction;

__attribute__((visibility("hidden")))
@interface PUImageTileViewController : PUTileViewController
{
    struct {
        _Bool respondsToPresentingViewController;
        _Bool respondsToShouldShowVisualIntelligenceOverlay;
    } _delegateFlags;	// 8 = 0x8
    _Bool _animatesImageAppearance;	// 10 = 0xa
    _Bool _preserveImageDuringReload;	// 11 = 0xb
    _Bool _shouldUseFullsizeImageData;	// 12 = 0xc
    _Bool _visualImageInteractionEnabled;	// 13 = 0xd
    _Bool _imageIsFullQuality;	// 14 = 0xe
    _Bool __needsUpdateImage;	// 15 = 0xf
    _Bool __needsUpdateImageLayerModulator;	// 16 = 0x10
    _Bool __needsUpdateImageLayerModulatorInput;	// 17 = 0x11
    _Bool __needsUpdateImageView;	// 18 = 0x12
    _Bool __needsUpdateFullsizeImageMetadata;	// 19 = 0x13
    _Bool __needsUpdateFullsizeTiledLayer;	// 20 = 0x14
    _Bool _needsUpdateTargetSize;	// 21 = 0x15
    _Bool _needsUpdateVisualIntelligenceOverlayContentsRect;	// 22 = 0x16
    _Bool __isDisplayingFullQualityImage;	// 23 = 0x17
    _Bool _shouldUsePenultimateVersionForNextImageUpdate;	// 24 = 0x18
    _Bool _canUseFullsizeTiledLayer;	// 25 = 0x19
    _Bool _requiresFullQualityImage;	// 26 = 0x1a
    float _gainMapValue;	// 28 = 0x1c
    PUBrowsingViewModel *_browsingViewModel;	// 32 = 0x20
    PUAssetViewModel *_assetViewModel;	// 40 = 0x28
    id <PUDisplayAsset> _asset;	// 48 = 0x30
    PUMediaProvider *_mediaProvider;	// 56 = 0x38
    PXImageModulationManager *_imageModulationManager;	// 64 = 0x40
    UIColor *_placeholderColor;	// 72 = 0x48
    id <PUImageTileViewControllerPresentingDelegate> _presentingDelegate;	// 80 = 0x50
    UIImageView *__imageView;	// 88 = 0x58
    NSData *__fullsizeImageData;	// 96 = 0x60
    NSURL *__fullsizeImageURL;	// 104 = 0x68
    long long __fullsizeImageOrientation;	// 112 = 0x70
    CALayer<PLTileableLayer> *__fullsizeTiledLayer;	// 120 = 0x78
    long long __assetLoadingStage;	// 128 = 0x80
    NSDate *__assetLoadingStartDate;	// 136 = 0x88
    PUImageRequester *__imageRequester;	// 144 = 0x90
    PXImageLayerModulator *_imageLayerModulator;	// 152 = 0x98
    id <PXVKImageAnalysisInteraction> _imageInteraction;	// 160 = 0xa0
    UIImage *_image;	// 168 = 0xa8
    struct CGImage *_gainMapImage;	// 176 = 0xb0
    struct CGSize __targetSize;	// 184 = 0xb8
    struct CGSize __fullsizeImageUntransformedSize;	// 200 = 0xc8
    struct CGSize __fullsizeImageSize;	// 216 = 0xd8
}

+ (id)_supportedZoomImageFormats;	// IMP=0x00100000001dafb3
- (void).cxx_destruct;	// IMP=0x00000000001da916
@property(readonly, nonatomic) float gainMapValue; // @synthesize gainMapValue=_gainMapValue;
@property(readonly, nonatomic) struct CGImage *gainMapImage; // @synthesize gainMapImage=_gainMapImage;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) id <PXVKImageAnalysisInteraction> imageInteraction; // @synthesize imageInteraction=_imageInteraction;
@property(retain, nonatomic) PXImageLayerModulator *imageLayerModulator; // @synthesize imageLayerModulator=_imageLayerModulator;
@property(retain, nonatomic, setter=_setImageRequester:) PUImageRequester *_imageRequester; // @synthesize _imageRequester=__imageRequester;
@property(nonatomic) _Bool requiresFullQualityImage; // @synthesize requiresFullQualityImage=_requiresFullQualityImage;
@property(nonatomic) _Bool canUseFullsizeTiledLayer; // @synthesize canUseFullsizeTiledLayer=_canUseFullsizeTiledLayer;
@property(nonatomic, setter=_setShouldUsePenultimateVersionForNextImageUpdate:) _Bool shouldUsePenultimateVersionForNextImageUpdate; // @synthesize shouldUsePenultimateVersionForNextImageUpdate=_shouldUsePenultimateVersionForNextImageUpdate;
@property(retain, nonatomic, setter=_setAssetLoadingStartDate:) NSDate *_assetLoadingStartDate; // @synthesize _assetLoadingStartDate=__assetLoadingStartDate;
@property(nonatomic, setter=_setAssetLoadingStage:) long long _assetLoadingStage; // @synthesize _assetLoadingStage=__assetLoadingStage;
@property(nonatomic, setter=_setDisplayingFullQualityImage:) _Bool _isDisplayingFullQualityImage; // @synthesize _isDisplayingFullQualityImage=__isDisplayingFullQualityImage;
@property(retain, nonatomic, setter=_setFullsizeTiledLayer:) CALayer<PLTileableLayer> *_fullsizeTiledLayer; // @synthesize _fullsizeTiledLayer=__fullsizeTiledLayer;
@property(nonatomic, setter=_setFullsizeImageSize:) struct CGSize _fullsizeImageSize; // @synthesize _fullsizeImageSize=__fullsizeImageSize;
@property(nonatomic, setter=_setFullsizeImageUntransformedSize:) struct CGSize _fullsizeImageUntransformedSize; // @synthesize _fullsizeImageUntransformedSize=__fullsizeImageUntransformedSize;
@property(nonatomic, setter=_setFullsizeImageOrientation:) long long _fullsizeImageOrientation; // @synthesize _fullsizeImageOrientation=__fullsizeImageOrientation;
@property(retain, nonatomic, setter=_setFullsizeImageURL:) NSURL *_fullsizeImageURL; // @synthesize _fullsizeImageURL=__fullsizeImageURL;
@property(retain, nonatomic, setter=_setFullsizeImageData:) NSData *_fullsizeImageData; // @synthesize _fullsizeImageData=__fullsizeImageData;
@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic) _Bool needsUpdateVisualIntelligenceOverlayContentsRect; // @synthesize needsUpdateVisualIntelligenceOverlayContentsRect=_needsUpdateVisualIntelligenceOverlayContentsRect;
@property(nonatomic) _Bool needsUpdateTargetSize; // @synthesize needsUpdateTargetSize=_needsUpdateTargetSize;
@property(nonatomic, setter=_setTargetSize:) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property(nonatomic, setter=_setNeedsUpdateFullsizeTiledLayer:) _Bool _needsUpdateFullsizeTiledLayer; // @synthesize _needsUpdateFullsizeTiledLayer=__needsUpdateFullsizeTiledLayer;
@property(nonatomic, setter=_setNeedsUpdateFullsizeImageMetadata:) _Bool _needsUpdateFullsizeImageMetadata; // @synthesize _needsUpdateFullsizeImageMetadata=__needsUpdateFullsizeImageMetadata;
@property(nonatomic, setter=_setNeedsUpdateImageView:) _Bool _needsUpdateImageView; // @synthesize _needsUpdateImageView=__needsUpdateImageView;
@property(nonatomic, setter=_setNeedsUpdateImageLayerModulatorInput:) _Bool _needsUpdateImageLayerModulatorInput; // @synthesize _needsUpdateImageLayerModulatorInput=__needsUpdateImageLayerModulatorInput;
@property(nonatomic, setter=_setNeedsUpdateImageLayerModulator:) _Bool _needsUpdateImageLayerModulator; // @synthesize _needsUpdateImageLayerModulator=__needsUpdateImageLayerModulator;
@property(nonatomic, setter=_setNeedsUpdateImage:) _Bool _needsUpdateImage; // @synthesize _needsUpdateImage=__needsUpdateImage;
@property(readonly, nonatomic) _Bool imageIsFullQuality; // @synthesize imageIsFullQuality=_imageIsFullQuality;
@property(nonatomic) __weak id <PUImageTileViewControllerPresentingDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(nonatomic) _Bool visualImageInteractionEnabled; // @synthesize visualImageInteractionEnabled=_visualImageInteractionEnabled;
@property(copy, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(nonatomic) _Bool shouldUseFullsizeImageData; // @synthesize shouldUseFullsizeImageData=_shouldUseFullsizeImageData;
@property(nonatomic) _Bool preserveImageDuringReload; // @synthesize preserveImageDuringReload=_preserveImageDuringReload;
@property(nonatomic) _Bool animatesImageAppearance; // @synthesize animatesImageAppearance=_animatesImageAppearance;
@property(retain, nonatomic) PXImageModulationManager *imageModulationManager; // @synthesize imageModulationManager=_imageModulationManager;
@property(retain, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)_updateVKAnalysisAndDisplayMode;	// IMP=0x00000000001da0b0
- (void)_setVisualIntelligenceAnalyzingImageIfNeeded;	// IMP=0x00000000001d9fb3
- (void)_addVKImageInteractionToImageView;	// IMP=0x00000000001d9d47
- (void)_removeVKImageInteractionFromImageView;	// IMP=0x00000000001d9c76
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id)arg1;	// IMP=0x00000000001d9bdf
- (void)imageAnalysisInteraction:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect)arg2;	// IMP=0x00000000001d9b48
- (id)presentingViewControllerForImageAnalysisInteraction:(id)arg1;	// IMP=0x00000000001d9ad8
- (void)_updateVisualIntelligenceUnitContentsRect;	// IMP=0x00000000001d9892
- (void)_updateVisualIntelligenceOverlayContentsRectIfNeeded;	// IMP=0x00000000001d9849
- (void)_invalidateVisualIntelligenceOverlayContentsRect;	// IMP=0x00000000001d9832
- (void)_handleBrowsingViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000001d9740
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000001d94e9
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000001d941e
- (void)_cancelAllImageRequests;	// IMP=0x00000000001d93e1
- (id)generateAssetTransitionInfo;	// IMP=0x00000000001d921b
- (void)_updateReadyForDisplay;	// IMP=0x00000000001d91ea
- (void)_updateFullsizeTiledLayerIfNeeded;	// IMP=0x00000000001d85a3
- (void)_invalidateFullsizeTiledLayer;	// IMP=0x00000000001d858c
- (void)_updateFullsizeImageMetadataIfNeeded;	// IMP=0x00000000001d8451
- (void)_invalidateFullsizeImageMetadata;	// IMP=0x00000000001d843a
- (void)_updateAssetLoadingStage;	// IMP=0x00000000001d83b6
- (void)_updateImageViewIfNeeded;	// IMP=0x00000000001d7f63
- (void)_invalidateImageView;	// IMP=0x00000000001d7f4c
- (void)updateMutableImageLayerModulator:(id)arg1;	// IMP=0x00000000001d7e69
- (void)updateModulatorInputs;	// IMP=0x00000000001d7deb
- (void)_updateImageLayerModulatorInputIfNeeded;	// IMP=0x00000000001d7d90
- (void)_invalidateImageLayerModulatorInput;	// IMP=0x00000000001d7d79
- (void)updateModulator;	// IMP=0x00000000001d7c89
- (void)_updateImageLayerModulatorIfNeeded;	// IMP=0x00000000001d7c40
- (void)_invalidateImageLayerModulator;	// IMP=0x00000000001d7c29
- (void)imageRequester:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000001d7a30
- (void)_updateImageIfNeeded;	// IMP=0x00000000001d74b8
- (void)_invalidateImage;	// IMP=0x00000000001d7456
- (struct CGSize)targetSizeForProposedTargetSize:(struct CGSize)arg1;	// IMP=0x00000000001d7450
- (void)_updateTargetSizeIfNeeded;	// IMP=0x00000000001d71e6
- (void)_invalidateTargetSize;	// IMP=0x00000000001d71cf
- (void)_invalidate;	// IMP=0x00000000001d7138
- (void)_updateIfNeeded;	// IMP=0x00000000001d7028
- (_Bool)_needsUpdate;	// IMP=0x00000000001d6f77
- (void)assetDidChange;	// IMP=0x00000000001d6f71
- (_Bool)shouldAvoidInPlaceSnapshottedFadeOut;	// IMP=0x00000000001d6d15
- (void)assetViewModelDidChange;	// IMP=0x00000000001d6d0f
- (void)_handleShouldReloadAssetMediaNotification:(id)arg1;	// IMP=0x00000000001d6985
- (void)setPreloadedImage:(id)arg1;	// IMP=0x00000000001d6778
- (void)setGainMapValue:(float)arg1;	// IMP=0x00000000001d6719
- (void)setGainMapImage:(struct CGImage *)arg1;	// IMP=0x00000000001d66c3
@property(readonly, nonatomic) _Bool gainMapImageIsAvailable;
- (void)_setImage:(id)arg1 isFullQuality:(_Bool)arg2;	// IMP=0x00000000001d6620
- (void)setEdgeAntialiasingEnabled:(_Bool)arg1;	// IMP=0x00000000001d64cb
- (void)didChangeVisibleRect;	// IMP=0x00000000001d6468
- (_Bool)wantsVisibleRectChanges;	// IMP=0x00000000001d6404
- (void)_setAssetWithoutUpdateIfNeeded:(id)arg1;	// IMP=0x00000000001d5e5a
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x00000000001d5989
- (void)becomeReusable;	// IMP=0x00000000001d5888
- (id)loadView;	// IMP=0x00000000001d5644
- (_Bool)vkVisualSearchExistsAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000001d5587
- (_Bool)vkViewExistsAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000001d5527
- (void)dealloc;	// IMP=0x00000000001d5495

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
