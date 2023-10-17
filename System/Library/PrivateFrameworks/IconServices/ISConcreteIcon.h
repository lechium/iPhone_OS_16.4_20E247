//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ISIcon.h"

@class ISImageCache, NSUUID;

__attribute__((visibility("hidden")))
@interface ISConcreteIcon : ISIcon
{
    NSUUID *_digest;	// 16 = 0x10
    ISImageCache *_imageCache;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000011209
- (void).cxx_destruct;	// IMP=0x00000000000146ce
@property(readonly) ISImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly) NSUUID *digest; // @synthesize digest=_digest;
- (double)_aspectRatio;	// IMP=0x0000000000014694
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014494
- (void)generateImageWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013d21
- (id)imageForDescriptor:(id)arg1;	// IMP=0x000000000001388b
- (id)symbol;	// IMP=0x00000000000137a4
- (id)_imageForSymbolImageDescriptor:(id)arg1;	// IMP=0x0000000000013703
- (void)_prepareImagesForImageDescriptors:(id)arg1;	// IMP=0x0000000000012fab
- (id)generateImageWithDescriptor:(id)arg1;	// IMP=0x00000000000127cd
- (unsigned long long)assessValidationToken:(id)arg1;	// IMP=0x0000000000012188
- (id)_cachedImageForDescriptor:(id)arg1;	// IMP=0x0000000000011c88
- (id)_imageFromStoreForDescriptor:(id)arg1;	// IMP=0x0000000000011856
- (id)_placeholderImageWithImageDescriptor:(id)arg1 markAsPlaceholder:(_Bool)arg2;	// IMP=0x0000000000011596
- (void)resolve;	// IMP=0x0000000000011590
- (id)makeSymbolResourceProvider;	// IMP=0x000000000001157e
- (id)makeResourceProvider;	// IMP=0x0000000000011542
- (id)_fallbackKey;	// IMP=0x000000000001152e
- (unsigned long long)hash;	// IMP=0x000000000001149e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011437
- (_Bool)isEqualToIcon:(id)arg1;	// IMP=0x00000000000113a6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011319
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000112a0
- (id)initWithDigest:(id)arg1;	// IMP=0x0000000000011211

@end
