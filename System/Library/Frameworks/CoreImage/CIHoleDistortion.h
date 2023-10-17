//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHoleDistortion : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00600000000b88f5
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000b9761
- (struct CGRect)computeDOD;	// IMP=0x00000000000b8ba9
- (id)_colorKernel;	// IMP=0x00000000000b8b89
- (id)_geomKernel;	// IMP=0x00000000000b8b69
- (_Bool)_isIdentity;	// IMP=0x00000000000b8b3c

@end
