//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIStretchCrop : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputSize;	// 80 = 0x50
    NSNumber *inputCropAmount;	// 88 = 0x58
    NSNumber *inputCenterStretchAmount;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x006000000016e88e
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000016dada
- (id)_kernel;	// IMP=0x000000000016daba

@end

