//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface PUWallpaperPosterLegacyAsset : NSObject
{
    struct CGImage *_proxyImage;	// 8 = 0x8
}

@property(readonly, nonatomic) struct CGImage *proxyImage; // @synthesize proxyImage=_proxyImage;
- (int)loadPetsRegions:(CDUnknownBlockType)arg1;	// IMP=0x0000000000305832
- (int)loadParallaxResource:(long long)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003057a3
- (void)cancelPetsRegionsRequest:(int)arg1;	// IMP=0x000000000030579d
- (void)cancelParallaxResourceRequest:(int)arg1;	// IMP=0x0000000000305797
- (void)updateSegmentationResource:(CDUnknownBlockType)arg1;	// IMP=0x000000000030571d
@property(readonly, nonatomic) NSURL *segmentationResourceURL;
@property(readonly, nonatomic) _Bool supportsSegmentationResourceCaching;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSArray *petRegions;
@property(readonly, nonatomic) NSArray *faceRegions;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
- (id)initWithProxyImage:(struct CGImage *)arg1;	// IMP=0x000000000030566d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

