//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNAvatarImageUtilities : NSObject
{
}

+ (id)croppedAndCenteredAvatarImageForImage:(id)arg1 usingTransparencyInsets:(struct UIEdgeInsets)arg2 widthMultiplier:(double)arg3;	// IMP=0x008000000005ffa5
+ (id)croppedAndCenteredAvatarImageForImage:(id)arg1 widthMultiplier:(double)arg2;	// IMP=0x008000000005ff01
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 requiringFullOpacity:(_Bool)arg2;	// IMP=0x008000000005fcc3
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1;	// IMP=0x008000000005fcaf
+ (struct UIEdgeInsets)transparencyInsetsForImage:(id)arg1 requiringFullOpacity:(_Bool)arg2;	// IMP=0x008000000005fa33

@end

