//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ImageHomographyResampler : NSObject
{
    double homographyMatrix[9];	// 8 = 0x8
}

- (short)ResampleCVPixels:(struct __CVBuffer *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3 toPixelBuffer:(struct __CVBuffer *)arg4;	// IMP=0x000000000003edb7
- (void)ClearOutOfBoundsPixels:(struct WorkingPixmapRecord *)arg1;	// IMP=0x000000000003e2a4
- (void)EraseCVPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x000000000003e24a
- (struct __CVBuffer *)ResampleCVPixels:(struct __CVBuffer *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3;	// IMP=0x000000000003e16c
- (struct CGImage *)ResampleCGImage:(struct CGImage *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3;	// IMP=0x000000000003d346
- (void)setHomographyMatrix:(double *)arg1;	// IMP=0x000000000003d2ee
- (id)init;	// IMP=0x000000000003d294

@end

