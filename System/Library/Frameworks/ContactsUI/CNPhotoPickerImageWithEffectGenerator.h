//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhotoPickerImageWithEffectGenerator : NSObject
{
}

+ (id)imageByApplyingEffect:(id)arg1 withContext:(id)arg2 toImage:(id)arg3 withSize:(struct CGSize)arg4;	// IMP=0x008000000028611d
+ (id)imageByApplyingEffect:(id)arg1 withContext:(id)arg2 toImageData:(id)arg3;	// IMP=0x0080000000286017
+ (void)imagesByApplyingEffectsToImageData:(id)arg1 withScaleFactor:(double)arg2 originalImageScale:(double)arg3 cropRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0080000000285ce0
+ (id)displayNameForFilterNamed:(id)arg1;	// IMP=0x0080000000285c5d
+ (id)coreImageFilterDisplayNames;	// IMP=0x0080000000285847
+ (id)coreImageFilterNames;	// IMP=0x008000000028583a

@end
