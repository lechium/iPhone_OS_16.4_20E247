//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RSSemanticImage;

@interface RSProjection2DZ : NSObject
{
    RSSemanticImage *_image;	// 8 = 0x8
    RSSemanticImage *_bufferImage;	// 16 = 0x10
    int _maxDensity2d;	// 24 = 0x18
    int _maxDensity3d;	// 28 = 0x1c
    struct {
        float global_max_density;
        float global_max_density_3d;
        float voxel_size;
        int z_slice;
        unsigned long long numSemanticChannels;
        unsigned long long numAllChannels;
        unsigned long long numHeightChannels;
    } _initParam;	// 32 = 0x20
    RSSemanticImage *_heightImage;	// 72 = 0x48
    RSSemanticImage *_bufferHeightImage;	// 80 = 0x50
    RSSemanticImage *_doorImage;	// 88 = 0x58
    RSSemanticImage *_bufferDoorImage;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001845a4
- (id)doorImage;	// IMP=0x0000000000184596
- (id)heightImage;	// IMP=0x0000000000184588
- (float)maxDensity2d;	// IMP=0x000000000018457d
- (id)semanticImage;	// IMP=0x000000000018456f
- (void)reset;	// IMP=0x00000000001844cb
- (void)runWithPointCloud:(id)arg1 temporalMeta:(id)arg2 geometryMeta:(id)arg3;	// IMP=0x000000000018353e
- (id)init;	// IMP=0x00000000001832ec

@end
