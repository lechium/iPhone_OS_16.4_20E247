//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNAvatarImageRenderer, CNVisualIdentity, NSData, NSString, UIColor;
@protocol CNAvatarImageRenderingScope;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerMonogramProviderItem
{
    _Bool _isContactImage;	// 8 = 0x8
    _Bool _hasUnknownColor;	// 9 = 0x9
    _Bool _isVariantOptionItem;	// 10 = 0xa
    NSString *_monogramText;	// 16 = 0x10
    CNVisualIdentity *_visualIdentity;	// 24 = 0x18
    CNAvatarImageRenderer *_avatarRenderer;	// 32 = 0x20
    id <CNAvatarImageRenderingScope> _renderingScope;	// 40 = 0x28
    NSData *_monogramData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000209797
@property(nonatomic) _Bool isVariantOptionItem; // @synthesize isVariantOptionItem=_isVariantOptionItem;
@property(retain, nonatomic) NSData *monogramData; // @synthesize monogramData=_monogramData;
@property(nonatomic) _Bool hasUnknownColor; // @synthesize hasUnknownColor=_hasUnknownColor;
@property(nonatomic) _Bool isContactImage; // @synthesize isContactImage=_isContactImage;
@property(retain, nonatomic) id <CNAvatarImageRenderingScope> renderingScope; // @synthesize renderingScope=_renderingScope;
@property(retain, nonatomic) CNAvatarImageRenderer *avatarRenderer; // @synthesize avatarRenderer=_avatarRenderer;
@property(retain, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) NSString *monogramText; // @synthesize monogramText=_monogramText;
- (unsigned long long)hash;	// IMP=0x0000000000209600
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000209463
- (id)updatedProviderItemWithText:(id)arg1;	// IMP=0x000000000020938d
- (id)contactImageForMetadataStore;	// IMP=0x00000000002091ff
- (id)createColorVariantItemsExcludingSelf;	// IMP=0x000000000020916f
- (id)createColorVariantItems;	// IMP=0x00000000002090ab
- (id)createVariantsItemsWithVariantsManager:(id)arg1;	// IMP=0x0000000000208fab
- (id)monogramVariantItemForColor:(id)arg1;	// IMP=0x0000000000208d7d
- (void)updateVisualIdentity:(id)arg1;	// IMP=0x0000000000208c09
- (void)updateWithMonogramData:(id)arg1;	// IMP=0x0000000000208ba3
- (void)renderMonogramData;	// IMP=0x00000000002088b6
- (id)generateThumbnailImageDataIfNeeded;	// IMP=0x000000000020884e
- (id)thumbnailImageData;	// IMP=0x00000000002087ab
- (id)imageData;	// IMP=0x0000000000208708
- (id)variantIdentifier;	// IMP=0x000000000020868e
- (id)localizedVariantsTitle;	// IMP=0x0000000000208632
- (_Bool)isGrayMonogramItem;	// IMP=0x00000000002085cf
- (_Bool)allowsMoveAndScale;	// IMP=0x00000000002085c7
- (_Bool)allowsEditing;	// IMP=0x000000000020856d
- (_Bool)shouldShowCaption;	// IMP=0x0000000000208565
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) NSString *itemText;
- (unsigned long long)imageType;	// IMP=0x0000000000208453
- (_Bool)allowsVariants;	// IMP=0x00000000002083d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000208265
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(struct CGRect)arg4 renderingScope:(id)arg5 avatarRenderer:(id)arg6 isVariantOptionItem:(_Bool)arg7;	// IMP=0x0000000000208166

@end
