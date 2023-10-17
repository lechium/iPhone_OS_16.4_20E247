//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@class NSString;

@interface UIImage (MapKitExtras)
+ (id)_mapkit_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0010000000035d3f
+ (id)_mapkit_imageNamed:(id)arg1;	// IMP=0x0010000000035cae
+ (id)_mapkit_systemImageNamed:(id)arg1;	// IMP=0x001000000013b474
+ (id)_mapkit_liveTransitIndicatorImageUsingDarkMode:(_Bool)arg1;	// IMP=0x001000000021daa4
+ (id)_mapkit_liveTransitIndicatorImageApplyingColorForStatus:(long long)arg1 darkMode:(_Bool)arg2;	// IMP=0x001000000021da27
+ (id)_mapkit_imageFromVKImage:(id)arg1;	// IMP=0x001000000023cf98
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4;	// IMP=0x001000000023ceeb
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 nightMode:(_Bool)arg4;	// IMP=0x001000000023ce49
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3;	// IMP=0x001000000023ce34
- (id)_mapkit_imageWithAlpha:(double)arg1;	// IMP=0x0010000000036209
- (id)_mapkit_templateImageWithTintColor:(id)arg1;	// IMP=0x001000000003605b
- (id)_mapkit_horizontallyFlippedImage;	// IMP=0x0010000000035f61
- (id)_mapkit_dimmedImage;	// IMP=0x0010000000035de6
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x00100000000741c4
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x00100000000741bb
- (id)_mapkit_imageWithSymbolConfiguration:(id)arg1;	// IMP=0x001000000013b48d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
