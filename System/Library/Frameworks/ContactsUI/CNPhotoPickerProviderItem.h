//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, UIImage;
@protocol CNPhotoPickerProviderItemDelegate, CNScheduler;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerProviderItem : NSObject
{
    _Bool _allowsEditing;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
    NSData *_thumbnailImageData;	// 24 = 0x18
    NSString *_recentsIdentifier;	// 32 = 0x20
    NSString *_localizedVariantDisplayName;	// 40 = 0x28
    id <CNScheduler> _renderingQueue;	// 48 = 0x30
    id <CNScheduler> _callbackQueue;	// 56 = 0x38
    NSDate *_sortDate;	// 64 = 0x40
    id <CNPhotoPickerProviderItemDelegate> _delegate;	// 72 = 0x48
    UIImage *_fullSizeImage;	// 80 = 0x50
    UIImage *_croppedFullSizeImage;	// 88 = 0x58
    UIImage *_thumbnailImage;	// 96 = 0x60
    UIImage *_loadingPlaceholderImage;	// 104 = 0x68
    NSData *_fullscreenImageData;	// 112 = 0x70
    NSData *_filteredImageData;	// 120 = 0x78
    NSString *_imageFilterName;	// 128 = 0x80
    struct CGRect _cropRect;	// 136 = 0x88
}

+ (id)thumbnailViewForImage:(id)arg1;	// IMP=0x00100000001401f2
- (void).cxx_destruct;	// IMP=0x000000000013fbce
@property(retain, nonatomic) NSString *imageFilterName; // @synthesize imageFilterName=_imageFilterName;
@property(retain, nonatomic) NSData *filteredImageData; // @synthesize filteredImageData=_filteredImageData;
@property(retain, nonatomic) NSData *fullscreenImageData; // @synthesize fullscreenImageData=_fullscreenImageData;
@property(retain, nonatomic) UIImage *loadingPlaceholderImage; // @synthesize loadingPlaceholderImage=_loadingPlaceholderImage;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) UIImage *croppedFullSizeImage; // @synthesize croppedFullSizeImage=_croppedFullSizeImage;
@property(retain, nonatomic) UIImage *fullSizeImage; // @synthesize fullSizeImage=_fullSizeImage;
@property(nonatomic) __weak id <CNPhotoPickerProviderItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *sortDate; // @synthesize sortDate=_sortDate;
@property(readonly, nonatomic) id <CNScheduler> callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) id <CNScheduler> renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(retain, nonatomic) NSString *localizedVariantDisplayName; // @synthesize localizedVariantDisplayName=_localizedVariantDisplayName;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) NSString *recentsIdentifier; // @synthesize recentsIdentifier=_recentsIdentifier;
@property(retain, nonatomic) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void)updateTintColorIfNeeded:(id)arg1;	// IMP=0x000000000013fa3d
- (unsigned long long)hash;	// IMP=0x000000000013f9e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013f8d7
- (id)contactImageForMetadataStore;	// IMP=0x000000000013f7c1
@property(readonly, nonatomic) unsigned long long imageType;
- (id)rotateImageDataIfNeeded:(id)arg1;	// IMP=0x000000000013f66b
- (id)generatePhotoFilterVariants;	// IMP=0x000000000013f2d4
- (id)createVariantsItemsWithVariantsManager:(id)arg1;	// IMP=0x000000000013f2c2
- (void)updateVisualIdentity:(id)arg1;	// IMP=0x000000000013f142
- (void)updateContact:(id)arg1;	// IMP=0x000000000013f0c2
- (void)applyVariantEffectToFullsizeImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000013efc4
- (void)fullSizeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000013ec32
- (void)thumbnailViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000013eaf2
- (void)thumbnailViewWithPlaceholderProvider:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000013e9aa
- (void)clearThumbnailImage;	// IMP=0x000000000013e996
- (id)generateThumbnailImageDataWithData:(id)arg1;	// IMP=0x000000000013e824
- (id)generateThumbnailImageDataIfNeeded;	// IMP=0x000000000013e6fc
- (void)generateAllImageDatasIfNeeded;	// IMP=0x000000000013e5d7
@property(readonly, nonatomic) NSData *originalImageData;
@property(readonly, nonatomic) NSString *variantIdentifier;
@property(readonly, nonatomic) NSString *localizedVariantsTitle;
@property(readonly, nonatomic) _Bool shouldShowCaption;
@property(readonly, nonatomic) _Bool allowsMoveAndScale;
@property(readonly, nonatomic) _Bool allowsVariants;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013e36e
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 imageFilterName:(id)arg4 cropRect:(struct CGRect)arg5 renderingQueue:(id)arg6 callbackQueue:(id)arg7;	// IMP=0x000000000013e1fb
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(struct CGRect)arg4;	// IMP=0x000000000013e0bd

@end

