//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (_SBUserNotificationAlert)
- (void)_sbSetAssociatedAssetManager:(id)arg1;	// IMP=0x00300000001e6159
- (struct CGImage *)_newThumbnailWithJPEG:(id)arg1 forMaxPixelDimension:(double)arg2;	// IMP=0x0030000000513f41
- (struct CGImage *)_newThumbnailWithImageSource:(struct CGImageSource *)arg1 forMaxPixelDimension:(double)arg2;	// IMP=0x0030000000513e43
- (id)_thumbnailFitToSize:(struct CGSize)arg1;	// IMP=0x0030000000513cf0
- (struct CGImageSource *)_newSource;	// IMP=0x0030000000513c7d
- (id)sbg_squareImage;	// IMP=0x0030000000513bb5
- (id)sbg_thumbnailFitToSize:(struct CGSize)arg1;	// IMP=0x0030000000513ba3
- (_Bool)isAnimated;	// IMP=0x0030000000513b5b
@property(readonly, nonatomic) struct CGSize pixelSize;
- (_Bool)sbs_hasAlpha;	// IMP=0x003000000002c84e
@end

