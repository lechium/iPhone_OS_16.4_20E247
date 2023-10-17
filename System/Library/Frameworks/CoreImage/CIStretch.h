//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIStretch : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputPoint;	// 80 = 0x50
    CIVector *inputSize;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000016d21c
@property(retain, nonatomic) CIVector *inputSize; // @synthesize inputSize;
@property(retain, nonatomic) CIVector *inputPoint; // @synthesize inputPoint;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000016d41a
- (struct CGRect)computeDOD:(struct vec4)arg1;	// IMP=0x000000000016d39d
- (id)_kernel;	// IMP=0x000000000016d37d
- (void)setDefaults;	// IMP=0x000000000016d33a

@end
