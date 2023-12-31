//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVTAvatarRecordImageProvider, AVTRenderingScope, AVTStickerConfiguration, CNAvatarStickerGeneratorProvider, CNPhotoPickerColorVariant, NSData, UIImage;
@protocol AVTAvatarRecord;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerAnimojiProviderItem
{
    id <AVTAvatarRecord> _avatarRecord;	// 8 = 0x8
    AVTStickerConfiguration *_poseConfiguration;	// 16 = 0x10
    CNPhotoPickerColorVariant *_backgroundColorVariant;	// 24 = 0x18
    NSData *__originalImageData;	// 32 = 0x20
    NSData *__generatedImageData;	// 40 = 0x28
    UIImage *_loadingPlaceholderImage;	// 48 = 0x30
    CNAvatarStickerGeneratorProvider *_stickerGeneratorProvider;	// 56 = 0x38
    AVTRenderingScope *_renderingScope;	// 64 = 0x40
    AVTAvatarRecordImageProvider *_imageProvider;	// 72 = 0x48
    struct CGSize _originalImageSize;	// 80 = 0x50
    struct UIEdgeInsets _edgeInsets;	// 96 = 0x60
}

+ (id)log;	// IMP=0x00600000001e9bfb
- (void).cxx_destruct;	// IMP=0x00000000001e97c2
@property(retain, nonatomic) AVTAvatarRecordImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) AVTRenderingScope *renderingScope; // @synthesize renderingScope=_renderingScope;
@property(retain, nonatomic) CNAvatarStickerGeneratorProvider *stickerGeneratorProvider; // @synthesize stickerGeneratorProvider=_stickerGeneratorProvider;
@property(retain, nonatomic) UIImage *loadingPlaceholderImage; // @synthesize loadingPlaceholderImage=_loadingPlaceholderImage;
@property(retain, nonatomic) NSData *_generatedImageData; // @synthesize _generatedImageData=__generatedImageData;
@property(retain, nonatomic) NSData *_originalImageData; // @synthesize _originalImageData=__originalImageData;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;
@property(retain, nonatomic) CNPhotoPickerColorVariant *backgroundColorVariant; // @synthesize backgroundColorVariant=_backgroundColorVariant;
@property(retain, nonatomic) AVTStickerConfiguration *poseConfiguration; // @synthesize poseConfiguration=_poseConfiguration;
@property(retain, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
- (unsigned long long)hash;	// IMP=0x00000000001e9564
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e9458
- (id)contactImageForMetadataStore;	// IMP=0x00000000001e932a
- (id)createVariantsItemsWithVariantsManager:(id)arg1;	// IMP=0x00000000001e924e
- (void)applyVariantEffectToFullsizeImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e9183
- (id)generateThumbnailImageDataIfNeeded;	// IMP=0x00000000001e9070
- (void)generateAllImageDatasIfNeeded;	// IMP=0x00000000001e902a
- (id)generateImageDataIfNeeded;	// IMP=0x00000000001e8e83
- (id)renderAvatarWithBackgroundWithImage:(id)arg1;	// IMP=0x00000000001e8cf6
- (id)renderAvatarWithBackgroundWithImageData:(id)arg1;	// IMP=0x00000000001e8c87
- (id)renderAvatarWithPoseWithSize:(double)arg1;	// IMP=0x00000000001e8c7f
- (id)renderDefaultAvatarImage;	// IMP=0x00000000001e8c59
- (unsigned long long)imageType;	// IMP=0x00000000001e8c4e
- (id)variantIdentifier;	// IMP=0x00000000001e8bfe
- (id)copyWithPoseConfiguration:(id)arg1 generatorProvider:(id)arg2;	// IMP=0x00000000001e89c4
- (id)copyWithColor:(id)arg1;	// IMP=0x00000000001e85d9
- (id)initWithAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingScope:(id)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5;	// IMP=0x00000000001e84d1
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect)arg2;	// IMP=0x00000000001e8422
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect)arg2 backgroundColorVariant:(id)arg3;	// IMP=0x00000000001e831a
- (struct CGAffineTransform)transformForMemojiMetadata;	// IMP=0x00000000001e7cff
- (void)updateVisualIdentity:(id)arg1;	// IMP=0x00000000001e7b33
- (id)originalImageData;	// IMP=0x00000000001e7b1e
- (id)imageData;	// IMP=0x00000000001e7ac4
- (_Bool)shouldShowCaption;	// IMP=0x00000000001e7abc
- (_Bool)allowsMoveAndScale;	// IMP=0x00000000001e7ab4
- (id)localizedVariantsTitle;	// IMP=0x00000000001e7a1f
- (_Bool)allowsVariants;	// IMP=0x00000000001e79ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e7864

// Remaining properties
@property(retain, nonatomic) NSData *thumbnailImageData;

@end

